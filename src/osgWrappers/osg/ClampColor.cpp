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

#include <osg/ClampColor>
#include <osg/CopyOp>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::ClampColor)
	I_DeclaringFile("osg/ClampColor");
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____ClampColor,
	               "",
	               "");
	I_Constructor3(IN, GLenum, vertexMode, IN, GLenum, fragmentMode, IN, GLenum, readMode,
	               ____ClampColor__GLenum__GLenum__GLenum,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ClampColor &, rhs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ClampColor__C5_ClampColor_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setClampVertexColor, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__setClampVertexColor__GLenum,
	          "",
	          "");
	I_Method0(GLenum, getClampVertexColor,
	          Properties::NON_VIRTUAL,
	          __GLenum__getClampVertexColor,
	          "",
	          "");
	I_Method1(void, setClampFragmentColor, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__setClampFragmentColor__GLenum,
	          "",
	          "");
	I_Method0(GLenum, getClampFragmentColor,
	          Properties::NON_VIRTUAL,
	          __GLenum__getClampFragmentColor,
	          "",
	          "");
	I_Method1(void, setClampReadColor, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__setClampReadColor__GLenum,
	          "",
	          "");
	I_Method0(GLenum, getClampReadColor,
	          Properties::NON_VIRTUAL,
	          __GLenum__getClampReadColor,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, x,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state. ");
	I_StaticMethod2(osg::ClampColor::Extensions *, getExtensions, IN, unsigned int, contextID, IN, bool, createIfNotInitalized,
	                __Extensions_P1__getExtensions__unsigned_int__bool_S,
	                "Returns the Extensions object for the given context. ",
	                "If createIfNotInitalized is true and the Extensions object doesn't exist, getExtensions() creates it on the given context. Returns NULL if createIfNotInitalized is false and the Extensions object doesn't exist. ");
	I_StaticMethod2(void, setExtensions, IN, unsigned int, contextID, IN, osg::ClampColor::Extensions *, extensions,
	                __void__setExtensions__unsigned_int__Extensions_P1_S,
	                "setExtensions() allows users to override the extensions across graphics contexts. ",
	                "Typically used when you have different extensions supported across graphics pipes, but need to ensure that they all use the same low common denominator extensions. ");
	I_SimpleProperty(GLenum, ClampFragmentColor, 
	                 __GLenum__getClampFragmentColor, 
	                 __void__setClampFragmentColor__GLenum);
	I_SimpleProperty(GLenum, ClampReadColor, 
	                 __GLenum__getClampReadColor, 
	                 __void__setClampReadColor__GLenum);
	I_SimpleProperty(GLenum, ClampVertexColor, 
	                 __GLenum__getClampVertexColor, 
	                 __void__setClampVertexColor__GLenum);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::ClampColor::Extensions)
	I_DeclaringFile("osg/ClampColor");
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID,
	               Properties::NON_EXPLICIT,
	               ____Extensions__unsigned_int,
	               "",
	               "");
	I_Constructor1(IN, const osg::ClampColor::Extensions &, rhs,
	               Properties::NON_EXPLICIT,
	               ____Extensions__C5_Extensions_R1,
	               "",
	               "");
	I_Method1(void, lowestCommonDenominator, IN, const osg::ClampColor::Extensions &, rhs,
	          Properties::NON_VIRTUAL,
	          __void__lowestCommonDenominator__C5_Extensions_R1,
	          "",
	          "");
	I_Method1(void, setupGLExtensions, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __void__setupGLExtensions__unsigned_int,
	          "",
	          "");
	I_Method1(void, setClampColorSupported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setClampColorSupported__bool,
	          "",
	          "");
	I_Method0(bool, isClampColorSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isClampColorSupported,
	          "",
	          "");
	I_Method2(void, glClampColor, IN, GLenum, target, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__glClampColor__GLenum__GLenum,
	          "",
	          "");

	I_SimpleProperty(bool, ClampColorSupported, 
	                 0, 
	                 __void__setClampColorSupported__bool);
END_REFLECTOR

