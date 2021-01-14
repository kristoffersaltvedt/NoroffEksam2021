// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AwsDynamoDB/Public/AwsDynamoDBLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAwsDynamoDBLibrary() {}
// Cross Module References
	AWSDYNAMODB_API UClass* Z_Construct_UClass_UDynamoDBClientObject_NoRegister();
	AWSDYNAMODB_API UClass* Z_Construct_UClass_UDynamoDBClientObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AwsDynamoDB();
	AWSDYNAMODB_API UScriptStruct* Z_Construct_UScriptStruct_FAwsDynamoDBCredentials();
	AWSDYNAMODB_API UScriptStruct* Z_Construct_UScriptStruct_FAwsDynamoDBClientConfiguration();
	AWSDYNAMODB_API UClass* Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_NoRegister();
	AWSDYNAMODB_API UClass* Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject();
	AWSDYNAMODB_API UClass* Z_Construct_UClass_UDynamoDBAsync_NoRegister();
	AWSDYNAMODB_API UClass* Z_Construct_UClass_UDynamoDBAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	DEFINE_FUNCTION(UDynamoDBClientObject::execCreateDynamoDbObject)
	{
		P_GET_STRUCT(FAwsDynamoDBCredentials,Z_Param_credentials);
		P_GET_STRUCT(FAwsDynamoDBClientConfiguration,Z_Param_clientConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamoDBClientObject**)Z_Param__Result=UDynamoDBClientObject::CreateDynamoDbObject(Z_Param_credentials,Z_Param_clientConfiguration);
		P_NATIVE_END;
	}
	void UDynamoDBClientObject::StaticRegisterNativesUDynamoDBClientObject()
	{
		UClass* Class = UDynamoDBClientObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamoDbObject", &UDynamoDBClientObject::execCreateDynamoDbObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics
	{
		struct DynamoDBClientObject_eventCreateDynamoDbObject_Parms
		{
			FAwsDynamoDBCredentials credentials;
			FAwsDynamoDBClientConfiguration clientConfiguration;
			UDynamoDBClientObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_credentials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_clientConfiguration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::NewProp_credentials = { "credentials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamoDBClientObject_eventCreateDynamoDbObject_Parms, credentials), Z_Construct_UScriptStruct_FAwsDynamoDBCredentials, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::NewProp_clientConfiguration = { "clientConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamoDBClientObject_eventCreateDynamoDbObject_Parms, clientConfiguration), Z_Construct_UScriptStruct_FAwsDynamoDBClientConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamoDBClientObject_eventCreateDynamoDbObject_Parms, ReturnValue), Z_Construct_UClass_UDynamoDBClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::NewProp_credentials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::NewProp_clientConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AwsCoreDynamoDB Client Object" },
		{ "Comment", "/**\n\x09*\n\x09**/" },
		{ "ModuleRelativePath", "Public/AwsDynamoDBLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamoDBClientObject, nullptr, "CreateDynamoDbObject", nullptr, nullptr, sizeof(DynamoDBClientObject_eventCreateDynamoDbObject_Parms), Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamoDBClientObject_NoRegister()
	{
		return UDynamoDBClientObject::StaticClass();
	}
	struct Z_Construct_UClass_UDynamoDBClientObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamoDBClientObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AwsDynamoDB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamoDBClientObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamoDBClientObject_CreateDynamoDbObject, "CreateDynamoDbObject" }, // 819167203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamoDBClientObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AwsDynamoDBLibrary.h" },
		{ "ModuleRelativePath", "Public/AwsDynamoDBLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamoDBClientObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamoDBClientObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamoDBClientObject_Statics::ClassParams = {
		&UDynamoDBClientObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamoDBClientObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamoDBClientObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamoDBClientObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamoDBClientObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamoDBClientObject, 715543229);
	template<> AWSDYNAMODB_API UClass* StaticClass<UDynamoDBClientObject>()
	{
		return UDynamoDBClientObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamoDBClientObject(Z_Construct_UClass_UDynamoDBClientObject, &UDynamoDBClientObject::StaticClass, TEXT("/Script/AwsDynamoDB"), TEXT("UDynamoDBClientObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamoDBClientObject);
	DEFINE_FUNCTION(UAwsCoreDynamoDBPlatformObject::execGetDynamoDBObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDynamoDBClientObject*>*)Z_Param__Result=UAwsCoreDynamoDBPlatformObject::GetDynamoDBObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAwsCoreDynamoDBPlatformObject::execGetDynamoDBObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamoDBClientObject**)Z_Param__Result=UAwsCoreDynamoDBPlatformObject::GetDynamoDBObject();
		P_NATIVE_END;
	}
	void UAwsCoreDynamoDBPlatformObject::StaticRegisterNativesUAwsCoreDynamoDBPlatformObject()
	{
		UClass* Class = UAwsCoreDynamoDBPlatformObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamoDBObject", &UAwsCoreDynamoDBPlatformObject::execGetDynamoDBObject },
			{ "GetDynamoDBObjects", &UAwsCoreDynamoDBPlatformObject::execGetDynamoDBObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics
	{
		struct AwsCoreDynamoDBPlatformObject_eventGetDynamoDBObject_Parms
		{
			UDynamoDBClientObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AwsCoreDynamoDBPlatformObject_eventGetDynamoDBObject_Parms, ReturnValue), Z_Construct_UClass_UDynamoDBClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AWSCore|DynamoDB" },
		{ "Comment", "/*\n\x09* Utility function to get the last created game lift object\n\x09*/" },
		{ "ModuleRelativePath", "Public/AwsDynamoDBLibrary.h" },
		{ "ToolTip", "* Utility function to get the last created game lift object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject, nullptr, "GetDynamoDBObject", nullptr, nullptr, sizeof(AwsCoreDynamoDBPlatformObject_eventGetDynamoDBObject_Parms), Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics
	{
		struct AwsCoreDynamoDBPlatformObject_eventGetDynamoDBObjects_Parms
		{
			TArray<UDynamoDBClientObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDynamoDBClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AwsCoreDynamoDBPlatformObject_eventGetDynamoDBObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AWSCore|DynamoDB" },
		{ "ModuleRelativePath", "Public/AwsDynamoDBLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject, nullptr, "GetDynamoDBObjects", nullptr, nullptr, sizeof(AwsCoreDynamoDBPlatformObject_eventGetDynamoDBObjects_Parms), Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_NoRegister()
	{
		return UAwsCoreDynamoDBPlatformObject::StaticClass();
	}
	struct Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AwsDynamoDB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObject, "GetDynamoDBObject" }, // 134993648
		{ &Z_Construct_UFunction_UAwsCoreDynamoDBPlatformObject_GetDynamoDBObjects, "GetDynamoDBObjects" }, // 1275571667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AwsDynamoDBLibrary.h" },
		{ "ModuleRelativePath", "Public/AwsDynamoDBLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAwsCoreDynamoDBPlatformObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::ClassParams = {
		&UAwsCoreDynamoDBPlatformObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAwsCoreDynamoDBPlatformObject, 485742954);
	template<> AWSDYNAMODB_API UClass* StaticClass<UAwsCoreDynamoDBPlatformObject>()
	{
		return UAwsCoreDynamoDBPlatformObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAwsCoreDynamoDBPlatformObject(Z_Construct_UClass_UAwsCoreDynamoDBPlatformObject, &UAwsCoreDynamoDBPlatformObject::StaticClass, TEXT("/Script/AwsDynamoDB"), TEXT("UAwsCoreDynamoDBPlatformObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAwsCoreDynamoDBPlatformObject);
	void UDynamoDBAsync::StaticRegisterNativesUDynamoDBAsync()
	{
	}
	UClass* Z_Construct_UClass_UDynamoDBAsync_NoRegister()
	{
		return UDynamoDBAsync::StaticClass();
	}
	struct Z_Construct_UClass_UDynamoDBAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamoDBAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AwsDynamoDB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamoDBAsync_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AwsDynamoDBLibrary.h" },
		{ "ModuleRelativePath", "Public/AwsDynamoDBLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamoDBAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamoDBAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamoDBAsync_Statics::ClassParams = {
		&UDynamoDBAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamoDBAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamoDBAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamoDBAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamoDBAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamoDBAsync, 1705135658);
	template<> AWSDYNAMODB_API UClass* StaticClass<UDynamoDBAsync>()
	{
		return UDynamoDBAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamoDBAsync(Z_Construct_UClass_UDynamoDBAsync, &UDynamoDBAsync::StaticClass, TEXT("/Script/AwsDynamoDB"), TEXT("UDynamoDBAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamoDBAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
