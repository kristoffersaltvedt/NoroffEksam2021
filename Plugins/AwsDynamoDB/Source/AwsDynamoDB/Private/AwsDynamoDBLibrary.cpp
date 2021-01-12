/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#include "AwsDynamoDBLibrary.h"
#include "AwsDynamoDBLogging.h"
#include "AwsDynamoDBPrivatePCH.h"

UDynamoDBClientObject* UAwsCoreDynamoDBPlatformObject::GetDynamoDBObject()
{
	return s_DynamoDBObjects.Num() > 0 ? s_DynamoDBObjects.Last() : nullptr;
}

TArray<UDynamoDBClientObject*> UAwsCoreDynamoDBPlatformObject::GetDynamoDBObjects()
{
	return s_DynamoDBObjects;
}

void UDynamoDBClientObject::Activate()
{
	LogVerbose("");
#if !DISABLE_DYNAMODB
	FString CertificatePath;

#if PLATFORM_ANDROID
	if (m_ClientConfiguration.CaFile.Len() == 0)
	{
		extern FString GFilePathBase;
		CertificatePath = GFilePathBase + FString("/UE4Game/") + FApp::GetProjectName() + "/" + FApp::GetProjectName() + FString("/Plugins/AwsDynamoDB/Source/ThirdParty");
		m_ClientConfiguration.CaFile = TCHAR_TO_UTF8(*FString::Printf(TEXT("%s/cacert.pem"), *CertificatePath));
	}
#endif

#if PLATFORM_LINUX || PLATFORM_WINDOWS || PLATFORM_IOS
	if (m_ClientConfiguration.CaFile.Len() == 0)
	{
		FString FileName = FString("AwsDynamoDB/Source/ThirdParty/cacert.pem");

#if PLATFORM_IOS
		FileName = FileName.ToLower();
#endif
		CertificatePath = FString::Printf(TEXT("%s%s"), *IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*FPaths::ProjectPluginsDir()), *FileName);

		m_ClientConfiguration.CaFile = CertificatePath;
	}
#endif

	LogVerbose("Using Certificate: %s", *m_ClientConfiguration.CaFile);

	Aws::Client::ClientConfiguration* ClientConfiguration = new Aws::Client::ClientConfiguration(m_ClientConfiguration);
	ClientConfiguration->executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>("DynamoDB", 10);
	Aws::Auth::AWSCredentials* Credentials = new Aws::Auth::AWSCredentials(m_Credentials);

	AwsCoreDynamoDBClient = new Aws::DynamoDB::DynamoDBClient(*Credentials, *ClientConfiguration);
#endif
}

UDynamoDBClientObject* UDynamoDBClientObject::CreateDynamoDbObject(FAwsDynamoDBCredentials credentials, FAwsDynamoDBClientConfiguration clientConfiguration)
{
	LogVerbose("");

	UDynamoDBClientObject* Proxy = NewObject<UDynamoDBClientObject>();
	Proxy->AddToRoot();
	Proxy->m_Credentials = credentials;
	Proxy->m_ClientConfiguration = clientConfiguration;

	s_DynamoDBObjects.Add(Proxy);

	Proxy->Activate();

	return Proxy;
}