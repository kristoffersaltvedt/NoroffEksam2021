/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#include "AwsDynamoDBAsync.h"
#include "AwsDynamoDBLogging.h"
#include "AwsDynamoDBPrivatePCH.h"

UDynamoBatchGetItem* UDynamoBatchGetItem::BatchGetItem(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FBatchGetItemRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoBatchGetItem>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoBatchGetItem::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::BatchGetItemRequest m_Request;

	for (auto& m_Element : RequestData.RequestItems)
	{
		Aws::DynamoDB::Model::KeysAndAttributes Attribute;

		for (auto& m_Keys : m_Element.Value.Keys)
		{
			Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> Map;

			for (auto& m_Map : m_Keys.Map)
			{
				Aws::String String = TCHAR_TO_UTF8(*m_Map.Key);
				Aws::DynamoDB::Model::AttributeValue AttributeValue = m_Map.Value;
				
				Map.insert({ String, AttributeValue });
			}

			Attribute.AddKeys(Map);
		}

		for (auto& m_AttributesToGet : m_Element.Value.AttributesToGet)
		{
			Attribute.AddAttributesToGet(TCHAR_TO_UTF8(*m_AttributesToGet));
		}

		Attribute.SetConsistentRead(m_Element.Value.bConsistentRead);

		if (m_Element.Value.ProjectionExpression.Len() > 0)
			Attribute.SetProjectionExpression(TCHAR_TO_UTF8(*m_Element.Value.ProjectionExpression));

		for (auto& m_ExpressionAttributeNames : m_Element.Value.ExpressionAttributeNames)
		{
			Attribute.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_ExpressionAttributeNames.Key), TCHAR_TO_UTF8(*m_ExpressionAttributeNames.Value));
		}

		m_Request.AddRequestItems(TCHAR_TO_UTF8(*m_Element.Key), Attribute);
	}

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::BatchGetItemRequest&, Aws::DynamoDB::Model::BatchGetItemOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->BatchGetItemAsync(m_Request, m_Callback);
#endif
}

UDynamoBatchWriteItem* UDynamoBatchWriteItem::BatchWriteItem(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FBatchWriteItemRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoBatchWriteItem>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoBatchWriteItem::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::BatchWriteItemRequest m_Request;

	for (auto& m_Element : RequestData.RequestItems)
	{
		Aws::Vector<Aws::DynamoDB::Model::WriteRequest> m_Arr;

		for (auto& m_WriteRequest : m_Element.Value.Requests)
		{
			m_Arr.emplace_back(m_WriteRequest);
		}

		m_Request.AddRequestItems(TCHAR_TO_UTF8(*m_Element.Key), m_Arr);
	}

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NONE)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));
	
	if (RequestData.ReturnItemCollectionMetrics != EReturnItemCollectionMetrics::NOT_SET)
		m_Request.SetReturnItemCollectionMetrics(static_cast<Aws::DynamoDB::Model::ReturnItemCollectionMetrics>(RequestData.ReturnItemCollectionMetrics));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::BatchWriteItemRequest&, Aws::DynamoDB::Model::BatchWriteItemOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->BatchWriteItemAsync(m_Request, m_Callback);
#endif
}

