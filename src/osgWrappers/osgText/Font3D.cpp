// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Array>
#include <osg/BoundingBox>
#include <osg/CopyOp>
#include <osg/Geometry>
#include <osg/Object>
#include <osg/Vec2>
#include <osgText/Font3D>
#include <osgText/KerningType>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(OpenThreads::Mutex, osgText::Font3D::Font3DMutex)

BEGIN_OBJECT_REFLECTOR(osgText::Font3D)
	I_DeclaringFile("osgText/Font3D");
	I_BaseType(osg::Object);
	I_ConstructorWithDefaults1(IN, osgText::Font3D::Font3DImplementation *, implementation, 0,
	                           Properties::NON_EXPLICIT,
	                           ____Font3D__Font3DImplementation_P1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(std::string, getFileName,
	          Properties::VIRTUAL,
	          __std_string__getFileName,
	          "",
	          "");
	I_Method0(unsigned int, getFontWidth,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getFontWidth,
	          "",
	          "");
	I_Method0(unsigned int, getFontHeight,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getFontHeight,
	          "",
	          "");
	I_Method0(unsigned int, getFontDepth,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getFontDepth,
	          "",
	          "");
	I_Method3(osg::Vec2, getKerning, IN, unsigned int, leftcharcode, IN, unsigned int, rightcharcode, IN, osgText::KerningType, kerningType,
	          Properties::VIRTUAL,
	          __osg_Vec2__getKerning__unsigned_int__unsigned_int__KerningType,
	          "Get a kerning (adjustment of spacing of two adjacent character) for specified charcodes, w.r.t the current font size hint. ",
	          "");
	I_Method1(osgText::Font3D::Glyph3D *, getGlyph, IN, unsigned int, charcode,
	          Properties::VIRTUAL,
	          __Glyph3D_P1__getGlyph__unsigned_int,
	          "Get a Glyph for specified charcode, and the font size nearest to the current font size hint. ",
	          "");
	I_Method0(bool, hasVertical,
	          Properties::VIRTUAL,
	          __bool__hasVertical,
	          "Return true if this font provides vertical alignments and spacing or glyphs. ",
	          "");
	I_Method0(float, getScale,
	          Properties::VIRTUAL,
	          __float__getScale,
	          "Return the scale to apply on the glyph to have a charactere size equal to 1. ",
	          "");
	I_Method1(void, setImplementation, IN, osgText::Font3D::Font3DImplementation *, implementation,
	          Properties::NON_VIRTUAL,
	          __void__setImplementation__Font3DImplementation_P1,
	          "",
	          "");
	I_Method0(osgText::Font3D::Font3DImplementation *, getImplementation,
	          Properties::NON_VIRTUAL,
	          __Font3DImplementation_P1__getImplementation,
	          "",
	          "");
	I_Method0(const osgText::Font3D::Font3DImplementation *, getImplementation,
	          Properties::NON_VIRTUAL,
	          __C5_Font3DImplementation_P1__getImplementation,
	          "",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() ",
	          "");
	I_ProtectedMethod2(void, addGlyph, IN, unsigned int, charcode, IN, osgText::Font3D::Glyph3D *, glyph,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addGlyph__unsigned_int__Glyph3D_P1,
	                   "",
	                   "");
	I_SimpleProperty(std::string, FileName, 
	                 __std_string__getFileName, 
	                 0);
	I_SimpleProperty(unsigned int, FontDepth, 
	                 __unsigned_int__getFontDepth, 
	                 0);
	I_SimpleProperty(unsigned int, FontHeight, 
	                 __unsigned_int__getFontHeight, 
	                 0);
	I_SimpleProperty(unsigned int, FontWidth, 
	                 __unsigned_int__getFontWidth, 
	                 0);
	I_SimpleProperty(osgText::Font3D::Font3DImplementation *, Implementation, 
	                 __Font3DImplementation_P1__getImplementation, 
	                 __void__setImplementation__Font3DImplementation_P1);
	I_SimpleProperty(float, Scale, 
	                 __float__getScale, 
	                 0);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgText::Font3D::Font3DImplementation)
	I_DeclaringFile("osgText/Font3D");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Font3DImplementation,
	               "",
	               "");
	I_Method0(std::string, getFileName,
	          Properties::PURE_VIRTUAL,
	          __std_string__getFileName,
	          "",
	          "");
	I_Method1(osgText::Font3D::Glyph3D *, getGlyph, IN, unsigned int, charcode,
	          Properties::PURE_VIRTUAL,
	          __Glyph3D_P1__getGlyph__unsigned_int,
	          "Get a Glyph for specified charcode, and the font size nearest to the current font size hint. ",
	          "");
	I_Method3(osg::Vec2, getKerning, IN, unsigned int, leftcharcode, IN, unsigned int, rightcharcode, IN, osgText::KerningType, kerningType,
	          Properties::PURE_VIRTUAL,
	          __osg_Vec2__getKerning__unsigned_int__unsigned_int__KerningType,
	          "Get a kerning (adjustment of spacing of two adjacent character) for specified charcodes, w.r.t the current font size hint. ",
	          "");
	I_Method0(bool, hasVertical,
	          Properties::PURE_VIRTUAL,
	          __bool__hasVertical,
	          "Return true if this font provides vertical alignments and spacing or glyphs. ",
	          "");
	I_Method0(float, getScale,
	          Properties::PURE_VIRTUAL,
	          __float__getScale,
	          "",
	          "");
	I_Method1(void, setFontWidth, IN, unsigned int, width,
	          Properties::NON_VIRTUAL,
	          __void__setFontWidth__unsigned_int,
	          "",
	          "");
	I_Method1(void, setFontHeight, IN, unsigned int, height,
	          Properties::NON_VIRTUAL,
	          __void__setFontHeight__unsigned_int,
	          "",
	          "");
	I_Method1(void, setFontDepth, IN, unsigned int, depth,
	          Properties::NON_VIRTUAL,
	          __void__setFontDepth__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(std::string, FileName, 
	                 __std_string__getFileName, 
	                 0);
	I_SimpleProperty(unsigned int, FontDepth, 
	                 0, 
	                 __void__setFontDepth__unsigned_int);
	I_SimpleProperty(unsigned int, FontHeight, 
	                 0, 
	                 __void__setFontHeight__unsigned_int);
	I_SimpleProperty(unsigned int, FontWidth, 
	                 0, 
	                 __void__setFontWidth__unsigned_int);
	I_SimpleProperty(float, Scale, 
	                 __float__getScale, 
	                 0);
	I_PublicMemberProperty(osgText::Font3D *, _facade);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgText::Font3D::Glyph3D)
	I_DeclaringFile("osgText/Font3D");
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, glyphCode,
	               Properties::NON_EXPLICIT,
	               ____Glyph3D__unsigned_int,
	               "",
	               "");
	I_Method0(unsigned int, getGlyphCode,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getGlyphCode,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setHorizontalBearing, IN, const osg::Vec2 &, bearing,
	          Properties::NON_VIRTUAL,
	          __void__setHorizontalBearing__C5_osg_Vec2_R1,
	          "",
	          "");
	I_Method0(const osg::Vec2 &, getHorizontalBearing,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec2_R1__getHorizontalBearing,
	          "",
	          "");
	I_Method1(void, setHorizontalAdvance, IN, float, advance,
	          Properties::NON_VIRTUAL,
	          __void__setHorizontalAdvance__float,
	          "",
	          "");
	I_Method0(float, getHorizontalAdvance,
	          Properties::NON_VIRTUAL,
	          __float__getHorizontalAdvance,
	          "",
	          "");
	I_Method1(void, setVerticalBearing, IN, const osg::Vec2 &, bearing,
	          Properties::NON_VIRTUAL,
	          __void__setVerticalBearing__C5_osg_Vec2_R1,
	          "",
	          "");
	I_Method0(const osg::Vec2 &, getVerticalBearing,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec2_R1__getVerticalBearing,
	          "",
	          "");
	I_Method1(void, setVerticalAdvance, IN, float, advance,
	          Properties::NON_VIRTUAL,
	          __void__setVerticalAdvance__float,
	          "",
	          "");
	I_Method0(float, getVerticalAdvance,
	          Properties::NON_VIRTUAL,
	          __float__getVerticalAdvance,
	          "",
	          "");
	I_Method1(void, setBoundingBox, IN, osg::BoundingBox &, bb,
	          Properties::NON_VIRTUAL,
	          __void__setBoundingBox__osg_BoundingBox_R1,
	          "",
	          "");
	I_Method0(const osg::BoundingBox &, getBoundingBox,
	          Properties::NON_VIRTUAL,
	          __C5_osg_BoundingBox_R1__getBoundingBox,
	          "",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method0(osg::Geometry::PrimitiveSetList &, getFrontPrimitiveSetList,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_PrimitiveSetList_R1__getFrontPrimitiveSetList,
	          "Get the PrimitiveSetList for the front face. ",
	          "");
	I_Method0(osg::Geometry::PrimitiveSetList &, getWallPrimitiveSetList,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_PrimitiveSetList_R1__getWallPrimitiveSetList,
	          "Get the PrimitiveSetList for the wall face. ",
	          "");
	I_Method0(osg::Geometry::PrimitiveSetList &, getBackPrimitiveSetList,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_PrimitiveSetList_R1__getBackPrimitiveSetList,
	          "Get et the PrimitiveSetList for the back face. ",
	          "");
	I_Method1(void, setVertexArray, IN, osg::Vec3Array *, va,
	          Properties::NON_VIRTUAL,
	          __void__setVertexArray__osg_Vec3Array_P1,
	          "Set the VertexArray of the glyph. ",
	          "");
	I_Method0(osg::Vec3Array *, getVertexArray,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getVertexArray,
	          "Get the VertexArray of the glyph. ",
	          "");
	I_Method0(osg::Vec3Array *, getNormalArray,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getNormalArray,
	          "Get the NormalArray for the wall face. ",
	          "");
	I_Method0(float, getHorizontalWidth,
	          Properties::NON_VIRTUAL,
	          __float__getHorizontalWidth,
	          "",
	          "");
	I_Method0(float, getHorizontalHeight,
	          Properties::NON_VIRTUAL,
	          __float__getHorizontalHeight,
	          "",
	          "");
	I_Method0(float, getVerticalWidth,
	          Properties::NON_VIRTUAL,
	          __float__getVerticalWidth,
	          "",
	          "");
	I_Method0(float, getVerticalHeight,
	          Properties::NON_VIRTUAL,
	          __float__getVerticalHeight,
	          "",
	          "");
	I_Method1(void, setWidth, IN, float, width,
	          Properties::NON_VIRTUAL,
	          __void__setWidth__float,
	          "",
	          "");
	I_Method0(float, getWidth,
	          Properties::NON_VIRTUAL,
	          __float__getWidth,
	          "",
	          "");
	I_Method1(void, setHeight, IN, float, height,
	          Properties::NON_VIRTUAL,
	          __void__setHeight__float,
	          "",
	          "");
	I_Method0(float, getHeight,
	          Properties::NON_VIRTUAL,
	          __float__getHeight,
	          "",
	          "");
	I_SimpleProperty(osg::Geometry::PrimitiveSetList &, BackPrimitiveSetList, 
	                 __osg_Geometry_PrimitiveSetList_R1__getBackPrimitiveSetList, 
	                 0);
	I_SimpleProperty(osg::BoundingBox &, BoundingBox, 
	                 0, 
	                 __void__setBoundingBox__osg_BoundingBox_R1);
	I_SimpleProperty(osg::Geometry::PrimitiveSetList &, FrontPrimitiveSetList, 
	                 __osg_Geometry_PrimitiveSetList_R1__getFrontPrimitiveSetList, 
	                 0);
	I_SimpleProperty(unsigned int, GlyphCode, 
	                 __unsigned_int__getGlyphCode, 
	                 0);
	I_SimpleProperty(float, Height, 
	                 __float__getHeight, 
	                 __void__setHeight__float);
	I_SimpleProperty(float, HorizontalAdvance, 
	                 __float__getHorizontalAdvance, 
	                 __void__setHorizontalAdvance__float);
	I_SimpleProperty(const osg::Vec2 &, HorizontalBearing, 
	                 __C5_osg_Vec2_R1__getHorizontalBearing, 
	                 __void__setHorizontalBearing__C5_osg_Vec2_R1);
	I_SimpleProperty(float, HorizontalHeight, 
	                 __float__getHorizontalHeight, 
	                 0);
	I_SimpleProperty(float, HorizontalWidth, 
	                 __float__getHorizontalWidth, 
	                 0);
	I_SimpleProperty(osg::Vec3Array *, NormalArray, 
	                 __osg_Vec3Array_P1__getNormalArray, 
	                 0);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
	I_SimpleProperty(osg::Vec3Array *, VertexArray, 
	                 __osg_Vec3Array_P1__getVertexArray, 
	                 __void__setVertexArray__osg_Vec3Array_P1);
	I_SimpleProperty(float, VerticalAdvance, 
	                 __float__getVerticalAdvance, 
	                 __void__setVerticalAdvance__float);
	I_SimpleProperty(const osg::Vec2 &, VerticalBearing, 
	                 __C5_osg_Vec2_R1__getVerticalBearing, 
	                 __void__setVerticalBearing__C5_osg_Vec2_R1);
	I_SimpleProperty(float, VerticalHeight, 
	                 __float__getVerticalHeight, 
	                 0);
	I_SimpleProperty(float, VerticalWidth, 
	                 __float__getVerticalWidth, 
	                 0);
	I_SimpleProperty(osg::Geometry::PrimitiveSetList &, WallPrimitiveSetList, 
	                 __osg_Geometry_PrimitiveSetList_R1__getWallPrimitiveSetList, 
	                 0);
	I_SimpleProperty(float, Width, 
	                 __float__getWidth, 
	                 __void__setWidth__float);
END_REFLECTOR

