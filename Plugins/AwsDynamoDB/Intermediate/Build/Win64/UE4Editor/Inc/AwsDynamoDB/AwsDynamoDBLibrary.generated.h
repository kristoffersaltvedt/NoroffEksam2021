// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAwsDynamoDBCredentials;
struct FAwsDynamoDBClientConfiguration;
class UDynamoDBClientObject;
#ifdef AWSDYNAMODB_AwsDynamoDBLibrary_generated_h
#error "AwsDynamoDBLibrary.generated.h already included, missing '#pragma once' in AwsDynamoDBLibrary.h"
#endif
#define AWSDYNAMODB_AwsDynamoDBLibrary_generated_h

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamoDbObject);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamoDbObject);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDBClientObject(); \
	friend struct Z_Construct_UClass_UDynamoDBClientObject_Statics; \
public: \
	DECLARE_CLASS(UDynamoDBClientObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDBClientObject)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDBClientObject(); \
	friend struct Z_Construct_UClass_UDynamoDBClientObject_Statics; \
public: \
	DECLARE_CLASS(UDynamoDBClientObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDBClientObject)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDBClientObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDBClientObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDBClientObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDBClientObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDBClientObject(UDynamoDBClientObject&&); \
	NO_API UDynamoDBClientObject(const UDynamoDBClientObject&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDBClientObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDBClientObject(UDynamoDBClientObject&&); \
	NO_API UDynamoDBClientObject(const UDynamoDBClientObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDBClientObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDBClientObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDBClientObject)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_14_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDBClientObject>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDynamoDBObjects); \
	DECLARE_FUNCTION(execGetDynamoDBObject);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDynamoDBObjects); \
	DECLARE_FUNCTION(execGetDynamoDBObject);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAwsCoreDynamoDBPlatformObject(); \
	friend struct Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics; \
public: \
	DECLARE_CLASS(UAwsCoreDynamoDBPlatformObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UAwsCoreDynamoDBPlatformObject)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUAwsCoreDynamoDBPlatformObject(); \
	friend struct Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics; \
public: \
	DECLARE_CLASS(UAwsCoreDynamoDBPlatformObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UAwsCoreDynamoDBPlatformObject)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAwsCoreDynamoDBPlatformObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAwsCoreDynamoDBPlatformObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAwsCoreDynamoDBPlatformObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAwsCoreDynamoDBPlatformObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAwsCoreDynamoDBPlatformObject(UAwsCoreDynamoDBPlatformObject&&); \
	NO_API UAwsCoreDynamoDBPlatformObject(const UAwsCoreDynamoDBPlatformObject&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAwsCoreDynamoDBPlatformObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAwsCoreDynamoDBPlatformObject(UAwsCoreDynamoDBPlatformObject&&); \
	NO_API UAwsCoreDynamoDBPlatformObject(const UAwsCoreDynamoDBPlatformObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAwsCoreDynamoDBPlatformObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAwsCoreDynamoDBPlatformObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAwsCoreDynamoDBPlatformObject)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_38_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UAwsCoreDynamoDBPlatformObject>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_RPC_WRAPPERS
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDBAsync(); \
	friend struct Z_Construct_UClass_UDynamoDBAsync_Statics; \
public: \
	DECLARE_CLASS(UDynamoDBAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDBAsync)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDBAsync(); \
	friend struct Z_Construct_UClass_UDynamoDBAsync_Statics; \
public: \
	DECLARE_CLASS(UDynamoDBAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDBAsync)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDBAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDBAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDBAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDBAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDBAsync(UDynamoDBAsync&&); \
	NO_API UDynamoDBAsync(const UDynamoDBAsync&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDBAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDBAsync(UDynamoDBAsync&&); \
	NO_API UDynamoDBAsync(const UDynamoDBAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDBAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDBAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDBAsync)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_53_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDBAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