UDynamoCreateBackup* UDynamoCreateBackup::CreateBackup(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FCreateBackupRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoCreateBackup>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoCreateBackup::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::CreateBackupRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.BackupName.Len() > 0)
		m_Request.SetBackupName(TCHAR_TO_UTF8(*RequestData.BackupName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::CreateBackupRequest&, Aws::DynamoDB::Model::CreateBackupOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->CreateBackupAsync(m_Request, m_Callback);
#endif
}

UDynamoCreateGlobalTable* UDynamoCreateGlobalTable::CreateGlobalTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FCreateGlobalTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoCreateGlobalTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoCreateGlobalTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::CreateGlobalTableRequest m_Request;

	if (RequestData.GlobalTableName.Len() > 0)
		m_Request.SetGlobalTableName(TCHAR_TO_UTF8(*RequestData.GlobalTableName));

	for (auto& m_Element : RequestData.ReplicationGroup)
		m_Request.AddReplicationGroup(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::CreateGlobalTableRequest&, Aws::DynamoDB::Model::CreateGlobalTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->CreateGlobalTableAsync(m_Request, m_Callback);
#endif
}

UDynamoCreateTable* UDynamoCreateTable::CreateTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FCreateTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoCreateTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoCreateTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::CreateTableRequest m_Request;

	for (auto& m_Element : RequestData.AttributeDefinitions)
		m_Request.AddAttributeDefinitions(m_Element);

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	for (auto& m_Element : RequestData.KeySchema)
		m_Request.AddKeySchema(m_Element);

	for (auto& m_Element : RequestData.LocalSecondaryIndexes)
		m_Request.AddLocalSecondaryIndexes(m_Element);

	for (auto& m_Element : RequestData.GlobalSecondaryIndexes)
		m_Request.AddGlobalSecondaryIndexes(m_Element);

	if (RequestData.BillingMode != EBillingMode::NOT_SET)
		m_Request.SetBillingMode(static_cast<Aws::DynamoDB::Model::BillingMode>(RequestData.BillingMode));
	m_Request.SetProvisionedThroughput(RequestData.ProvisionedThroughput);
	m_Request.SetStreamSpecification(RequestData.StreamSpecification);
	m_Request.SetSSESpecification(RequestData.SSESpecification);

	for (auto& m_Element : RequestData.Tags)
		m_Request.AddTags(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::CreateTableRequest&, Aws::DynamoDB::Model::CreateTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->CreateTableAsync(m_Request, m_Callback);
#endif
}

UDynamoDeleteBackup* UDynamoDeleteBackup::DeleteBackup(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDeleteBackupRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDeleteBackup>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDeleteBackup::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DeleteBackupRequest m_Request;

	if (RequestData.BackupArn.Len() > 0)
		m_Request.SetBackupArn(TCHAR_TO_UTF8(*RequestData.BackupArn));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DeleteBackupRequest&, Aws::DynamoDB::Model::DeleteBackupOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DeleteBackupAsync(m_Request, m_Callback);
#endif
}

UDynamoDeleteItem* UDynamoDeleteItem::DeleteItem(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDeleteItemRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDeleteItem>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoDeleteItem::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DeleteItemRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	for (auto& m_Element : RequestData.Key)
		m_Request.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	for (auto& m_Element : RequestData.Expected)
		m_Request.AddExpected(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
	
	if (RequestData.ConditionalOperator != EConditionalOperator::NOT_SET)
		m_Request.SetConditionalOperator(static_cast<Aws::DynamoDB::Model::ConditionalOperator>(RequestData.ConditionalOperator));
	if (RequestData.ReturnValues != EReturnValue::NOT_SET)
		m_Request.SetReturnValues(static_cast<Aws::DynamoDB::Model::ReturnValue>(RequestData.ReturnValues));
	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));
	if (RequestData.ReturnItemCollectionMetrics != EReturnItemCollectionMetrics::NOT_SET)
		m_Request.SetReturnItemCollectionMetrics(static_cast<Aws::DynamoDB::Model::ReturnItemCollectionMetrics>(RequestData.ReturnItemCollectionMetrics));
	
	m_Request.SetConditionExpression(TCHAR_TO_UTF8(*RequestData.ConditionExpression));
	
	for (auto& m_Element : RequestData.ExpressionAttributeNames)
		m_Request.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));

	for (auto& m_Element : RequestData.ExpressionAttributeValues)
		m_Request.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DeleteItemRequest&, Aws::DynamoDB::Model::DeleteItemOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DeleteItemAsync(m_Request, m_Callback);
#endif
}

