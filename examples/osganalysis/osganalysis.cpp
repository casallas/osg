/* OpenSceneGraph example, osgterrain.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
*  THE SOFTWARE.
*/


#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>
#include <osgDB/ReadFile>
#include <osgGA/TrackballManipulator>
#include <osgUtil/IncrementalCompileOperation>

class SceneGraphProcessor : public osg::Referenced
{
public:
    SceneGraphProcessor()
    {
        _init();
    }

    SceneGraphProcessor(osg::ArgumentParser& arguments)
    {
        _init();

        while (arguments.read("--vbo")) { modifyDrawableSettings = true; useVBO = true;  }
        while (arguments.read("--dl")) { modifyDrawableSettings = true; useDisplayLists = true;  }
        while (arguments.read("--simplify", simplificatioRatio)) {}

        while (arguments.read("--build-mipmaps")) { modifyTextureSettings = true; buildImageMipmaps = true; }
        while (arguments.read("--compress")) { modifyTextureSettings = true; compressImages = true; }
        while (arguments.read("--disable-mipmaps")) { modifyTextureSettings = true; disableMipmaps = true; }
    }

    virtual osg::Node* process(osg::Node* node)
    {
        if (!node)
        {
            OSG_NOTICE<<"SceneGraphProcessor::process(Node*) : error cannot process NULL Node."<<std::endl;
            return 0;
        }

        OSG_NOTICE<<"SceneGraphProcessor::process("<<node<<") : "<<node->getName()<<std::endl;

        return node;
    }

protected:

    void _init()
    {
        modifyDrawableSettings = false;
        useVBO = false;
        useDisplayLists = false;
        simplificatioRatio = 1.0;

        modifyTextureSettings = false;
        buildImageMipmaps = false;
        compressImages = false;
        disableMipmaps = false;
    }

    bool modifyDrawableSettings;
    bool useVBO;
    bool useDisplayLists;
    bool simplificatioRatio;

    bool modifyTextureSettings;
    bool buildImageMipmaps;
    bool compressImages;
    bool disableMipmaps;

};


class CustomCompileCompletedCallback : public osgUtil::IncrementalCompileOperation::CompileCompletedCallback
{
public:
    CustomCompileCompletedCallback():
        completed(false) {}

    virtual bool compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet* compileSet)
    {
        OSG_NOTICE<<"compileCompleted"<<std::endl;
        completed = true;
        return true;
    }

    bool completed;
};

class DatabasePagingOperation : public osg::Operation, public osgUtil::IncrementalCompileOperation::CompileCompletedCallback
{
public:

    DatabasePagingOperation(const std::string& filename,
                             SceneGraphProcessor* sceneGraphProcessor, 
                             osgUtil::IncrementalCompileOperation* ico):
        Operation("DatabasePaging Operation", false),
        _filename(filename),
        _modelReadyToMerge(false),
        _sceneGraphProcessor(sceneGraphProcessor),
        _incrementalCompileOperation(ico) {}

    virtual void operator () (osg::Object* object)
    {
        osg::notify(osg::NOTICE)<<"LoadAndCompileOperation "<<_filename<<std::endl;

        _modelReadyToMerge = false;
        _loadedModel = osgDB::readNodeFile(_filename);

        if (_loadedModel.valid())
        {
            if (_sceneGraphProcessor.valid())
            {
                _loadedModel = _sceneGraphProcessor->process(_loadedModel.get());
            }
        }

        if (_loadedModel.valid())
        {
            if (_incrementalCompileOperation.valid())
            {
                osg::ref_ptr<osgUtil::IncrementalCompileOperation::CompileSet> compileSet =
                    new osgUtil::IncrementalCompileOperation::CompileSet(_loadedModel.get());

                compileSet->_compileCompletedCallback = this;

                _incrementalCompileOperation->add(compileSet.get());
            }
            else
            {
                _modelReadyToMerge = true;
            }
        }

        osg::notify(osg::NOTICE)<<"done LoadAndCompileOperation "<<_filename<<std::endl;
    }

    virtual bool compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet* compileSet)
    {
        OSG_NOTICE<<"compileCompleted"<<std::endl;
        _modelReadyToMerge = true;
        return true;
    }

    std::string                                         _filename;
    osg::ref_ptr<osg::Node>                             _loadedModel;
    bool                                                _modelReadyToMerge;
    osg::ref_ptr<SceneGraphProcessor>                   _sceneGraphProcessor;
    osg::ref_ptr<osgUtil::IncrementalCompileOperation>  _incrementalCompileOperation;
};


