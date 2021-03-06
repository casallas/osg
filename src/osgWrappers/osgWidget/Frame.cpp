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

#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osgWidget/Frame>
#include <osgWidget/Types>
#include <osgWidget/Window>
#include <osgWidget/WindowManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgWidget::Frame::Border)
	I_DeclaringFile("osgWidget/Frame");
	I_BaseType(osgWidget::Widget);
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
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_ConstructorWithDefaults3(IN, osgWidget::Frame::BorderType, x, osgWidget::Frame::BORDER_LEFT, IN, osgWidget::point_type, x, 0.0f, IN, osgWidget::point_type, x, 0.0f,
	                           ____Border__BorderType__point_type__point_type,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::Frame::Border &, x, IN, const osg::CopyOp &, x,
	               ____Border__C5_Border_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(void, parented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__parented__Window_P1,
	          "",
	          "");
	I_Method0(void, positioned,
	          Properties::VIRTUAL,
	          __void__positioned,
	          "",
	          "");
	I_Method3(bool, mouseDrag, IN, double, x, IN, double, x, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __bool__mouseDrag__double__double__WindowManager_P1,
	          "",
	          "");
	I_Method0(osgWidget::Frame::BorderType, getBorderType,
	          Properties::NON_VIRTUAL,
	          __BorderType__getBorderType,
	          "",
	          "");
	I_Method1(void, setBorderType, IN, osgWidget::Frame::BorderType, border,
	          Properties::NON_VIRTUAL,
	          __void__setBorderType__BorderType,
	          "",
	          "");
	I_Method1(void, setBorderTypeAndName, IN, osgWidget::Frame::BorderType, border,
	          Properties::NON_VIRTUAL,
	          __void__setBorderTypeAndName__BorderType,
	          "",
	          "");
	I_SimpleProperty(osgWidget::Frame::BorderType, BorderType, 
	                 __BorderType__getBorderType, 
	                 __void__setBorderType__BorderType);
	I_SimpleProperty(osgWidget::Frame::BorderType, BorderTypeAndName, 
	                 0, 
	                 __void__setBorderTypeAndName__BorderType);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgWidget::Frame::Corner)
	I_DeclaringFile("osgWidget/Frame");
	I_BaseType(osgWidget::Widget);
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
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_ConstructorWithDefaults3(IN, osgWidget::Frame::CornerType, x, osgWidget::Frame::CORNER_LOWER_LEFT, IN, osgWidget::point_type, x, 0.0f, IN, osgWidget::point_type, x, 0.0f,
	                           ____Corner__CornerType__point_type__point_type,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::Frame::Corner &, x, IN, const osg::CopyOp &, x,
	               ____Corner__C5_Corner_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(void, parented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__parented__Window_P1,
	          "",
	          "");
	I_Method3(bool, mouseDrag, IN, double, x, IN, double, x, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __bool__mouseDrag__double__double__WindowManager_P1,
	          "",
	          "");
	I_Method0(osgWidget::Frame::CornerType, getCornerType,
	          Properties::NON_VIRTUAL,
	          __CornerType__getCornerType,
	          "",
	          "");
	I_Method1(void, setCornerType, IN, osgWidget::Frame::CornerType, corner,
	          Properties::NON_VIRTUAL,
	          __void__setCornerType__CornerType,
	          "",
	          "");
	I_Method1(void, setCornerTypeAndName, IN, osgWidget::Frame::CornerType, corner,
	          Properties::NON_VIRTUAL,
	          __void__setCornerTypeAndName__CornerType,
	          "",
	          "");
	I_SimpleProperty(osgWidget::Frame::CornerType, CornerType, 
	                 __CornerType__getCornerType, 
	                 __void__setCornerType__CornerType);
	I_SimpleProperty(osgWidget::Frame::CornerType, CornerTypeAndName, 
	                 0, 
	                 __void__setCornerTypeAndName__CornerType);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Frame::CornerType)
	I_DeclaringFile("osgWidget/Frame");
	I_EnumLabel(osgWidget::Frame::CORNER_LOWER_LEFT);
	I_EnumLabel(osgWidget::Frame::CORNER_LOWER_RIGHT);
	I_EnumLabel(osgWidget::Frame::CORNER_UPPER_LEFT);
	I_EnumLabel(osgWidget::Frame::CORNER_UPPER_RIGHT);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Frame::BorderType)
	I_DeclaringFile("osgWidget/Frame");
	I_EnumLabel(osgWidget::Frame::BORDER_LEFT);
	I_EnumLabel(osgWidget::Frame::BORDER_RIGHT);
	I_EnumLabel(osgWidget::Frame::BORDER_TOP);
	I_EnumLabel(osgWidget::Frame::BORDER_BOTTOM);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Frame::FrameOptions)
	I_DeclaringFile("osgWidget/Frame");
	I_EnumLabel(osgWidget::Frame::FRAME_RESIZE);
	I_EnumLabel(osgWidget::Frame::FRAME_MOVE);
	I_EnumLabel(osgWidget::Frame::FRAME_TEXTURE);
	I_EnumLabel(osgWidget::Frame::FRAME_ALL);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgWidget::Frame)
	I_DeclaringFile("osgWidget/Frame");
	I_BaseType(osgWidget::Table);
	I_StaticMethod1(std::string, cornerTypeToString, IN, osgWidget::Frame::CornerType, x,
	                __std_string__cornerTypeToString__CornerType_S,
	                "",
	                "");
	I_StaticMethod1(std::string, borderTypeToString, IN, osgWidget::Frame::BorderType, x,
	                __std_string__borderTypeToString__BorderType_S,
	                "",
	                "");
	I_StaticMethodWithDefaults7(osgWidget::Frame *, createSimpleFrame, IN, const std::string &, x, , IN, osgWidget::point_type, x, , IN, osgWidget::point_type, x, , IN, osgWidget::point_type, x, , IN, osgWidget::point_type, x, , IN, unsigned, int, 0, IN, osgWidget::Frame *, x, 0,
	                            __Frame_P1__createSimpleFrame__C5_std_string_R1__point_type__point_type__point_type__point_type__unsigned__Frame_P1_S,
	                            "",
	                            "");
	I_StaticMethodWithDefaults6(osgWidget::Frame *, createSimpleFrameWithSingleTexture, IN, const std::string &, x, , IN, osg::Image *, x, , IN, osgWidget::point_type, x, , IN, osgWidget::point_type, x, , IN, unsigned, int, 0, IN, osgWidget::Frame *, x, 0,
	                            __Frame_P1__createSimpleFrameWithSingleTexture__C5_std_string_R1__osg_Image_P1__point_type__point_type__unsigned__Frame_P1_S,
	                            "",
	                            "");
	I_StaticMethodWithDefaults6(osgWidget::Frame *, createSimpleFrameFromTheme, IN, const std::string &, x, , IN, osg::Image *, x, , IN, osgWidget::point_type, x, , IN, osgWidget::point_type, x, , IN, unsigned, int, 0, IN, osgWidget::Frame *, x, 0,
	                            __Frame_P1__createSimpleFrameFromTheme__C5_std_string_R1__osg_Image_P1__point_type__point_type__unsigned__Frame_P1_S,
	                            "",
	                            "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_ConstructorWithDefaults2(IN, const std::string &, x, "", IN, unsigned, int, 0,
	                           ____Frame__C5_std_string_R1__unsigned,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::Frame &, x, IN, const osg::CopyOp &, x,
	               ____Frame__C5_Frame_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method4(void, createSimpleFrame, IN, osgWidget::point_type, cw, IN, osgWidget::point_type, ch, IN, osgWidget::point_type, w, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__createSimpleFrame__point_type__point_type__point_type__point_type,
	          "",
	          "");
	I_Method3(void, createSimpleFrameWithSingleTexture, IN, osg::Image *, image, IN, osgWidget::point_type, w, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__createSimpleFrameWithSingleTexture__osg_Image_P1__point_type__point_type,
	          "",
	          "");
	I_Method1(bool, setWindow, IN, osgWidget::Window *, x,
	          Properties::NON_VIRTUAL,
	          __bool__setWindow__Window_P1,
	          "",
	          "");
	I_Method0(osgWidget::Window::EmbeddedWindow *, getEmbeddedWindow,
	          Properties::NON_VIRTUAL,
	          __EmbeddedWindow_P1__getEmbeddedWindow,
	          "",
	          "");
	I_Method0(const osgWidget::Window::EmbeddedWindow *, getEmbeddedWindow,
	          Properties::NON_VIRTUAL,
	          __C5_EmbeddedWindow_P1__getEmbeddedWindow,
	          "",
	          "");
	I_Method1(osgWidget::Frame::Corner *, getCorner, IN, osgWidget::Frame::CornerType, c,
	          Properties::NON_VIRTUAL,
	          __Corner_P1__getCorner__CornerType,
	          "",
	          "");
	I_Method1(const osgWidget::Frame::Corner *, getCorner, IN, osgWidget::Frame::CornerType, c,
	          Properties::NON_VIRTUAL,
	          __C5_Corner_P1__getCorner__CornerType,
	          "",
	          "");
	I_Method1(osgWidget::Frame::Border *, getBorder, IN, osgWidget::Frame::BorderType, b,
	          Properties::NON_VIRTUAL,
	          __Border_P1__getBorder__BorderType,
	          "",
	          "");
	I_Method1(const osgWidget::Frame::Border *, getBorder, IN, osgWidget::Frame::BorderType, b,
	          Properties::NON_VIRTUAL,
	          __C5_Border_P1__getBorder__BorderType,
	          "",
	          "");
	I_Method2(bool, resizeFrame, IN, osgWidget::point_type, x, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __bool__resizeFrame__point_type__point_type,
	          "",
	          "");
	I_Method0(unsigned int, getFlags,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getFlags,
	          "",
	          "");
	I_Method1(void, setFlags, IN, unsigned int, flags,
	          Properties::NON_VIRTUAL,
	          __void__setFlags__unsigned_int,
	          "",
	          "");
	I_Method0(bool, canResize,
	          Properties::NON_VIRTUAL,
	          __bool__canResize,
	          "",
	          "");
	I_Method0(bool, canMove,
	          Properties::NON_VIRTUAL,
	          __bool__canMove,
	          "",
	          "");
	I_Method0(bool, canTexture,
	          Properties::NON_VIRTUAL,
	          __bool__canTexture,
	          "",
	          "");
	I_ProtectedMethod1(osgWidget::Widget *, _getCorner, IN, osgWidget::Frame::CornerType, x,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __Widget_P1___getCorner__CornerType,
	                   "",
	                   "");
	I_ProtectedMethod1(osgWidget::Widget *, _getBorder, IN, osgWidget::Frame::BorderType, x,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __Widget_P1___getBorder__BorderType,
	                   "",
	                   "");
	I_SimpleProperty(osgWidget::Window::EmbeddedWindow *, EmbeddedWindow, 
	                 __EmbeddedWindow_P1__getEmbeddedWindow, 
	                 0);
	I_SimpleProperty(unsigned int, Flags, 
	                 __unsigned_int__getFlags, 
	                 __void__setFlags__unsigned_int);
	I_SimpleProperty(osgWidget::Window *, Window, 
	                 0, 
	                 __bool__setWindow__Window_P1);
END_REFLECTOR

