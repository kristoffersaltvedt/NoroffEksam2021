// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FQuat;
class USceneComponent;
struct FRotator;
#ifdef NOROFF_EXAM2021_Quaternions_Rotation_generated_h
#error "Quaternions_Rotation.generated.h already included, missing '#pragma once' in Quaternions_Rotation.h"
#endif
#define NOROFF_EXAM2021_Quaternions_Rotation_generated_h

#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_SPARSE_DATA
#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion);


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion);


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuaternions_Rotation(); \
	friend struct Z_Construct_UClass_UQuaternions_Rotation_Statics; \
public: \
	DECLARE_CLASS(UQuaternions_Rotation, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Noroff_Exam2021"), NO_API) \
	DECLARE_SERIALIZER(UQuaternions_Rotation)


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuaternions_Rotation(); \
	friend struct Z_Construct_UClass_UQuaternions_Rotation_Statics; \
public: \
	DECLARE_CLASS(UQuaternions_Rotation, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Noroff_Exam2021"), NO_API) \
	DECLARE_SERIALIZER(UQuaternions_Rotation)


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuaternions_Rotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuaternions_Rotation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuaternions_Rotation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuaternions_Rotation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuaternions_Rotation(UQuaternions_Rotation&&); \
	NO_API UQuaternions_Rotation(const UQuaternions_Rotation&); \
public:


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuaternions_Rotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuaternions_Rotation(UQuaternions_Rotation&&); \
	NO_API UQuaternions_Rotation(const UQuaternions_Rotation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuaternions_Rotation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuaternions_Rotation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuaternions_Rotation)


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_12_PROLOG
#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_SPARSE_DATA \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_RPC_WRAPPERS \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_INCLASS \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_SPARSE_DATA \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOROFF_EXAM2021_API UClass* StaticClass<class UQuaternions_Rotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoroffExam2021_Source_Noroff_Exam2021_Public_Quaternions_Rotation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
