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
#include <osg/Vec3>
#include <osgParticle/AccelOperator>
#include <osgParticle/Particle>
#include <osgParticle/Program>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgParticle::AccelOperator)
	I_DeclaringFile("osgParticle/AccelOperator");
	I_BaseType(osgParticle::Operator);
	I_Constructor0(____AccelOperator,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::AccelOperator &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____AccelOperator__C5_AccelOperator_R1__C5_osg_CopyOp_R1,
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
	I_Method0(const osg::Vec3 &, getAcceleration,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getAcceleration,
	          "Get the acceleration vector. ",
	          "");
	I_Method1(void, setAcceleration, IN, const osg::Vec3 &, v,
	          Properties::NON_VIRTUAL,
	          __void__setAcceleration__C5_osg_Vec3_R1,
	          "Set the acceleration vector. ",
	          "");
	I_MethodWithDefaults1(void, setToGravity, IN, float, scale, 1,
	                      Properties::NON_VIRTUAL,
	                      __void__setToGravity__float,
	                      "Quickly set the acceleration vector to the gravity on earth (0, 0, -9.81). ",
	                      "The acceleration will be multiplied by the scale parameter. ");
	I_Method2(void, operate, IN, osgParticle::Particle *, P, IN, double, dt,
	          Properties::VIRTUAL,
	          __void__operate__Particle_P1__double,
	          "Apply the acceleration to a particle. Do not call this method manually. ",
	          "");
	I_Method1(void, beginOperate, IN, osgParticle::Program *, prg,
	          Properties::VIRTUAL,
	          __void__beginOperate__Program_P1,
	          "Perform some initializations. Do not call this method manually. ",
	          "");
	I_SimpleProperty(const osg::Vec3 &, Acceleration, 
	                 __C5_osg_Vec3_R1__getAcceleration, 
	                 __void__setAcceleration__C5_osg_Vec3_R1);
	I_SimpleProperty(float, ToGravity, 
	                 0, 
	                 __void__setToGravity__float);
END_REFLECTOR