UDynamoDeleteTable* UDynamoDeleteTable::DeleteTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDeleteTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDeleteTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDeleteTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DeleteTableRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DeleteTableRequest&, Aws::DynamoDB::Model::DeleteTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DeleteTableAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeBackup* UDynamoDescribeBackup::DescribeBackup(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeBackupRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeBackup>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeBackup::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeBackupRequest m_Request;

	if (RequestData.BackupArn.Len() > 0)
		m_Request.SetBackupArn(TCHAR_TO_UTF8(*RequestData.BackupArn));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeBackupRequest&, Aws::DynamoDB::Model::DescribeBackupOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeBackupAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeContinuousBackups* UDynamoDescribeContinuousBackups::DescribeContinuousBackups(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeContinuousBackupsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeContinuousBackups>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeContinuousBackups::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeContinuousBackupsRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeContinuousBackupsRequest&, Aws::DynamoDB::Model::DescribeContinuousBackupsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeContinuousBackupsAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeContributorInsights* UDynamoDescribeContributorInsights::DescribeContributorInsights(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeContributorInsightsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeContributorInsights>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeContributorInsights::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeContributorInsightsRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.IndexName.Len() > 0)
		m_Request.SetIndexName(TCHAR_TO_UTF8(*RequestData.IndexName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeContributorInsightsRequest&, Aws::DynamoDB::Model::DescribeContributorInsightsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeContributorInsightsAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeEndpoints* UDynamoDescribeEndpoints::DescribeEndpoints(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeEndpointsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeEndpoints>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeEndpoints::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeEndpointsRequest m_Request;

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeEndpointsRequest&, Aws::DynamoDB::Model::DescribeEndpointsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeEndpointsAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeGlobalTable* UDynamoDescribeGlobalTable::DescribeGlobalTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeGlobalTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeGlobalTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoDescribeGlobalTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeGlobalTableRequest m_Request;

	if (RequestData.GlobalTableName.Len() > 0)
		m_Request.SetGlobalTableName(TCHAR_TO_UTF8(*RequestData.GlobalTableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeGlobalTableRequest&, Aws::DynamoDB::Model::DescribeGlobalTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeGlobalTableAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeGlobalTableSettings* UDynamoDescribeGlobalTableSettings::DescribeGlobalTableSettings(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeGlobalTableSettingsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeGlobalTableSettings>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeGlobalTableSettings::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeGlobalTableSettingsRequest m_Request;

	if (RequestData.GlobalTableName.Len() > 0)
		m_Request.SetGlobalTableName(TCHAR_TO_UTF8(*RequestData.GlobalTableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeGlobalTableSettingsRequest&, Aws::DynamoDB::Model::DescribeGlobalTableSettingsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeGlobalTableSettingsAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeLimits* UDynamoDescribeLimits::DescribeLimits(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeLimitsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeLimits>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeLimits::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeLimitsRequest m_Request;

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeLimitsRequest&, Aws::DynamoDB::Model::DescribeLimitsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeLimitsAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeTable* UDynamoDescribeTable::DescribeTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeTableRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeTableRequest&, Aws::DynamoDB::Model::DescribeTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeTableAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeTableReplicaAutoScaling* UDynamoDescribeTableReplicaAutoScaling::DescribeTableReplicaAutoScaling(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeTableReplicaAutoScalingRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeTableReplicaAutoScaling>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeTableReplicaAutoScaling::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeTableReplicaAutoScalingRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeTableReplicaAutoScalingRequest&, Aws::DynamoDB::Model::DescribeTableReplicaAutoScalingOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeTableReplicaAutoScalingAsync(m_Request, m_Callback);
#endif
}

UDynamoDescribeTimeToLive* UDynamoDescribeTimeToLive::DescribeTimeToLive(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FDescribeTimeToLiveRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoDescribeTimeToLive>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoDescribeTimeToLive::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::DescribeTimeToLiveRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::DescribeTimeToLiveRequest&, Aws::DynamoDB::Model::DescribeTimeToLiveOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->DescribeTimeToLiveAsync(m_Request, m_Callback);
#endif
}

UDynamoGetItem* UDynamoGetItem::GetItem(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FGetItemRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoGetItem>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoGetItem::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::GetItemRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	for (auto& m_Element : RequestData.Key)
		m_Request.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	for (auto& m_Element : RequestData.AttributesToGet)
		m_Request.AddAttributesToGet(TCHAR_TO_UTF8(*m_Element));

	m_Request.SetConsistentRead(RequestData.bConsistentRead);

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));
	
	if (RequestData.ProjectionExpression.Len() > 0)
		m_Request.SetProjectionExpression(TCHAR_TO_UTF8(*RequestData.ProjectionExpression));

	for (auto& m_Element : RequestData.ExpressionAttributeNames)
		m_Request.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::GetItemRequest&, Aws::DynamoDB::Model::GetItemOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->GetItemAsync(m_Request, m_Callback);
#endif
}

UDynamoListBackups* UDynamoListBackups::ListBackups(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FListBackupsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoListBackups>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoListBackups::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::ListBackupsRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.Limit > 0)
		m_Request.SetLimit(RequestData.Limit);

	m_Request.SetTimeRangeLowerBound(Aws::Utils::DateTime(TCHAR_TO_UTF8(*RequestData.TimeRangeLowerBound.ToIso8601()), Aws::Utils::DateFormat::ISO_8601));
	m_Request.SetTimeRangeUpperBound(Aws::Utils::DateTime(TCHAR_TO_UTF8(*RequestData.TimeRangeUpperBound.ToIso8601()), Aws::Utils::DateFormat::ISO_8601));

	if (RequestData.ExclusiveStartBackupArn.Len() > 0)
		m_Request.SetExclusiveStartBackupArn(TCHAR_TO_UTF8(*RequestData.ExclusiveStartBackupArn));

	if (RequestData.BackupType != EBackupTypeFilter::NOT_SET)
		m_Request.SetBackupType(static_cast<Aws::DynamoDB::Model::BackupTypeFilter>(RequestData.BackupType));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::ListBackupsRequest&, Aws::DynamoDB::Model::ListBackupsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->ListBackupsAsync(m_Request, m_Callback);
#endif
}

UDynamoListContributorInsights* UDynamoListContributorInsights::ListContributorInsights(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FListContributorInsightsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoListContributorInsights>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoListContributorInsights::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::ListContributorInsightsRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.NextToken.Len() > 0)
		m_Request.SetNextToken(TCHAR_TO_UTF8(*RequestData.NextToken));

	if (RequestData.MaxResults > 0)
		m_Request.SetMaxResults(RequestData.MaxResults);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::ListContributorInsightsRequest&, Aws::DynamoDB::Model::ListContributorInsightsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->ListContributorInsightsAsync(m_Request, m_Callback);
#endif
}

UDynamoListGlobalTables* UDynamoListGlobalTables::ListGlobalTables(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FListGlobalTablesRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoListGlobalTables>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoListGlobalTables::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::ListGlobalTablesRequest m_Request;

	if (RequestData.ExclusiveStartGlobalTableName.Len() > 0)
		m_Request.SetExclusiveStartGlobalTableName(TCHAR_TO_UTF8(*RequestData.ExclusiveStartGlobalTableName));

	if (RequestData.Limit > 0)
		m_Request.SetLimit(RequestData.Limit);

	if (RequestData.RegionName.Len() > 0)
		m_Request.SetRegionName(TCHAR_TO_UTF8(*RequestData.RegionName));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::ListGlobalTablesRequest&, Aws::DynamoDB::Model::ListGlobalTablesOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->ListGlobalTablesAsync(m_Request, m_Callback);
#endif
}

UDynamoListTables* UDynamoListTables::ListTables(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FListTablesRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoListTables>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoListTables::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::ListTablesRequest m_Request;

	if (RequestData.ExclusiveStartTableName.Len() > 0)
		m_Request.SetExclusiveStartTableName(TCHAR_TO_UTF8(*RequestData.ExclusiveStartTableName));

	if (RequestData.Limit > 0)
		m_Request.SetLimit(RequestData.Limit);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::ListTablesRequest&, Aws::DynamoDB::Model::ListTablesOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->ListTablesAsync(m_Request, m_Callback);
#endif
}

UDynamoListTagsOfResource* UDynamoListTagsOfResource::ListTagsOfResource(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FListTagsOfResourceRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoListTagsOfResource>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoListTagsOfResource::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::ListTagsOfResourceRequest m_Request;

	if (RequestData.ResourceArn.Len() > 0)
		m_Request.SetResourceArn(TCHAR_TO_UTF8(*RequestData.ResourceArn));

	if (RequestData.NextToken.Len() > 0)
		m_Request.SetNextToken(TCHAR_TO_UTF8(*RequestData.NextToken));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::ListTagsOfResourceRequest&, Aws::DynamoDB::Model::ListTagsOfResourceOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->ListTagsOfResourceAsync(m_Request, m_Callback);
#endif
}

UDynamoPutItem* UDynamoPutItem::PutItem(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FPutItemRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoPutItem>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoPutItem::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::PutItemRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	for (auto& m_Element : RequestData.Item)
		m_Request.AddItem(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	for (auto& m_Element : RequestData.Expected)
		m_Request.AddExpected(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	if (RequestData.ReturnValues != EReturnValue::NOT_SET)
		m_Request.SetReturnValues(static_cast<Aws::DynamoDB::Model::ReturnValue>(RequestData.ReturnValues));
	
	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));
	
	if (RequestData.ReturnItemCollectionMetrics != EReturnItemCollectionMetrics::NOT_SET)
		m_Request.SetReturnItemCollectionMetrics(static_cast<Aws::DynamoDB::Model::ReturnItemCollectionMetrics>(RequestData.ReturnItemCollectionMetrics));

	if (RequestData.ConditionalOperator != EConditionalOperator::NOT_SET)
		m_Request.SetConditionalOperator(static_cast<Aws::DynamoDB::Model::ConditionalOperator>(RequestData.ConditionalOperator));

	if (RequestData.ConditionExpression.Len() > 0)
		m_Request.SetConditionExpression(TCHAR_TO_UTF8(*RequestData.ConditionExpression));

	for (auto& m_Element : RequestData.ExpressionAttributeNames)
		m_Request.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));

	for (auto& m_Element : RequestData.ExpressionAttributeValues)
		m_Request.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::PutItemRequest&, Aws::DynamoDB::Model::PutItemOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->PutItemAsync(m_Request, m_Callback);
#endif
}

UDynamoQuery* UDynamoQuery::Query(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FQueryRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoQuery>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoQuery::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::QueryRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.IndexName.Len() > 0)
		m_Request.SetIndexName(TCHAR_TO_UTF8(*RequestData.IndexName));

	if (RequestData.Select != ESelect::NOT_SET)
		m_Request.SetSelect(static_cast<Aws::DynamoDB::Model::Select>(RequestData.Select));

	for (auto& m_Element : RequestData.AttributesToGet)
		m_Request.AddAttributesToGet(TCHAR_TO_UTF8(*m_Element));

	if (RequestData.Limit > 0)
		m_Request.SetLimit(RequestData.Limit);

	m_Request.SetConsistentRead(RequestData.bConsistentRead);

	for (auto& m_Element : RequestData.KeyConditions)
		m_Request.AddKeyConditions(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	for (auto& m_Element : RequestData.QueryFilter)
		m_Request.AddQueryFilter(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	if (RequestData.ConditionalOperator != EConditionalOperator::NOT_SET)
		m_Request.SetConditionalOperator(static_cast<Aws::DynamoDB::Model::ConditionalOperator>(RequestData.ConditionalOperator));

	m_Request.SetScanIndexForward(RequestData.bScanIndexForward);

	for (auto& m_Element : RequestData.ExclusiveStartKey)
		m_Request.AddExclusiveStartKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));

	if (RequestData.ProjectionExpression.Len() > 0)
		m_Request.SetProjectionExpression(TCHAR_TO_UTF8(*RequestData.ProjectionExpression));

	if (RequestData.FilterExpression.Len() > 0)
		m_Request.SetFilterExpression(TCHAR_TO_UTF8(*RequestData.FilterExpression));

	if (RequestData.KeyConditionExpression.Len() > 0)
		m_Request.SetKeyConditionExpression(TCHAR_TO_UTF8(*RequestData.KeyConditionExpression));

	for (auto& m_Element : RequestData.ExpressionAttributeNames)
		m_Request.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));

	for (auto& m_Element : RequestData.ExpressionAttributeValues)
		m_Request.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::QueryRequest&, Aws::DynamoDB::Model::QueryOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->QueryAsync(m_Request, m_Callback);
#endif
}

UDynamoRestoreTableFromBackup* UDynamoRestoreTableFromBackup::RestoreTableFromBackup(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FRestoreTableFromBackupRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoRestoreTableFromBackup>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoRestoreTableFromBackup::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::RestoreTableFromBackupRequest m_Request;

	if (RequestData.TargetTableName.Len() > 0)
		m_Request.SetTargetTableName(TCHAR_TO_UTF8(*RequestData.TargetTableName));

	if (RequestData.BackupArn.Len() > 0)
		m_Request.SetBackupArn(TCHAR_TO_UTF8(*RequestData.BackupArn));

	if (RequestData.BillingModeOverride != EBillingMode::NOT_SET)
		m_Request.SetBillingModeOverride(static_cast<Aws::DynamoDB::Model::BillingMode>(RequestData.BillingModeOverride));

	for (auto& m_Element : RequestData.GlobalSecondaryIndexOverride)
		m_Request.AddGlobalSecondaryIndexOverride(m_Element);

	for (auto& m_Element : RequestData.LocalSecondaryIndexOverride)
		m_Request.AddLocalSecondaryIndexOverride(m_Element);

	m_Request.SetProvisionedThroughputOverride(RequestData.ProvisionedThroughputOverride);
	m_Request.SetSSESpecificationOverride(RequestData.SSESpecificationOverride);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::RestoreTableFromBackupRequest&, Aws::DynamoDB::Model::RestoreTableFromBackupOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->RestoreTableFromBackupAsync(m_Request, m_Callback);
#endif
}

UDynamoRestoreTableToPointInTime* UDynamoRestoreTableToPointInTime::RestoreTableToPointInTime(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FRestoreTableToPointInTimeRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoRestoreTableToPointInTime>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoRestoreTableToPointInTime::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::RestoreTableToPointInTimeRequest m_Request;

	if (RequestData.SourceTableArn.Len() > 0)
		m_Request.SetSourceTableArn(TCHAR_TO_UTF8(*RequestData.SourceTableArn));

	if (RequestData.SourceTableName.Len() > 0)
		m_Request.SetSourceTableName(TCHAR_TO_UTF8(*RequestData.SourceTableName));

	if (RequestData.TargetTableName.Len() > 0)
		m_Request.SetTargetTableName(TCHAR_TO_UTF8(*RequestData.TargetTableName));

	m_Request.SetUseLatestRestorableTime(RequestData.bUseLatestRestorableTime);
	m_Request.SetRestoreDateTime(Aws::Utils::DateTime(TCHAR_TO_UTF8(*RequestData.RestoreDateTime.ToIso8601()), Aws::Utils::DateFormat::ISO_8601));
	
	if (RequestData.BillingModeOverride != EBillingMode::NOT_SET)
		m_Request.SetBillingModeOverride(static_cast<Aws::DynamoDB::Model::BillingMode>(RequestData.BillingModeOverride));

	for (auto& m_Element : RequestData.GlobalSecondaryIndexOverride)
		m_Request.AddGlobalSecondaryIndexOverride(m_Element);

	for (auto& m_Element : RequestData.LocalSecondaryIndexOverride)
		m_Request.AddLocalSecondaryIndexOverride(m_Element);

	m_Request.SetProvisionedThroughputOverride(RequestData.ProvisionedThroughputOverride);
	m_Request.SetSSESpecificationOverride(RequestData.SSESpecificationOverride);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::RestoreTableToPointInTimeRequest&, Aws::DynamoDB::Model::RestoreTableToPointInTimeOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->RestoreTableToPointInTimeAsync(m_Request, m_Callback);
#endif
}

UDynamoScan* UDynamoScan::Scan(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FScanRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoScan>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoScan::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::ScanRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.IndexName.Len() > 0)
		m_Request.SetIndexName(TCHAR_TO_UTF8(*RequestData.IndexName));

	for (auto& m_Element : RequestData.AttributesToGet)
		m_Request.AddAttributesToGet(TCHAR_TO_UTF8(*m_Element));

	if (RequestData.Limit > 0)
		m_Request.SetLimit(RequestData.Limit);

	if (RequestData.Select != ESelect::NOT_SET)
		m_Request.SetSelect(static_cast<Aws::DynamoDB::Model::Select>(RequestData.Select));

	for (auto& m_Elemenet : RequestData.ScanFilter)
		m_Request.AddScanFilter(TCHAR_TO_UTF8(*m_Elemenet.Key), m_Elemenet.Value);

	if (RequestData.ConditionalOperator != EConditionalOperator::NOT_SET)
		m_Request.SetConditionalOperator(static_cast<Aws::DynamoDB::Model::ConditionalOperator>(RequestData.ConditionalOperator));
	
	for (auto& m_Elemenet : RequestData.ExclusiveStartKey)
		m_Request.AddExclusiveStartKey(TCHAR_TO_UTF8(*m_Elemenet.Key), m_Elemenet.Value);
	
	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));

	if (RequestData.TotalSegments > 0)
		m_Request.SetTotalSegments(RequestData.TotalSegments);

	if (RequestData.Segment > 0)
		m_Request.SetSegment(RequestData.Segment);

	if (RequestData.ProjectionExpression.Len() > 0)
		m_Request.SetProjectionExpression(TCHAR_TO_UTF8(*RequestData.ProjectionExpression));

	if (RequestData.FilterExpression.Len() > 0)
		m_Request.SetFilterExpression(TCHAR_TO_UTF8(*RequestData.FilterExpression));

	for (auto& m_Elemenet : RequestData.ExpressionAttributeNames)
		m_Request.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Elemenet.Key), TCHAR_TO_UTF8(*m_Elemenet.Value));

	for (auto& m_Elemenet : RequestData.ExpressionAttributeValues)
		m_Request.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Elemenet.Key), m_Elemenet.Value);

	m_Request.SetConsistentRead(RequestData.bConsistentRead);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::ScanRequest&, Aws::DynamoDB::Model::ScanOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->ScanAsync(m_Request, m_Callback);
