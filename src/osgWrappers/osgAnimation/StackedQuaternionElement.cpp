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
#include <osg/Matrix>
#include <osg/Object>
#include <osg/Quat>
#include <osgAnimation/StackedQuaternionElement>
#include <osgAnimation/Target>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::StackedQuaternionElement)
	I_DeclaringFile("osgAnimation/StackedQuaternionElement");
	I_BaseType(osgAnimation::StackedTransformElement);
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
	I_Constructor0(____StackedQuaternionElement,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::StackedQuaternionElement &, x, IN, const osg::CopyOp &, x,
	               ____StackedQuaternionElement__C5_StackedQuaternionElement_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const std::string &, x, , IN, const osg::Quat &, q, osg::Quat(0, 0, 0, 1),
	                           ____StackedQuaternionElement__C5_std_string_R1__C5_osg_Quat_R1,
	                           "",
	                           "");
	I_Constructor1(IN, const osg::Quat &, x,
	               Properties::NON_EXPLICIT,
	               ____StackedQuaternionElement__C5_osg_Quat_R1,
	               "",
	               "");
	I_Method1(void, applyToMatrix, IN, osg::Matrix &, matrix,
	          Properties::VIRTUAL,
	          __void__applyToMatrix__osg_Matrix_R1,
	          "",
	          "");
	I_Method0(osg::Matrix, getAsMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrix__getAsMatrix,
	          "",
	          "");
	I_Method0(bool, isIdentity,
	          Properties::VIRTUAL,
	          __bool__isIdentity,
	          "",
	          "");
	I_Method0(void, update,
	          Properties::VIRTUAL,
	          __void__update,
	          "",
	          "");
	I_Method0(const osg::Quat &, getQuaternion,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Quat_R1__getQuaternion,
	          "",
	          "");
	I_Method1(void, setQuaternion, IN, const osg::Quat &, x,
	          Properties::NON_VIRTUAL,
	          __void__setQuaternion__C5_osg_Quat_R1,
	          "",
	          "");
	I_Method0(osgAnimation::Target *, getOrCreateTarget,
	          Properties::VIRTUAL,
	          __Target_P1__getOrCreateTarget,
	          "",
	          "");
	I_Method0(osgAnimation::Target *, getTarget,
	          Properties::VIRTUAL,
	          __Target_P1__getTarget,
	          "",
	          "");
	I_Method0(const osgAnimation::Target *, getTarget,
	          Properties::VIRTUAL,
	          __C5_Target_P1__getTarget,
	          "",
	          "");
	I_SimpleProperty(osg::Matrix, AsMatrix, 
	                 __osg_Matrix__getAsMatrix, 
	                 0);
	I_SimpleProperty(const osg::Quat &, Quaternion, 
	                 __C5_osg_Quat_R1__getQuaternion, 
	                 __void__setQuaternion__C5_osg_Quat_R1);
	I_SimpleProperty(osgAnimation::Target *, Target, 
	                 __Target_P1__getTarget, 
	                 0);
END_REFLECTOR

