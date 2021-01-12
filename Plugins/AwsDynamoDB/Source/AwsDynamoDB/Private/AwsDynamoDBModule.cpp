/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#include "AwsDynamoDBModule.h"
#include "AwsDynamoDBLogging.h"
#include "AwsDynamoDBPrivatePCH.h"

void* FAwsDynamoDBModule::s_CoreLibs = nullptr;
void* FAwsDynamoDBModule::s_CommonLibs = nullptr;
void* FAwsDynamoDBModule::s_StreamLibs = nullptr;
void* FAwsDynamoDBModule::s_ChecksumLibs = nullptr;
void* FAwsDynamoDBModule::s_DynamoDBLibs = nullptr;

IMPLEMENT_MODULE(FAwsDynamoDBModule, AwsDynamoDB);

#define LOCTEXT_NAMESPACE "FAwsDynamoDBModule"

DEFINE_LOG_CATEGORY(LogAwsDynamoDB);

#if !DISABLE_DYNAMODB
static Aws::SDKOptions s_Options;

class FDynamoDBMemoryManager : public Aws::Utils::Memory::MemorySystemInterface
{
public:
	virtual void Begin() override {}
	virtual void End() override {}
	virtual void* AllocateMemory(std::size_t blockSize, std::size_t alignment, const char *allocationTag = nullptr) override
	{
		return FMemory::Malloc(blockSize, alignment);
	}
	virtual void FreeMemory(void* memoryPtr)
	{
		FMemory::Free(memoryPtr);
	}
};

class FDynamoDBConsoleLogger : public Aws::Utils::Logging::ConsoleLogSystem
{
public:
	FDynamoDBConsoleLogger(Aws::Utils::Logging::LogLevel logLevel)
		: ConsoleLogSystem(logLevel)
	{
	}
protected:
	virtual void ProcessFormattedStatement(Aws::String&& statement) override
	{
		FString m_Statement = UTF8_TO_TCHAR(statement.c_str());

		if (m_Statement.Contains("[FATAL]"))
		{
			LogError("%s", *m_Statement);
		}
		else if (m_Statement.Contains("[ERROR]"))
		{
			LogError("%s", *m_Statement);
		}
		else if (m_Statement.Contains("[WARN]"))
		{
			LogWarning("%s", *m_Statement);
		}
		else if (m_Statement.Contains("[INFO]"))
		{
			LogVerbose("%s", *m_Statement);
		}
		else if (m_Statement.Contains("[DEBUG]"))
		{
			LogVerbose("%s", *m_Statement);
		}
		else if (m_Statement.Contains("[TRACE]"))
		{
			LogVeryVerbose("%s", *m_Statement);
		}
		else
		{
			LogVerbose("%s", *m_Statement);
		}

		std::cout << statement;
	}
};
#endif

void FAwsDynamoDBModule::StartupModule()
{
#if !DISABLE_DYNAMODB
	LogVerbose("Loading AwsDynamoDB Module");

	TSharedPtr<IPlugin> PluginPtr = IPluginManager::Get().FindPlugin("AwsDynamoDB");

	FString PluginVersion;

	if (PluginPtr)
	{
		PluginVersion = PluginPtr->GetDescriptor().VersionName;
	}

	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));
	UE_LOG(LogTemp, Log, TEXT("Using AwsCore::DynamoDB Version: %s"), *PluginVersion);
	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));

	FString BaseDir = IPluginManager::Get().FindPlugin("AwsDynamoDB")->GetBaseDir() + "/Source/ThirdParty/AwsDynamoDBLibrary/";
	FString LibraryPath;

	FString m_Common = "aws-c-common";
	FString m_Checksums = "aws-checksums";
	FString m_Stream = "aws-c-event-stream";
	FString m_Core = "aws-cpp-sdk-core";
	FString m_DynamoDB = "aws-cpp-sdk-dynamodb";

#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Bin/Win64"));
#elif PLATFORM_LINUX
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Lib/Linux"));

	m_Common = "libaws-c-common";
	m_Checksums = "libaws-checksums";
	m_Stream = "libaws-c-event-stream";
	m_Core = "libaws-cpp-sdk-core";
	m_DynamoDB = "libaws-cpp-sdk-dynamodb";
#elif PLATFORM_MAC
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Lib/Mac"));

	m_Common = "libaws-c-common";
	m_Checksums = "libaws-checksums";
	m_Stream = "libaws-c-event-stream";
	m_Core = "libaws-cpp-sdk-core";
	m_DynamoDB = "libaws-cpp-sdk-dynamodb";
#elif PLATFORM_IOS
	LibraryPath.Empty();
#elif PLATFORM_ANDROID
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Lib/Android/arm64-v8a"));

	m_Common = "libaws-c-common";
	m_Checksums = "libaws-checksums";
	m_Stream = "libaws-c-event-stream";
	m_Core = "libaws-cpp-sdk-core";
	m_DynamoDB = "libaws-cpp-sdk-dynamodb";