#endif
}

UDynamoTagResource* UDynamoTagResource::TagResource(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FTagResourceRequestDynamoDB& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoTagResource>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoTagResource::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::TagResourceRequest m_Request;

	if (RequestData.ResourceArn.Len() > 0)
		m_Request.SetResourceArn(TCHAR_TO_UTF8(*RequestData.ResourceArn));

	for (auto& m_Element : RequestData.Tags)
		m_Request.AddTags(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::TagResourceRequest&, Aws::DynamoDB::Model::TagResourceOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->TagResourceAsync(m_Request, m_Callback);
#endif
}

UDynamoTransactGetItems* UDynamoTransactGetItems::TransactGetItems(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FTransactGetItemsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoTransactGetItems>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoTransactGetItems::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::TransactGetItemsRequest m_Request;

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));

	for (auto& m_Element : RequestData.TransactItems)
		m_Request.AddTransactItems(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::TransactGetItemsRequest&, Aws::DynamoDB::Model::TransactGetItemsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->TransactGetItemsAsync(m_Request, m_Callback);
#endif
}

UDynamoTransactWriteItems* UDynamoTransactWriteItems::TransactWriteItems(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FTransactWriteItemsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoTransactWriteItems>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoTransactWriteItems::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::TransactWriteItemsRequest m_Request;

	for (auto& m_Element : RequestData.TransactItems)
		m_Request.AddTransactItems(m_Element);

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));
	
	if (RequestData.ReturnItemCollectionMetrics != EReturnItemCollectionMetrics::NOT_SET)
		m_Request.SetReturnItemCollectionMetrics(static_cast<Aws::DynamoDB::Model::ReturnItemCollectionMetrics>(RequestData.ReturnItemCollectionMetrics));

	if (RequestData.ClientRequestToken.Len() > 0)
		m_Request.SetClientRequestToken(TCHAR_TO_UTF8(*RequestData.ClientRequestToken));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::TransactWriteItemsRequest&, Aws::DynamoDB::Model::TransactWriteItemsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->TransactWriteItemsAsync(m_Request, m_Callback);
