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
#include <osg/Object>
#include <osgAnimation/AnimationManagerBase>
#include <osgAnimation/Timeline>
#include <osgAnimation/TimelineAnimationManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::TimelineAnimationManager)
	I_DeclaringFile("osgAnimation/TimelineAnimationManager");
	I_BaseType(osgAnimation::AnimationManagerBase);
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
	I_Constructor0(____TimelineAnimationManager,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::AnimationManagerBase &, manager,
	               Properties::NON_EXPLICIT,
	               ____TimelineAnimationManager__C5_AnimationManagerBase_R1,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::TimelineAnimationManager &, nc, IN, const osg::CopyOp &, x,
	               ____TimelineAnimationManager__C5_TimelineAnimationManager_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method0(osgAnimation::Timeline *, getTimeline,
	          Properties::NON_VIRTUAL,
	          __Timeline_P1__getTimeline,
	          "",
	          "");
	I_Method0(const osgAnimation::Timeline *, getTimeline,
	          Properties::NON_VIRTUAL,
	          __C5_Timeline_P1__getTimeline,
	          "",
	          "");
	I_Method1(void, update, IN, double, time,
	          Properties::VIRTUAL,
	          __void__update__double,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Timeline *, Timeline, 
	                 __Timeline_P1__getTimeline, 
	                 0);
END_REFLECTOR