#endif

	if (LibraryPath.Len() > 0)
	{
		if (!FAwsDynamoDBModule::LoadDependency(LibraryPath, m_Common, s_CommonLibs))
		{
			FFormatNamedArguments Arguments;
			Arguments.Add(TEXT("Name"), FText::FromString(m_Common));
			FMessageDialog::Open(EAppMsgType::Ok, FText::Format(LOCTEXT("LoadDependencyError", "Failed to load {Name}. Plugin will not be functional"), Arguments));
			FAwsDynamoDBModule::FreeDependency(s_CommonLibs);
			return;
		}

		if (!FAwsDynamoDBModule::LoadDependency(LibraryPath, m_Checksums, s_ChecksumLibs))
		{
			FFormatNamedArguments Arguments;
			Arguments.Add(TEXT("Name"), FText::FromString(m_Checksums));
			FMessageDialog::Open(EAppMsgType::Ok, FText::Format(LOCTEXT("LoadDependencyError", "Failed to load {Name}. Plugin will not be functional"), Arguments));
			FAwsDynamoDBModule::FreeDependency(s_ChecksumLibs);
			return;
		}

		if (!FAwsDynamoDBModule::LoadDependency(LibraryPath, m_Stream, s_StreamLibs))
		{
			FFormatNamedArguments Arguments;
			Arguments.Add(TEXT("Name"), FText::FromString(m_Stream));
			FMessageDialog::Open(EAppMsgType::Ok, FText::Format(LOCTEXT("LoadDependencyError", "Failed to load {Name}. Plugin will not be functional"), Arguments));
			FAwsDynamoDBModule::FreeDependency(s_StreamLibs);
			return;
		}

		if (!FAwsDynamoDBModule::LoadDependency(LibraryPath, m_Core, s_CoreLibs))
		{
			FFormatNamedArguments Arguments;
			Arguments.Add(TEXT("Name"), FText::FromString(m_Core));
			FMessageDialog::Open(EAppMsgType::Ok, FText::Format(LOCTEXT("LoadDependencyError", "Failed to load {Name}. Plugin will not be functional"), Arguments));
			FAwsDynamoDBModule::FreeDependency(s_CoreLibs);
			return;
		}

		if (!FAwsDynamoDBModule::LoadDependency(LibraryPath, m_DynamoDB, s_DynamoDBLibs))
		{
			FFormatNamedArguments Arguments;
			Arguments.Add(TEXT("Name"), FText::FromString(m_DynamoDB));
			FMessageDialog::Open(EAppMsgType::Ok, FText::Format(LOCTEXT("LoadDependencyError", "Failed to load {Name}. Plugin will not be functional"), Arguments));
			FAwsDynamoDBModule::FreeDependency(s_DynamoDBLibs);
			return;
		}
	}
	
	Aws::Utils::Logging::LogLevel LoggingLevel = Aws::Utils::Logging::LogLevel::Debug;
	s_Options.loggingOptions.logLevel = LoggingLevel;

#if PLATFORM_ANDROID
	//Aws::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Aws::Utils::Logging::LogcatLogSystem>("AWS", Aws::Utils::Logging::LogLevel::Debug));
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jobject Obj = FAndroidApplication::GetGameActivityThis();
	Aws::Platform::InitAndroid(Env, Obj);
#else
	//s_Options.loggingOptions.logger_create_fn = [LoggingLevel] { return std::make_shared<FDynamoDBConsoleLogger>(LoggingLevel); };
#endif

	static FDynamoDBMemoryManager MemoryManager;
	s_Options.memoryManagementOptions.memoryManager = &MemoryManager;
	Aws::InitAPI(s_Options);
#endif
}

void FAwsDynamoDBModule::ShutdownModule()
{
#if !DISABLE_DYNAMODB
	LogVerbose("");

#if !UE_EDITOR
	Aws::ShutdownAPI(s_Options);
#endif

	/*FAwsDynamoDBModule::FreeDependency(s_CommonLibs);
	FAwsDynamoDBModule::FreeDependency(s_ChecksumLibs);
	FAwsDynamoDBModule::FreeDependency(s_StreamLibs);
	FAwsDynamoDBModule::FreeDependency(s_CoreLibs);
	FAwsDynamoDBModule::FreeDependency(s_DynamoDBLibs);*/
#endif
}

bool FAwsDynamoDBModule::LoadDependency(const FString& path, const FString& fileName, void*& handle)
{
	LogVerbose("");

	FString FinalPath = FString::Printf(TEXT("%s/%s.dll"), *path, *fileName);

#if PLATFORM_ANDROID
	FinalPath = FString::Printf(TEXT("%s.so"), *fileName);
#endif
#if PLATFORM_LINUX
	FinalPath = FString::Printf(TEXT("%s/%s.so"), *path, *fileName);
#endif
#if PLATFORM_MAC
	FinalPath = FString::Printf(TEXT("%s/%s.dylib"), *path, *fileName);
#endif

	handle = FPlatformProcess::GetDllHandle(*FinalPath);

	if (handle == nullptr)
	{
		LogError(TEXT("Failed loading AwsDynamoDB %s"), *FinalPath);

		return false;
	}

	LogVerbose("Loaded %s", *FinalPath);

	return true;
}

void FAwsDynamoDBModule::FreeDependency(void*& Handle)
{
	LogVerbose("");

	if (Handle != nullptr)
	{
		FPlatformProcess::FreeDllHandle(Handle);
		Handle = nullptr;
	}
}

#undef LOCTEXT_NAMESPACE