#endif
}

UDynamoUntagResource* UDynamoUntagResource::UntagResource(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUntagResourceRequestDynamoDB& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUntagResource>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoUntagResource::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UntagResourceRequest m_Request;

	if (RequestData.ResourceArn.Len() > 0)
		m_Request.SetResourceArn(TCHAR_TO_UTF8(*RequestData.ResourceArn));

	for (auto& m_Element : RequestData.TagKeys)
		m_Request.AddTagKeys(TCHAR_TO_UTF8(*m_Element));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UntagResourceRequest&, Aws::DynamoDB::Model::UntagResourceOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UntagResourceAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateContinuousBackups* UDynamoUpdateContinuousBackups::UpdateContinuousBackups(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateContinuousBackupsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateContinuousBackups>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoUpdateContinuousBackups::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateContinuousBackupsRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	m_Request.SetPointInTimeRecoverySpecification(RequestData.PointInTimeRecoverySpecification);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateContinuousBackupsRequest&, Aws::DynamoDB::Model::UpdateContinuousBackupsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateContinuousBackupsAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateContributorInsights* UDynamoUpdateContributorInsights::UpdateContributorInsights(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateContributorInsightsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateContributorInsights>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoUpdateContributorInsights::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateContributorInsightsRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.IndexName.Len() > 0)
		m_Request.SetIndexName(TCHAR_TO_UTF8(*RequestData.IndexName));

	if (RequestData.ContributorInsightsAction != EContributorInsightsAction::NOT_SET)
		m_Request.SetContributorInsightsAction(static_cast<Aws::DynamoDB::Model::ContributorInsightsAction>(RequestData.ContributorInsightsAction));

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateContributorInsightsRequest&, Aws::DynamoDB::Model::UpdateContributorInsightsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateContributorInsightsAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateGlobalTable* UDynamoUpdateGlobalTable::UpdateGlobalTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateGlobalTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateGlobalTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoUpdateGlobalTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateGlobalTableRequest m_Request;

	if (RequestData.GlobalTableName.Len() > 0)
		m_Request.SetGlobalTableName(TCHAR_TO_UTF8(*RequestData.GlobalTableName));

	for (auto& m_Element : RequestData.ReplicaUpdates)
		m_Request.AddReplicaUpdates(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateGlobalTableRequest&, Aws::DynamoDB::Model::UpdateGlobalTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateGlobalTableAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateGlobalTableSettings* UDynamoUpdateGlobalTableSettings::UpdateGlobalTableSettings(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateGlobalTableSettingsRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateGlobalTableSettings>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoUpdateGlobalTableSettings::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateGlobalTableSettingsRequest m_Request;

	if (RequestData.GlobalTableName.Len() > 0)
		m_Request.SetGlobalTableName(TCHAR_TO_UTF8(*RequestData.GlobalTableName));

	if (RequestData.GlobalTableBillingMode != EBillingMode::NOT_SET)
		m_Request.SetGlobalTableBillingMode(static_cast<Aws::DynamoDB::Model::BillingMode>(RequestData.GlobalTableBillingMode));
	
	m_Request.SetGlobalTableProvisionedWriteCapacityUnits(FCString::Atod(*RequestData.GlobalTableProvisionedWriteCapacityUnits));
	m_Request.SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(RequestData.GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate);
		
	for (auto& m_Element : RequestData.GlobalTableGlobalSecondaryIndexSettingsUpdate)
		m_Request.AddGlobalTableGlobalSecondaryIndexSettingsUpdate(m_Element);

	for (auto& m_Element : RequestData.ReplicaSettingsUpdate)
		m_Request.AddReplicaSettingsUpdate(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateGlobalTableSettingsRequest&, Aws::DynamoDB::Model::UpdateGlobalTableSettingsOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateGlobalTableSettingsAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateItem* UDynamoUpdateItem::UpdateItem(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateItemRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateItem>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoUpdateItem::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateItemRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	for (auto& m_Element : RequestData.Key)
		m_Request.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	for (auto& m_Element : RequestData.AttributeUpdates)
		m_Request.AddAttributeUpdates(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	for (auto& m_Element : RequestData.Expected)
		m_Request.AddExpected(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	if (RequestData.ConditionalOperator != EConditionalOperator::NOT_SET)
		m_Request.SetConditionalOperator(static_cast<Aws::DynamoDB::Model::ConditionalOperator>(RequestData.ConditionalOperator));

	if (RequestData.ReturnValues != EReturnValue::NOT_SET)
		m_Request.SetReturnValues(static_cast<Aws::DynamoDB::Model::ReturnValue>(RequestData.ReturnValues));

	if (RequestData.ReturnConsumedCapacity != EReturnConsumedCapacity::NOT_SET)
		m_Request.SetReturnConsumedCapacity(static_cast<Aws::DynamoDB::Model::ReturnConsumedCapacity>(RequestData.ReturnConsumedCapacity));

	if (RequestData.ReturnItemCollectionMetrics != EReturnItemCollectionMetrics::NOT_SET)
		m_Request.SetReturnItemCollectionMetrics(static_cast<Aws::DynamoDB::Model::ReturnItemCollectionMetrics>(RequestData.ReturnItemCollectionMetrics));

	if (RequestData.UpdateExpression.Len() > 0)
		m_Request.SetUpdateExpression(TCHAR_TO_UTF8(*RequestData.UpdateExpression));

	if (RequestData.ConditionExpression.Len() > 0)
		m_Request.SetConditionExpression(TCHAR_TO_UTF8(*RequestData.ConditionExpression));

	for (auto& m_Element : RequestData.ExpressionAttributeNames)
		m_Request.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));

	for (auto& m_Element : RequestData.ExpressionAttributeValues)
		m_Request.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateItemRequest&, Aws::DynamoDB::Model::UpdateItemOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateItemAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateTable* UDynamoUpdateTable::UpdateTable(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateTableRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateTable>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;
}

void UDynamoUpdateTable::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateTableRequest m_Request;

	for (auto& m_Element : RequestData.AttributeDefinitions)
		m_Request.AddAttributeDefinitions(m_Element);

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	if (RequestData.BillingMode != EBillingMode::NOT_SET)
		m_Request.SetBillingMode(static_cast<Aws::DynamoDB::Model::BillingMode>(RequestData.BillingMode));

	m_Request.SetProvisionedThroughput(RequestData.ProvisionedThroughput);

	for (auto& m_Element : RequestData.GlobalSecondaryIndexUpdates)
		m_Request.AddGlobalSecondaryIndexUpdates(m_Element);

	m_Request.SetStreamSpecification(RequestData.StreamSpecification);
	m_Request.SetSSESpecification(RequestData.SSESpecification);

	for (auto& m_Element : RequestData.ReplicaUpdates)
		m_Request.AddReplicaUpdates(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateTableRequest&, Aws::DynamoDB::Model::UpdateTableOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateTableAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateTableReplicaAutoScaling* UDynamoUpdateTableReplicaAutoScaling::UpdateTableReplicaAutoScaling(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateTableReplicaAutoScalingRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateTableReplicaAutoScaling>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoUpdateTableReplicaAutoScaling::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateTableReplicaAutoScalingRequest m_Request;

	for (auto& m_Element : RequestData.GlobalSecondaryIndexUpdates)
		m_Request.AddGlobalSecondaryIndexUpdates(m_Element);

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	m_Request.SetProvisionedWriteCapacityAutoScalingUpdate(RequestData.ProvisionedWriteCapacityAutoScalingUpdate);

	for (auto& m_Element : RequestData.ReplicaUpdates)
		m_Request.AddReplicaUpdates(m_Element);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateTableReplicaAutoScalingRequest&, Aws::DynamoDB::Model::UpdateTableReplicaAutoScalingOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateTableReplicaAutoScalingAsync(m_Request, m_Callback);
#endif
}

UDynamoUpdateTimeToLive* UDynamoUpdateTimeToLive::UpdateTimeToLive(UObject* worldContextObject, UDynamoDBClientObject* dynamoDBObject, const FUpdateTimeToLiveRequest& request)
{
	LogVerbose("");

	auto Platform = NewObject<UDynamoUpdateTimeToLive>();
	Platform->AddToRoot();
	Platform->DynamoDBObject = dynamoDBObject;
	Platform->RequestData = request;

	return Platform;

}

void UDynamoUpdateTimeToLive::Activate()
{
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::Model::UpdateTimeToLiveRequest m_Request;

	if (RequestData.TableName.Len() > 0)
		m_Request.SetTableName(TCHAR_TO_UTF8(*RequestData.TableName));

	m_Request.SetTimeToLiveSpecification(RequestData.TimeToLiveSpecification);

	auto m_Callback = [this](const Aws::DynamoDB::DynamoDBClient*, const Aws::DynamoDB::Model::UpdateTimeToLiveRequest&, Aws::DynamoDB::Model::UpdateTimeToLiveOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
	{
		LogVerbose("");

		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			Callback.Broadcast(outcome.IsSuccess(), outcome.GetResult(), static_cast<EDynamoDBErrors>(outcome.GetError().GetErrorType()), UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	};

	DynamoDBObject->GetDynamoDBClient()->UpdateTimeToLiveAsync(m_Request, m_Callback);
#endif
}