int main(int argc, char** argv)
{
    osg::ArgumentParser arguments(&argc, argv);

    // construct the viewer.
    osgViewer::Viewer viewer(arguments);

    viewer.setCameraManipulator(new osgGA::TrackballManipulator());
    viewer.addEventHandler(new osgViewer::StatsHandler());
    viewer.addEventHandler(new osgViewer::WindowSizeHandler);

    /////////////////////////////////////////////////////////////////////////////////
    //
    // IncrementalCompileOperation settings
    //
    osg::ref_ptr<osgUtil::IncrementalCompileOperation> incrementalCompile = new osgUtil::IncrementalCompileOperation;
    viewer.setIncrementalCompileOperation(incrementalCompile.get());

    if (arguments.read("--force") || arguments.read("-f"))
    {
        incrementalCompile->assignForceTextureDownloadGeometry();
    }

    if (arguments.read("-a"))
    {
        incrementalCompile->setMinimumTimeAvailableForGLCompileAndDeletePerFrame(1);
        incrementalCompile->setConservativeTimeRatio(1);
        incrementalCompile->setMaximumNumOfObjectsToCompilePerFrame(100);
    }
    else if (arguments.read("-c"))
    {
        incrementalCompile->setMinimumTimeAvailableForGLCompileAndDeletePerFrame(0.0001);
        incrementalCompile->setConservativeTimeRatio(0.01);
        incrementalCompile->setMaximumNumOfObjectsToCompilePerFrame(1);
    }

    /////////////////////////////////////////////////////////////////////////////////
    //
    // SceneGraph processing setup
    //
    osg::ref_ptr<SceneGraphProcessor> sceneGraphProcessor = new SceneGraphProcessor(arguments);

    /////////////////////////////////////////////////////////////////////////////////
    //
    // Database settings
    //
    double timeBetweenMerges = 2.0;
    while(arguments.read("--interval",timeBetweenMerges)) {}

    bool readDatabasesInPagingThread = false;
    while(arguments.read("--paging")) { readDatabasesInPagingThread = true; }

    typedef std::vector< std::string > FileNames;
    FileNames fileNames;
    for(int pos=1;pos<arguments.argc();++pos)
    {
        if (!arguments.isOption(pos))
        {
            fileNames.push_back(arguments[pos]);
        }
    }

    if (fileNames.empty())
    {
        OSG_NOTICE<<"No files loaded, please specifies files on commandline."<<std::endl;
        return 1;
    }


    if (readDatabasesInPagingThread)
    {
        // load the models using a paging thread and use the incremental compile operation to
        // manage the compilation of GL objects without breaking frame.

        unsigned int modelIndex = 0;

        osg::ref_ptr<osg::OperationThread> databasePagingThread;
        osg::ref_ptr<DatabasePagingOperation> databasePagingOperation;

        databasePagingThread = new osg::OperationThread;
        databasePagingThread->startThread();

        databasePagingOperation = new DatabasePagingOperation(
            fileNames[modelIndex++],
            sceneGraphProcessor.get(),
            incrementalCompile.get());

        databasePagingThread->add(databasePagingOperation.get());

        osg::ref_ptr<osg::Group> group = new osg::Group;
        viewer.setSceneData(group);

        viewer.realize();

        double timeOfLastMerge = viewer.getFrameStamp()->getReferenceTime();

        while(!viewer.done())
        {
            viewer.frame();

            double currentTime = viewer.getFrameStamp()->getReferenceTime();

            if (!databasePagingOperation &&
                modelIndex<fileNames.size() &&
                (currentTime-timeOfLastMerge)>timeBetweenMerges)
            {
                databasePagingOperation = new DatabasePagingOperation(
                    fileNames[modelIndex++],
                    sceneGraphProcessor.get(),
                    incrementalCompile.get());

                databasePagingThread->add(databasePagingOperation.get());
            }

            if (databasePagingOperation.get() && databasePagingOperation->_modelReadyToMerge)
            {
                timeOfLastMerge = currentTime;

                group->removeChildren(0,group->getNumChildren());

                group->addChild(databasePagingOperation->_loadedModel.get());

                viewer.home();

                // we no longer need the paging operation as it's done it's job.
                databasePagingOperation = 0;

                viewer.home();
            }
        }

    }
    else
    {
        // load the models directly and then just use the IncrementalCompileOperation to
        // compile the GL objects for us.
        typedef std::vector< osg::ref_ptr<osg::Node> > Models;
        Models models;
        unsigned int modelIndex = 0;

        for(FileNames::iterator itr = fileNames.begin();
            itr != fileNames.end();
            ++itr)
        {
            // not an option so assume string is a filename.
            osg::ref_ptr<osg::Node> node = osgDB::readNodeFile( *itr );
            if(node.valid())
            {
                if (node->getName().empty()) node->setName( *itr );

                node = sceneGraphProcessor->process(node.get());

                models.push_back(node.get());
            }
        }

        osg::ref_ptr<osg::Group> group = new osg::Group;
        group->addChild(models[modelIndex++].get());

        viewer.setSceneData(group);

        viewer.realize();

        double timeOfLastMerge = viewer.getFrameStamp()->getReferenceTime();

        osg::ref_ptr<CustomCompileCompletedCallback> compileCompletedCallback;

        while(!viewer.done())
        {
            viewer.frame();

            double currentTime = viewer.getFrameStamp()->getReferenceTime();

            if (!compileCompletedCallback &&
                modelIndex<fileNames.size() &&
                (currentTime-timeOfLastMerge)>timeBetweenMerges)
            {
                OSG_NOTICE<<"Compiling model "<<modelIndex<<" at "<<currentTime<<std::endl;

                osg::ref_ptr<osgUtil::IncrementalCompileOperation::CompileSet> compileSet =
                    new osgUtil::IncrementalCompileOperation::CompileSet(models[modelIndex].get());

                compileCompletedCallback = new CustomCompileCompletedCallback;

                compileSet->_compileCompletedCallback = compileCompletedCallback;

                incrementalCompile->add(compileSet.get());
            }

            if (compileCompletedCallback.valid() && compileCompletedCallback->completed)
            {
                OSG_NOTICE<<"Merging model "<<modelIndex<<" at "<<currentTime<<std::endl;

                timeOfLastMerge = currentTime;

                group->removeChildren(0,group->getNumChildren());

                group->addChild(models[modelIndex++].get());

                compileCompletedCallback = 0;

                viewer.home();
            }
        }
    }

    return 0;
}
