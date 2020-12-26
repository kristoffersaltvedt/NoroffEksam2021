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