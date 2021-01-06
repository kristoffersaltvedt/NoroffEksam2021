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
	if (ClientConfiguration.CaFile.Len() == 0)
	{
		extern FString GFilePathBase;
		CertificatePath = GFilePathBase + FString("/UE4Game/") + FApp::GetProjectName() + "/" + FApp::GetProjectName() + FString("/Plugins/AwsDynamoDB/Source/ThirdParty");
		ClientConfiguration.CaFile = TCHAR_TO_UTF8(*FString::Printf(TEXT("%s/cacert.pem"), *CertificatePath));
	}
#endif

#if PLATFORM_LINUX || PLATFORM_WINDOWS
	if (ClientConfiguration.CaFile.Len() == 0)
	{
		CertificatePath = FString::Printf(TEXT("%sAwsDynamoDB/Source/ThirdParty/cacert.pem"), *IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*FPaths::ProjectPluginsDir()));
		ClientConfiguration.CaFile = TCHAR_TO_UTF8(*CertificatePath);
}
#endif

	LogVerbose("Using Certificate: %s", *ClientConfiguration.CaFile);

	Aws::Client::ClientConfiguration* m_ClientConfig = new Aws::Client::ClientConfiguration(ClientConfiguration);
	Aws::Auth::AWSCredentials* m_Credentials = new Aws::Auth::AWSCredentials(Credentials);

	AwsCoreDynamoDBClient = new Aws::DynamoDB::DynamoDBClient(*m_Credentials, *m_ClientConfig);
#endif
}

UDynamoDBClientObject* UDynamoDBClientObject::CreateDynamoDbObject(FAwsDynamoDBCredentials credentials, FAwsDynamoDBClientConfiguration clientConfiguration)
{
	LogVerbose("");

	UDynamoDBClientObject* Proxy = NewObject<UDynamoDBClientObject>();
	Proxy->AddToRoot();
	Proxy->Credentials = credentials;
	Proxy->ClientConfiguration = clientConfiguration;

	s_DynamoDBObjects.Add(Proxy);

	Proxy->Activate();

	return Proxy;
}