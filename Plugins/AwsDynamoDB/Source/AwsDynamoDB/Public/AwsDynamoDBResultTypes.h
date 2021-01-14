/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "AwsDynamoDBTypes.h"
#include "AwsDynamoDBResultTypes.generated.h"

UENUM(BlueprintType)
enum class EContributorInsightsStatus : uint8
{
	NOT_SET,
	ENABLING,
	ENABLED,
	DISABLING,
	DISABLED,
	FAILED
};

UENUM(BlueprintType)
enum class EPointInTimeRecoveryStatus : uint8
{
	NOT_SET,
	ENABLED,
	DISABLED
};

UENUM(BlueprintType)
enum class EContinuousBackupsStatus : uint8
{
	NOT_SET,
	ENABLED,
	DISABLED
};

UENUM(BlueprintType)
enum class ETimeToLiveStatus : uint8
{
	NOT_SET,
	ENABLING,
	DISABLING,
	ENABLED,
	DISABLED
};

UENUM(BlueprintType)
enum class ESSEStatus : uint8
{
	NOT_SET,
	ENABLING,
	ENABLED,
	DISABLING,
	DISABLED,
	UPDATING
};

UENUM(BlueprintType)
enum class EIndexStatus : uint8
{
	NOT_SET,
	CREATING,
	UPDATING,
	DELETING,
	ACTIVE
};

UENUM(BlueprintType)
enum class EBackupStatus : uint8
{
	NOT_SET,
	CREATING,
	DELETED,
	AVAILABLE
};

UENUM(BlueprintType)
enum class EBackupType : uint8
{
	NOT_SET,
	USER,
	SYSTEM,
	AWS_BACKUP
};

UENUM(BlueprintType)
enum class EGlobalTableStatus : uint8
{
	NOT_SET,
	CREATING,
	ACTIVE,
	DELETING,
	UPDATING
};

UENUM(BlueprintType)
enum class EReplicaStatus : uint8
{
	NOT_SET,
	CREATING,
	CREATION_FAILED,
	UPDATING,
	DELETING,
	ACTIVE
};

UENUM(BlueprintType)
enum class ETableStatus : uint8
{
	NOT_SET,
	CREATING,
	UPDATING,
	DELETING,
	ACTIVE,
	INACCESSIBLE_ENCRYPTION_CREDENTIALS,
	ARCHIVING,
	ARCHIVED
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		STRUCTS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FCapacity
{
	GENERATED_BODY()
public:
	FCapacity() = default;
#if !DISABLE_DYNAMODB
	FCapacity(const Aws::DynamoDB::Model::Capacity& data) 
		: ReadCapacityUnits(LexToString(data.GetReadCapacityUnits()))
		, WriteCapacityUnits(LexToString(data.GetWriteCapacityUnits()))
		, CapacityUnits(LexToString(data.GetCapacityUnits()))
		{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString WriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString CapacityUnits;
};

USTRUCT(BlueprintType)
struct FConsumedCapacity
{
	GENERATED_BODY()
public:
	FConsumedCapacity() = default;
#if !DISABLE_DYNAMODB
	FConsumedCapacity(const Aws::DynamoDB::Model::ConsumedCapacity& data) 
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, CapacityUnits(LexToString(data.GetCapacityUnits()))
		, ReadCapacityUnits(LexToString(data.GetReadCapacityUnits()))
		, WriteCapacityUnits(LexToString(data.GetWriteCapacityUnits()))
		, Table(data.GetTable())
	{
		for (auto& m_Element : data.GetLocalSecondaryIndexes())
			LocalSecondaryIndexes.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);

		for (auto& m_Element : data.GetGlobalSecondaryIndexes())
			GlobalSecondaryIndexes.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString CapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString WriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FCapacity Table;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FCapacity> LocalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FCapacity> GlobalSecondaryIndexes;
};

USTRUCT(BlueprintType)
struct FItemCollectionMetrics
{
	GENERATED_BODY()
public:
	FItemCollectionMetrics() = default;
#if !DISABLE_DYNAMODB
	FItemCollectionMetrics(const Aws::DynamoDB::Model::ItemCollectionMetrics& data)
	{
		for (auto& m_Element : data.GetItemCollectionKey())
			ItemCollectionKey.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);

		for (auto& m_Element : data.GetSizeEstimateRangeGB())
			SizeEstimateRangeGB.Add(LexToString(m_Element));
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ItemCollectionKey;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> SizeEstimateRangeGB;
};

USTRUCT(BlueprintType)
struct FResponseTest
{
	GENERATED_BODY()
public:
	FResponseTest() = default;
	FResponseTest(const FString& key, TArray<FAttributeValue> values)
		: Key(key)
		, Metrics(values) {}
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeValue> Metrics;
};

USTRUCT(BlueprintType)
struct FKeysMapResult
{
	GENERATED_BODY()
public:
	FKeysMapResult() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Map;
};

USTRUCT(BlueprintType)
struct FKeysArrayResult
{
	GENERATED_BODY()
public:
	FKeysArrayResult() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeysMapResult> Array;
};

USTRUCT(BlueprintType)
struct FBatchGetItemResult
{
	GENERATED_BODY()
public:
	FBatchGetItemResult() = default;
#if !DISABLE_DYNAMODB
	FBatchGetItemResult(const Aws::DynamoDB::Model::BatchGetItemResult& data) 
	{
		for (auto& m_Element : data.GetUnprocessedKeys())
			UnprocessedKeys.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);

		for (auto& m_Element : data.GetConsumedCapacity())
			ConsumedCapacity.Add(m_Element);

		for (auto& m_Map : data.GetResponses())
		{
			FKeysArrayResult Array;

			for (auto m_Array : m_Map.second)
			{
				FKeysMapResult MapResult;

				for (auto m_MapResult : m_Array)
				{
					MapResult.Map.Add(UTF8_TO_TCHAR(m_MapResult.first.c_str()), m_MapResult.second);
				}

				Array.Array.Add(MapResult);
			}

			Responses.Add(UTF8_TO_TCHAR(m_Map.first.c_str()), Array);
		}
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FKeysArrayResult> Responses;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FKeysAndAttributes> UnprocessedKeys;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FConsumedCapacity> ConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FItemCollectionMetricsTest
{
	GENERATED_BODY()
public:
	FItemCollectionMetricsTest() = default;
	FItemCollectionMetricsTest(const FString& key, TArray<FItemCollectionMetrics> values)
		: Key(key)
		, Metrics(values) {}
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FItemCollectionMetrics> Metrics;
};

USTRUCT(BlueprintType)
struct FWriteRequestsTest
{
	GENERATED_BODY()
public:
	FWriteRequestsTest() = default;
	FWriteRequestsTest(const FString& key, TArray<FWriteRequest> values)
		: Key(key)
		, WriteRequests(values) {}
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FWriteRequest> WriteRequests;
};

USTRUCT(BlueprintType)
struct FBatchWriteItemResult
{
	GENERATED_BODY()
public:
	FBatchWriteItemResult() = default;
#if !DISABLE_DYNAMODB
	FBatchWriteItemResult(const Aws::DynamoDB::Model::BatchWriteItemResult& data)
	{
		for (auto& m_Element : data.GetUnprocessedItems())
		{
			TArray<FWriteRequest> m_WriteRequests;

			for (auto& m_WriteRequest : m_Element.second)
				m_WriteRequests.Add(m_WriteRequest);

			UnprocessedItems.Add(FWriteRequestsTest(UTF8_TO_TCHAR(m_Element.first.c_str()), m_WriteRequests));
		}

		for (auto& m_Element : data.GetItemCollectionMetrics())
		{
			TArray<FItemCollectionMetrics> m_Metrics;

			for (auto& m_Metric : m_Element.second)
				m_Metrics.Add(m_Metric);

			ItemCollectionMetrics.Add(FItemCollectionMetricsTest(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Metrics));
		}

		for (auto& m_Element : data.GetConsumedCapacity())
			ConsumedCapacity.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FWriteRequestsTest> UnprocessedItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FItemCollectionMetricsTest> ItemCollectionMetrics;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FConsumedCapacity> ConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FBackupDetails
{
	GENERATED_BODY()
public:
	FBackupDetails() = default;
#if !DISABLE_DYNAMODB
	FBackupDetails(const Aws::DynamoDB::Model::BackupDetails& data)
		: BackupArn(UTF8_TO_TCHAR(data.GetBackupArn().c_str()))
		, BackupName(UTF8_TO_TCHAR(data.GetBackupName().c_str()))
		, BackupSizeBytes(LexToString(data.GetBackupSizeBytes()))
		, BackupStatus(static_cast<EBackupStatus>(data.GetBackupStatus()))
		, BackupType(static_cast<EBackupType>(data.GetBackupType()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetBackupCreationDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), BackupCreationDateTime);
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetBackupExpiryDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), BackupExpiryDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupSizeBytes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBackupStatus BackupStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBackupType BackupType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime BackupCreationDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime BackupExpiryDateTime;
};

USTRUCT(BlueprintType)
struct FCreateBackupResult
{
	GENERATED_BODY()
public:
	FCreateBackupResult() = default;
#if !DISABLE_DYNAMODB
	FCreateBackupResult(const Aws::DynamoDB::Model::CreateBackupResult& data)
		: BackupDetails(data.GetBackupDetails())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FBackupDetails BackupDetails;
};

USTRUCT(BlueprintType)
struct FReplicaGlobalSecondaryIndexDescription
{
	GENERATED_BODY()
public:
	FReplicaGlobalSecondaryIndexDescription() = default;
#if !DISABLE_DYNAMODB
	FReplicaGlobalSecondaryIndexDescription(const Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexDescription& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, ProvisionedThroughputOverride(data.GetProvisionedThroughputOverride())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputOverride ProvisionedThroughputOverride;
};

USTRUCT(BlueprintType)
struct FReplicaDescription
{
	GENERATED_BODY()
public:
	FReplicaDescription() = default;
#if !DISABLE_DYNAMODB
	FReplicaDescription(const Aws::DynamoDB::Model::ReplicaDescription& data)
		: RegionName(UTF8_TO_TCHAR(data.GetRegionName().c_str()))
		, ReplicaStatus(static_cast<EReplicaStatus>(data.GetReplicaStatus()))
		, ReplicaStatusDescription(UTF8_TO_TCHAR(data.GetReplicaStatusDescription().c_str()))
		, ReplicaStatusPercentProgress(UTF8_TO_TCHAR(data.GetReplicaStatusPercentProgress().c_str()))
		, KMSMasterKeyId(UTF8_TO_TCHAR(data.GetKMSMasterKeyId().c_str()))
		, ProvisionedThroughputOverride(data.GetProvisionedThroughputOverride())
	{
		for (auto& m_Element : data.GetGlobalSecondaryIndexes())
			GlobalSecondaryIndexes.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReplicaStatus ReplicaStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReplicaStatusDescription;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReplicaStatusPercentProgress;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString KMSMasterKeyId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputOverride ProvisionedThroughputOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndexDescription> GlobalSecondaryIndexes;
};

USTRUCT(BlueprintType)
struct FGlobalTableDescription
{
	GENERATED_BODY()
public:
	FGlobalTableDescription() = default;
#if !DISABLE_DYNAMODB
	FGlobalTableDescription(const Aws::DynamoDB::Model::GlobalTableDescription& data)
		: GlobalTableArn(UTF8_TO_TCHAR(data.GetGlobalTableArn().c_str()))
		, GlobalTableStatus(static_cast<EGlobalTableStatus>(data.GetGlobalTableStatus()))
		, GlobalTableName(UTF8_TO_TCHAR(data.GetGlobalTableName().c_str()))
	{
		for (auto& m_Element : data.GetReplicationGroup())
			ReplicationGroup.Add(m_Element);

		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetCreationDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), CreationDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaDescription> ReplicationGroup;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime CreationDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EGlobalTableStatus GlobalTableStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
};

USTRUCT(BlueprintType)
struct FCreateGlobalTableResult
{
	GENERATED_BODY()
public:
	FCreateGlobalTableResult() = default;
#if !DISABLE_DYNAMODB
	FCreateGlobalTableResult(const Aws::DynamoDB::Model::CreateGlobalTableResult& data)
		: GlobalTableDescription(data.GetGlobalTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FGlobalTableDescription GlobalTableDescription;
};

USTRUCT(BlueprintType)
struct FProvisionedThroughputDescription
{
	GENERATED_BODY()
public:
	FProvisionedThroughputDescription() = default;
#if !DISABLE_DYNAMODB
	FProvisionedThroughputDescription(const Aws::DynamoDB::Model::ProvisionedThroughputDescription& data)
		: NumberOfDecreasesToday(LexToString(data.GetNumberOfDecreasesToday()))
		, ReadCapacityUnits(LexToString(data.GetReadCapacityUnits()))
		, WriteCapacityUnits(LexToString(data.GetWriteCapacityUnits()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetLastIncreaseDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), LastIncreaseDateTime);
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetLastDecreaseDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), LastDecreaseDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime LastIncreaseDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime LastDecreaseDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString NumberOfDecreasesToday;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString WriteCapacityUnits;
};

USTRUCT(BlueprintType)
struct FBillingModeSummary
{
	GENERATED_BODY()
public:
	FBillingModeSummary() = default;
#if !DISABLE_DYNAMODB
	FBillingModeSummary(const Aws::DynamoDB::Model::BillingModeSummary& data)
		: BillingMode(static_cast<EBillingMode>(data.GetBillingMode()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetLastUpdateToPayPerRequestDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), LastUpdateToPayPerRequestDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode BillingMode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime LastUpdateToPayPerRequestDateTime;
};

USTRUCT(BlueprintType)
struct FSSEDescription
{
	GENERATED_BODY()
public:
	FSSEDescription() = default;
#if !DISABLE_DYNAMODB
	FSSEDescription(const Aws::DynamoDB::Model::SSEDescription& data)
		: Status(static_cast<ESSEStatus>(data.GetStatus()))
		, SSEType(static_cast<ESSEType>(data.GetSSEType()))
		, KMSMasterKeyArn(UTF8_TO_TCHAR(data.GetKMSMasterKeyArn().c_str()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetInaccessibleEncryptionDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), InaccessibleEncryptionDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ESSEStatus Status;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ESSEType SSEType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString KMSMasterKeyArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime InaccessibleEncryptionDateTime;
};

USTRUCT(BlueprintType)
struct FArchivalSummary
{
	GENERATED_BODY()
public:
	FArchivalSummary() = default;
#if !DISABLE_DYNAMODB
	FArchivalSummary(const Aws::DynamoDB::Model::ArchivalSummary& data)
		: ArchivalReason(UTF8_TO_TCHAR(data.GetArchivalReason().c_str()))
		, ArchivalBackupArn(UTF8_TO_TCHAR(data.GetArchivalBackupArn().c_str()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetArchivalDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), ArchivalDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime ArchivalDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ArchivalReason;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ArchivalBackupArn;
};

USTRUCT(BlueprintType)
struct FRestoreSummary
{
	GENERATED_BODY()
public:
	FRestoreSummary() = default;
#if !DISABLE_DYNAMODB
	FRestoreSummary(const Aws::DynamoDB::Model::RestoreSummary& data)
		: SourceBackupArn(UTF8_TO_TCHAR(data.GetSourceBackupArn().c_str()))
		, SourceTableArn(UTF8_TO_TCHAR(data.GetSourceTableArn().c_str()))
		, bRestoreInProgress(data.GetRestoreInProgress())
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetRestoreDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), RestoreDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString SourceBackupArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString SourceTableArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime RestoreDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bRestoreInProgress;
};

USTRUCT(BlueprintType)
struct FLocalSecondaryIndexDescription
{
	GENERATED_BODY()
public:
	FLocalSecondaryIndexDescription() = default;
#if !DISABLE_DYNAMODB
	FLocalSecondaryIndexDescription(const Aws::DynamoDB::Model::LocalSecondaryIndexDescription& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, Projection(data.GetProjection())
		, IndexSizeBytes(LexToString(data.GetIndexSizeBytes()))
		, ItemCount(LexToString(data.GetItemCount()))
		, IndexArn(UTF8_TO_TCHAR(data.GetIndexArn().c_str()))
	{
		for (auto& m_Element : data.GetKeySchema())
			KeySchema.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProjection Projection;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexSizeBytes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ItemCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexArn;
};

USTRUCT(BlueprintType)
struct FGlobalSecondaryIndexDescription
{
	GENERATED_BODY()
public:
	FGlobalSecondaryIndexDescription() = default;
#if !DISABLE_DYNAMODB
	FGlobalSecondaryIndexDescription(const Aws::DynamoDB::Model::GlobalSecondaryIndexDescription& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, Projection(data.GetProjection())
		, IndexStatus(static_cast<EIndexStatus>(data.GetIndexStatus()))
		, bBackfilling(data.GetBackfilling())
		, ProvisionedThroughput(data.GetProvisionedThroughput())
		, IndexSizeBytes(LexToString(data.GetIndexSizeBytes()))
		, ItemCount(LexToString(data.GetItemCount()))
		, IndexArn(UTF8_TO_TCHAR(data.GetIndexArn().c_str()))
	{
		for (auto& m_Element : data.GetKeySchema())
			KeySchema.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProjection Projection;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EIndexStatus IndexStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bBackfilling;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputDescription ProvisionedThroughput;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexSizeBytes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ItemCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexArn;
};

USTRUCT(BlueprintType)
struct FTableDescription
{
	GENERATED_BODY()
public:
	FTableDescription() = default;
#if !DISABLE_DYNAMODB
	FTableDescription(const Aws::DynamoDB::Model::TableDescription& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, TableStatus(static_cast<ETableStatus>(data.GetTableStatus()))
		, ProvisionedThroughput(data.GetProvisionedThroughput())
		, TableSizeBytes(LexToString(data.GetTableSizeBytes()))
		, ItemCount(LexToString(data.GetItemCount()))
		, TableArn(UTF8_TO_TCHAR(data.GetTableArn().c_str()))
		, TableId(UTF8_TO_TCHAR(data.GetTableId().c_str()))
		, BillingModeSummary(data.GetBillingModeSummary())
		, StreamSpecification(data.GetStreamSpecification())
		, LatestStreamLabel(UTF8_TO_TCHAR(data.GetLatestStreamLabel().c_str()))
		, LatestStreamArn(UTF8_TO_TCHAR(data.GetLatestStreamArn().c_str()))
		, GlobalTableVersion(UTF8_TO_TCHAR(data.GetGlobalTableVersion().c_str()))
		, RestoreSummary(data.GetRestoreSummary())
		, SSEDescription(data.GetSSEDescription())
		, ArchivalSummary(data.GetArchivalSummary())
	{
		for (auto& m_Element : data.GetAttributeDefinitions())
			AttributeDefinitions.Add(m_Element);

		for (auto& m_Element : data.GetKeySchema())
			KeySchema.Add(m_Element);

		for (auto& m_Element : data.GetLocalSecondaryIndexes())
			LocalSecondaryIndexes.Add(m_Element);

		for (auto& m_Element : data.GetGlobalSecondaryIndexes())
			GlobalSecondaryIndexes.Add(m_Element);

		for (auto& m_Element : data.GetReplicas())
			Replicas.Add(m_Element);

		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetCreationDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), CreationDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeDefinition> AttributeDefinitions;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ETableStatus TableStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime CreationDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputDescription ProvisionedThroughput;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableSizeBytes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ItemCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FBillingModeSummary BillingModeSummary;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FLocalSecondaryIndexDescription> LocalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndexDescription> GlobalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FStreamSpecification StreamSpecification;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString LatestStreamLabel;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString LatestStreamArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableVersion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaDescription> Replicas;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FRestoreSummary RestoreSummary;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSSEDescription SSEDescription;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FArchivalSummary ArchivalSummary;
};

USTRUCT(BlueprintType)
struct FLocalSecondaryIndexInfo
{
	GENERATED_BODY()
public:
	FLocalSecondaryIndexInfo() = default;
#if !DISABLE_DYNAMODB
	FLocalSecondaryIndexInfo(const Aws::DynamoDB::Model::LocalSecondaryIndexInfo& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, Projection(data.GetProjection())
	{
		for (auto& m_Element : data.GetKeySchema())
			KeySchema.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProjection Projection;
};

USTRUCT(BlueprintType)
struct FTimeToLiveDescription
{
	GENERATED_BODY()
public:
	FTimeToLiveDescription() = default;
#if !DISABLE_DYNAMODB
	FTimeToLiveDescription(const Aws::DynamoDB::Model::TimeToLiveDescription& data)
		: TimeToLiveStatus(static_cast<ETimeToLiveStatus>(data.GetTimeToLiveStatus()))
		, AttributeName(UTF8_TO_TCHAR(data.GetAttributeName().c_str()))
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ETimeToLiveStatus TimeToLiveStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AttributeName;
};

USTRUCT(BlueprintType)
struct FGlobalSecondaryIndexInfo
{
	GENERATED_BODY()
public:
	FGlobalSecondaryIndexInfo() = default;
#if !DISABLE_DYNAMODB
	FGlobalSecondaryIndexInfo(const Aws::DynamoDB::Model::GlobalSecondaryIndexInfo& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, Projection(data.GetProjection())
		, ProvisionedThroughput(data.GetProvisionedThroughput())
	{
		for (auto& m_Element : data.GetKeySchema())
			KeySchema.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProjection Projection;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughput;
};

USTRUCT(BlueprintType)
struct FSourceTableFeatureDetails
{
	GENERATED_BODY()
public:
	FSourceTableFeatureDetails() = default;
#if !DISABLE_DYNAMODB
	FSourceTableFeatureDetails(const Aws::DynamoDB::Model::SourceTableFeatureDetails& data)
		: StreamDescription(data.GetStreamDescription())
		, TimeToLiveDescription(data.GetTimeToLiveDescription())
		, SSEDescription(data.GetSSEDescription())
	{
		for (auto& m_Element : data.GetLocalSecondaryIndexes())
			LocalSecondaryIndexes.Add(m_Element);

		for (auto& m_Element : data.GetGlobalSecondaryIndexes())
			GlobalSecondaryIndexes.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FLocalSecondaryIndexInfo> LocalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndexInfo> GlobalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FStreamSpecification StreamDescription;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTimeToLiveDescription TimeToLiveDescription;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSSEDescription SSEDescription;
};

USTRUCT(BlueprintType)
struct FSourceTableDetails
{
	GENERATED_BODY()
public:
	FSourceTableDetails() = default;
#if !DISABLE_DYNAMODB
	FSourceTableDetails(const Aws::DynamoDB::Model::SourceTableDetails& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, TableId(UTF8_TO_TCHAR(data.GetTableId().c_str()))
		, TableArn(UTF8_TO_TCHAR(data.GetTableArn().c_str()))
		, TableSizeBytes(LexToString(data.GetTableSizeBytes()))
		, ProvisionedThroughput(data.GetProvisionedThroughput())
		, ItemCount(LexToString(data.GetItemCount()))
		, BillingMode(static_cast<EBillingMode>(data.GetBillingMode()))
	{
		for (auto& m_Element : data.GetKeySchema())
			KeySchema.Add(m_Element);

		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetTableCreationDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), TableCreationDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableSizeBytes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime TableCreationDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughput;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ItemCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode BillingMode;
};

USTRUCT(BlueprintType)
struct FBackupDescription
{
	GENERATED_BODY()
public:
	FBackupDescription() = default;
#if !DISABLE_DYNAMODB
	FBackupDescription(const Aws::DynamoDB::Model::BackupDescription& data)
		: BackupDetails(data.GetBackupDetails())
		, SourceTableDetails(data.GetSourceTableDetails())
		, SourceTableFeatureDetails(data.GetSourceTableFeatureDetails())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FBackupDetails BackupDetails;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSourceTableDetails SourceTableDetails;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSourceTableFeatureDetails SourceTableFeatureDetails;
};

USTRUCT(BlueprintType)
struct FCreateTableResult
{
	GENERATED_BODY()
public:
	FCreateTableResult() = default;
#if !DISABLE_DYNAMODB
	FCreateTableResult(const Aws::DynamoDB::Model::CreateTableResult& data)
		: TableDescription(data.GetTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableDescription TableDescription;
};

USTRUCT(BlueprintType)
struct FDeleteBackupResult
{
	GENERATED_BODY()
public:
	FDeleteBackupResult() = default;
#if !DISABLE_DYNAMODB
	FDeleteBackupResult(const Aws::DynamoDB::Model::DeleteBackupResult& data)
		: BackupDescription(data.GetBackupDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FBackupDescription BackupDescription;
};

USTRUCT(BlueprintType)
struct FDeleteItemResult
{
	GENERATED_BODY()
public:
	FDeleteItemResult() = default;
#if !DISABLE_DYNAMODB
	FDeleteItemResult(const Aws::DynamoDB::Model::DeleteItemResult& data)
		: ConsumedCapacity(data.GetConsumedCapacity())
		, ItemCollectionMetrics(data.GetItemCollectionMetrics())
	{
		for (auto& m_Element : data.GetAttributes())
			Attributes.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Attributes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConsumedCapacity ConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FItemCollectionMetrics ItemCollectionMetrics;
};

USTRUCT(BlueprintType)
struct FDeleteTableResult
{
	GENERATED_BODY()
public:
	FDeleteTableResult() = default;
#if !DISABLE_DYNAMODB
	FDeleteTableResult(const Aws::DynamoDB::Model::DeleteTableResult& data)
		: TableDescription(data.GetTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableDescription TableDescription;
};

USTRUCT(BlueprintType)
struct FDescribeBackupResult
{
	GENERATED_BODY()
public:
	FDescribeBackupResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeBackupResult(const Aws::DynamoDB::Model::DescribeBackupResult& data)
		: BackupDescription(data.GetBackupDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FBackupDescription BackupDescription;
};

USTRUCT(BlueprintType)
struct FPointInTimeRecoveryDescription
{
	GENERATED_BODY()
public:
	FPointInTimeRecoveryDescription() = default;
#if !DISABLE_DYNAMODB
	FPointInTimeRecoveryDescription(const Aws::DynamoDB::Model::PointInTimeRecoveryDescription& data)
		: PointInTimeRecoveryStatus(static_cast<EPointInTimeRecoveryStatus>(data.GetPointInTimeRecoveryStatus()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetEarliestRestorableDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), EarliestRestorableDateTime);
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetLatestRestorableDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), LatestRestorableDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EPointInTimeRecoveryStatus PointInTimeRecoveryStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime EarliestRestorableDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime LatestRestorableDateTime;
};

USTRUCT(BlueprintType)
struct FContinuousBackupsDescription
{
	GENERATED_BODY()
public:
	FContinuousBackupsDescription() = default;
#if !DISABLE_DYNAMODB
	FContinuousBackupsDescription(const Aws::DynamoDB::Model::ContinuousBackupsDescription& data)
		: ContinuousBackupsStatus(static_cast<EContinuousBackupsStatus>(data.GetContinuousBackupsStatus()))
		, PointInTimeRecoveryDescription(data.GetPointInTimeRecoveryDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EContinuousBackupsStatus ContinuousBackupsStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FPointInTimeRecoveryDescription PointInTimeRecoveryDescription;
};

USTRUCT(BlueprintType)
struct FDescribeContinuousBackupsResult
{
	GENERATED_BODY()
public:
	FDescribeContinuousBackupsResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeContinuousBackupsResult(const Aws::DynamoDB::Model::DescribeContinuousBackupsResult& data)
		: ContinuousBackupsDescription(data.GetContinuousBackupsDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FContinuousBackupsDescription ContinuousBackupsDescription;
};

USTRUCT(BlueprintType)
struct FFailureException
{
	GENERATED_BODY()
public:
	FFailureException() = default;
#if !DISABLE_DYNAMODB
	FFailureException(const Aws::DynamoDB::Model::FailureException& data)
		: ExceptionName(UTF8_TO_TCHAR(data.GetExceptionName().c_str()))
		, ExceptionDescription(UTF8_TO_TCHAR(data.GetExceptionDescription().c_str()))
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ExceptionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ExceptionDescription;
};

USTRUCT(BlueprintType)
struct FDescribeContributorInsightsResult
{
	GENERATED_BODY()
public:
	FDescribeContributorInsightsResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeContributorInsightsResult(const Aws::DynamoDB::Model::DescribeContributorInsightsResult& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, ContributorInsightsStatus(static_cast<EContributorInsightsStatus>(data.GetContributorInsightsStatus()))
		, FailureException(data.GetFailureException())
	{
		for (auto& m_Element : data.GetContributorInsightsRuleList())
			ContributorInsightsRuleList.Add(UTF8_TO_TCHAR(m_Element.c_str()));

		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetLastUpdateDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), LastUpdateDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> ContributorInsightsRuleList;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EContributorInsightsStatus ContributorInsightsStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime LastUpdateDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FFailureException FailureException;
};

USTRUCT(BlueprintType)
struct FEndpoint
{
	GENERATED_BODY()
public:
	FEndpoint() = default;
#if !DISABLE_DYNAMODB
	FEndpoint(const Aws::DynamoDB::Model::Endpoint& data)
		: Address(UTF8_TO_TCHAR(data.GetAddress().c_str()))
		, CachePeriodInMinutes(LexToString(data.GetCachePeriodInMinutes()))
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Address;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString CachePeriodInMinutes;
};

USTRUCT(BlueprintType)
struct FDescribeEndpointsResult
{
	GENERATED_BODY()
public:
	FDescribeEndpointsResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeEndpointsResult(const Aws::DynamoDB::Model::DescribeEndpointsResult& data)
	{
		for (auto& m_Element : data.GetEndpoints())
			Endpoints.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FEndpoint> Endpoints;
};

USTRUCT(BlueprintType)
struct FDescribeGlobalTableResult
{
	GENERATED_BODY()
public:
	FDescribeGlobalTableResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeGlobalTableResult(const Aws::DynamoDB::Model::DescribeGlobalTableResult& data)
		: GlobalTableDescription(data.GetGlobalTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FGlobalTableDescription GlobalTableDescription;
};

USTRUCT(BlueprintType)
struct FAutoScalingTargetTrackingScalingPolicyConfigurationDescription
{
	GENERATED_BODY()
public:
	FAutoScalingTargetTrackingScalingPolicyConfigurationDescription() = default;
#if !DISABLE_DYNAMODB
	FAutoScalingTargetTrackingScalingPolicyConfigurationDescription(const Aws::DynamoDB::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription& data)
		: bDisableScaleIn(data.GetDisableScaleIn())
		, ScaleInCooldown(data.GetScaleInCooldown())
		, ScaleOutCooldown(data.GetScaleOutCooldown())
		, TargetValue(LexToString(data.GetTargetValue()))
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bDisableScaleIn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 ScaleInCooldown;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 ScaleOutCooldown;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TargetValue;
};

USTRUCT(BlueprintType)
struct FAutoScalingPolicyDescription
{
	GENERATED_BODY()
public:
	FAutoScalingPolicyDescription() = default;
#if !DISABLE_DYNAMODB
	FAutoScalingPolicyDescription(const Aws::DynamoDB::Model::AutoScalingPolicyDescription& data)
		: PolicyName(UTF8_TO_TCHAR(data.GetPolicyName().c_str()))
		, TargetTrackingScalingPolicyConfiguration(data.GetTargetTrackingScalingPolicyConfiguration())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString PolicyName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingTargetTrackingScalingPolicyConfigurationDescription TargetTrackingScalingPolicyConfiguration;
};

USTRUCT(BlueprintType)
struct FAutoScalingSettingsDescription
{
	GENERATED_BODY()
public:
	FAutoScalingSettingsDescription() = default;
#if !DISABLE_DYNAMODB
	FAutoScalingSettingsDescription(const Aws::DynamoDB::Model::AutoScalingSettingsDescription& data)
		: MinimumUnits(LexToString(data.GetMinimumUnits()))
		, MaximumUnits(LexToString(data.GetMaximumUnits()))
		, bAutoScalingDisabled(data.GetAutoScalingDisabled())
		, AutoScalingRoleArn(UTF8_TO_TCHAR(data.GetAutoScalingRoleArn().c_str()))
	{
		for (auto& m_Element : data.GetScalingPolicies())
			ScalingPolicies.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString MinimumUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString MaximumUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bAutoScalingDisabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAutoScalingPolicyDescription> ScalingPolicies;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AutoScalingRoleArn;
};

USTRUCT(BlueprintType)
struct FReplicaGlobalSecondaryIndexSettingsDescription
{
	GENERATED_BODY()
public:
	FReplicaGlobalSecondaryIndexSettingsDescription() = default;
#if !DISABLE_DYNAMODB
	FReplicaGlobalSecondaryIndexSettingsDescription(const Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexSettingsDescription& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, IndexStatus(static_cast<EIndexStatus>(data.GetIndexStatus()))
		, ProvisionedReadCapacityUnits(LexToString(data.GetProvisionedReadCapacityUnits()))
		, ProvisionedReadCapacityAutoScalingSettings(data.GetProvisionedReadCapacityAutoScalingSettings())
		, ProvisionedWriteCapacityUnits(LexToString(data.GetProvisionedWriteCapacityUnits()))
		, ProvisionedWriteCapacityAutoScalingSettings(data.GetProvisionedWriteCapacityAutoScalingSettings())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EIndexStatus IndexStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProvisionedReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ProvisionedReadCapacityAutoScalingSettings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProvisionedWriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ProvisionedWriteCapacityAutoScalingSettings;
};

USTRUCT(BlueprintType)
struct FReplicaSettingsDescription
{
	GENERATED_BODY()
public:
	FReplicaSettingsDescription() = default;
#if !DISABLE_DYNAMODB
	FReplicaSettingsDescription(const Aws::DynamoDB::Model::ReplicaSettingsDescription& data)
		: RegionName(UTF8_TO_TCHAR(data.GetRegionName().c_str()))
		, ReplicaStatus(static_cast<EReplicaStatus>(data.GetReplicaStatus()))
		, ReplicaBillingModeSummary(data.GetReplicaBillingModeSummary())
		, ReplicaProvisionedReadCapacityUnits(LexToString(data.GetReplicaProvisionedReadCapacityUnits()))
		, ReplicaProvisionedReadCapacityAutoScalingSettings(data.GetReplicaProvisionedReadCapacityAutoScalingSettings())
		, ReplicaProvisionedWriteCapacityUnits(LexToString(data.GetReplicaProvisionedWriteCapacityUnits()))
		, ReplicaProvisionedWriteCapacityAutoScalingSettings(data.GetReplicaProvisionedWriteCapacityAutoScalingSettings())
	{
		for (auto& m_Element : data.GetReplicaGlobalSecondaryIndexSettings())
			ReplicaGlobalSecondaryIndexSettings.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReplicaStatus ReplicaStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FBillingModeSummary ReplicaBillingModeSummary;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReplicaProvisionedReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ReplicaProvisionedReadCapacityAutoScalingSettings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReplicaProvisionedWriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ReplicaProvisionedWriteCapacityAutoScalingSettings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndexSettingsDescription> ReplicaGlobalSecondaryIndexSettings;
};

USTRUCT(BlueprintType)
struct FDescribeGlobalTableSettingsResult
{
	GENERATED_BODY()
public:
	FDescribeGlobalTableSettingsResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeGlobalTableSettingsResult(const Aws::DynamoDB::Model::DescribeGlobalTableSettingsResult& data)
		: GlobalTableName(UTF8_TO_TCHAR(data.GetGlobalTableName().c_str()))
	{
		for (auto& m_Element : data.GetReplicaSettings())
			ReplicaSettings.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaSettingsDescription> ReplicaSettings;
};

USTRUCT(BlueprintType)
struct FDescribeLimitsResult
{
	GENERATED_BODY()
public:
	FDescribeLimitsResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeLimitsResult(const Aws::DynamoDB::Model::DescribeLimitsResult& data)
		: AccountMaxReadCapacityUnits(LexToString(data.GetAccountMaxReadCapacityUnits()))
		, AccountMaxWriteCapacityUnits(LexToString(data.GetAccountMaxWriteCapacityUnits()))
		, TableMaxReadCapacityUnits(LexToString(data.GetTableMaxReadCapacityUnits()))
		, TableMaxWriteCapacityUnits(LexToString(data.GetTableMaxWriteCapacityUnits()))
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AccountMaxReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AccountMaxWriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableMaxReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableMaxWriteCapacityUnits;
};

USTRUCT(BlueprintType)
struct FDescribeTableResult
{
	GENERATED_BODY()
public:
	FDescribeTableResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeTableResult(const Aws::DynamoDB::Model::DescribeTableResult& data)
		: Table(data.GetTable())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableDescription Table;
};

USTRUCT(BlueprintType)
struct FReplicaGlobalSecondaryIndexAutoScalingDescription
{
	GENERATED_BODY()
public:
	FReplicaGlobalSecondaryIndexAutoScalingDescription() = default;
#if !DISABLE_DYNAMODB
	FReplicaGlobalSecondaryIndexAutoScalingDescription(const Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription& data)
		: IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, IndexStatus(static_cast<EIndexStatus>(data.GetIndexStatus()))
		, ProvisionedReadCapacityAutoScalingSettings(data.GetProvisionedReadCapacityAutoScalingSettings())
		, ProvisionedWriteCapacityAutoScalingSettings(data.GetProvisionedWriteCapacityAutoScalingSettings())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EIndexStatus IndexStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ProvisionedReadCapacityAutoScalingSettings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ProvisionedWriteCapacityAutoScalingSettings;
};

USTRUCT(BlueprintType)
struct FReplicaAutoScalingDescription
{
	GENERATED_BODY()
public:
	FReplicaAutoScalingDescription() = default;
#if !DISABLE_DYNAMODB
	FReplicaAutoScalingDescription(const Aws::DynamoDB::Model::ReplicaAutoScalingDescription& data)
		: RegionName(UTF8_TO_TCHAR(data.GetRegionName().c_str()))
		, ReplicaProvisionedReadCapacityAutoScalingSettings(data.GetReplicaProvisionedReadCapacityAutoScalingSettings())
		, ReplicaProvisionedWriteCapacityAutoScalingSettings(data.GetReplicaProvisionedWriteCapacityAutoScalingSettings())
		, ReplicaStatus(static_cast<EReplicaStatus>(data.GetReplicaStatus()))
	{
		for (auto& m_Element : data.GetGlobalSecondaryIndexes())
			GlobalSecondaryIndexes.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndexAutoScalingDescription> GlobalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ReplicaProvisionedReadCapacityAutoScalingSettings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsDescription ReplicaProvisionedWriteCapacityAutoScalingSettings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReplicaStatus ReplicaStatus;
};

USTRUCT(BlueprintType)
struct FTableAutoScalingDescription
{
	GENERATED_BODY()
public:
	FTableAutoScalingDescription() = default;
#if !DISABLE_DYNAMODB
	FTableAutoScalingDescription(const Aws::DynamoDB::Model::TableAutoScalingDescription& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, TableStatus(static_cast<ETableStatus>(data.GetTableStatus()))
	{
		for (auto& m_Element : data.GetReplicas())
			Replicas.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ETableStatus TableStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaAutoScalingDescription> Replicas;
};

USTRUCT(BlueprintType)
struct FDescribeTableReplicaAutoScalingResult
{
	GENERATED_BODY()
public:
	FDescribeTableReplicaAutoScalingResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeTableReplicaAutoScalingResult(const Aws::DynamoDB::Model::DescribeTableReplicaAutoScalingResult& data)
		: TableAutoScalingDescription(data.GetTableAutoScalingDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableAutoScalingDescription TableAutoScalingDescription;
};

USTRUCT(BlueprintType)
struct FDescribeTimeToLiveResult
{
	GENERATED_BODY()
public:
	FDescribeTimeToLiveResult() = default;
#if !DISABLE_DYNAMODB
	FDescribeTimeToLiveResult(const Aws::DynamoDB::Model::DescribeTimeToLiveResult& data)
		: TimeToLiveDescription(data.GetTimeToLiveDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTimeToLiveDescription TimeToLiveDescription;
};

USTRUCT(BlueprintType)
struct FGetItemResult
{
	GENERATED_BODY()
public:
	FGetItemResult() = default;
#if !DISABLE_DYNAMODB
	FGetItemResult(const Aws::DynamoDB::Model::GetItemResult& data)
		: ConsumedCapacity(data.GetConsumedCapacity())
	{
		for (auto& m_Element : data.GetItem())
			Item.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Item;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConsumedCapacity ConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FBackupSummary
{
	GENERATED_BODY()
public:
	FBackupSummary() = default;
#if !DISABLE_DYNAMODB
	FBackupSummary(const Aws::DynamoDB::Model::BackupSummary& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, TableId(UTF8_TO_TCHAR(data.GetTableId().c_str()))
		, TableArn(UTF8_TO_TCHAR(data.GetTableArn().c_str()))
		, BackupArn(UTF8_TO_TCHAR(data.GetBackupArn().c_str()))
		, BackupName(UTF8_TO_TCHAR(data.GetBackupName().c_str()))
		, BackupStatus(static_cast<EBackupStatus>(data.GetBackupStatus()))
		, BackupType(static_cast<EBackupType>(data.GetBackupType()))
		, BackupSizeBytes(LexToString(data.GetBackupSizeBytes()))
	{
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetBackupCreationDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), BackupCreationDateTime);
		FDateTime::ParseIso8601(UTF8_TO_TCHAR(data.GetBackupExpiryDateTime().ToLocalTimeString(Aws::Utils::DateFormat::ISO_8601).c_str()), BackupExpiryDateTime);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime BackupCreationDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime BackupExpiryDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBackupStatus BackupStatus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBackupType BackupType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupSizeBytes;
};

USTRUCT(BlueprintType)
struct FListBackupsResult
{
	GENERATED_BODY()
public:
	FListBackupsResult() = default;
#if !DISABLE_DYNAMODB
	FListBackupsResult(const Aws::DynamoDB::Model::ListBackupsResult& data)
		: LastEvaluatedBackupArn(UTF8_TO_TCHAR(data.GetLastEvaluatedBackupArn().c_str()))
	{
		for (auto& m_Element : data.GetBackupSummaries())
			BackupSummaries.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FBackupSummary> BackupSummaries;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString LastEvaluatedBackupArn;
};

USTRUCT(BlueprintType)
struct FContributorInsightsSummary
{
	GENERATED_BODY()
public:
	FContributorInsightsSummary() = default;
#if !DISABLE_DYNAMODB
	FContributorInsightsSummary(const Aws::DynamoDB::Model::ContributorInsightsSummary& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, ContributorInsightsStatus(static_cast<EContributorInsightsStatus>(data.GetContributorInsightsStatus()))
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EContributorInsightsStatus ContributorInsightsStatus;
};


USTRUCT(BlueprintType)
struct FListContributorInsightsResult
{
	GENERATED_BODY()
public:
	FListContributorInsightsResult() = default;
#if !DISABLE_DYNAMODB
	FListContributorInsightsResult(const Aws::DynamoDB::Model::ListContributorInsightsResult& data)
		: NextToken(UTF8_TO_TCHAR(data.GetNextToken().c_str()))
	{
		for (auto& m_Element : data.GetContributorInsightsSummaries())
			ContributorInsightsSummaries.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FContributorInsightsSummary> ContributorInsightsSummaries;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString NextToken;
};

USTRUCT(BlueprintType)
struct FGlobalTable
{
	GENERATED_BODY()
public:
	FGlobalTable() = default;
#if !DISABLE_DYNAMODB
	FGlobalTable(const Aws::DynamoDB::Model::GlobalTable& data)
		: GlobalTableName(UTF8_TO_TCHAR(data.GetGlobalTableName().c_str()))
	{
		for (auto& m_Element : data.GetReplicationGroup())
			ReplicationGroup.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplica> ReplicationGroup;
};

USTRUCT(BlueprintType)
struct FListGlobalTablesResult
{
	GENERATED_BODY()
public:
	FListGlobalTablesResult() = default;
#if !DISABLE_DYNAMODB
	FListGlobalTablesResult(const Aws::DynamoDB::Model::ListGlobalTablesResult& data)
		: LastEvaluatedGlobalTableName(UTF8_TO_TCHAR(data.GetLastEvaluatedGlobalTableName().c_str()))
	{
		for (auto& m_Element : data.GetGlobalTables())
			GlobalTables.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalTable> GlobalTables;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString LastEvaluatedGlobalTableName;
};

USTRUCT(BlueprintType)
struct FListTablesResult
{
	GENERATED_BODY()
public:
	FListTablesResult() = default;
#if !DISABLE_DYNAMODB
	FListTablesResult(const Aws::DynamoDB::Model::ListTablesResult& data)
		: LastEvaluatedTableName(UTF8_TO_TCHAR(data.GetLastEvaluatedTableName().c_str()))
	{
		for (auto& m_Element : data.GetTableNames())
			TableNames.Add(UTF8_TO_TCHAR(m_Element.c_str()));
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> TableNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString LastEvaluatedTableName;
};

USTRUCT(BlueprintType)
struct FListTagsOfResourceResult
{
	GENERATED_BODY()
public:
	FListTagsOfResourceResult() = default;
#if !DISABLE_DYNAMODB
	FListTagsOfResourceResult(const Aws::DynamoDB::Model::ListTagsOfResourceResult& data)
		: NextToken(UTF8_TO_TCHAR(data.GetNextToken().c_str()))
	{
		for (auto& m_Element : data.GetTags())
			Tags.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FDynamoDBTag> Tags;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString NextToken;
};

USTRUCT(BlueprintType)
struct FPutItemResult
{
	GENERATED_BODY()
public:
	FPutItemResult() = default;
#if !DISABLE_DYNAMODB
	FPutItemResult(const Aws::DynamoDB::Model::PutItemResult& data)
		: ConsumedCapacity(data.GetConsumedCapacity())
		, ItemCollectionMetrics(data.GetItemCollectionMetrics())
	{
		for (auto& m_Element : data.GetAttributes())
			Attributes.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Attributes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConsumedCapacity ConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FItemCollectionMetrics ItemCollectionMetrics;
};

USTRUCT(BlueprintType)
struct FAttributeValueMap
{
	GENERATED_BODY()
public:
	FAttributeValueMap() = default;
	FAttributeValueMap(FString key, FAttributeValue value)
	{
		Values.Add(key, value);
	}
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Values;
};

USTRUCT(BlueprintType)
struct FQueryResult
{
	GENERATED_BODY()
public:
	FQueryResult() = default;
#if !DISABLE_DYNAMODB
	FQueryResult(const Aws::DynamoDB::Model::QueryResult& data)
		: Count(data.GetCount())
		, ScannedCount(data.GetScannedCount())
		, ConsumedCapacity(data.GetConsumedCapacity())
	{
		for (auto& m_Element : data.GetItems())
		{
			FAttributeValueMap m_MappedValues;

			for (auto& m_Map : m_Element)
			{
				m_MappedValues.Values.Add(UTF8_TO_TCHAR(m_Map.first.c_str()), m_Map.second);
			}

			Items.Add(m_MappedValues);
		}

		for (auto& m_Element : data.GetLastEvaluatedKey())
			LastEvaluatedKey.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeValueMap> Items;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Count;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 ScannedCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> LastEvaluatedKey;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConsumedCapacity ConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FRestoreTableFromBackupResult
{
	GENERATED_BODY()
public:
	FRestoreTableFromBackupResult() = default;
#if !DISABLE_DYNAMODB
	FRestoreTableFromBackupResult(const Aws::DynamoDB::Model::RestoreTableFromBackupResult& data)
		: TableDescription(data.GetTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableDescription TableDescription;
};

USTRUCT(BlueprintType)
struct FRestoreTableToPointInTimeResult
{
	GENERATED_BODY()
public:
	FRestoreTableToPointInTimeResult() = default;
#if !DISABLE_DYNAMODB
	FRestoreTableToPointInTimeResult(const Aws::DynamoDB::Model::RestoreTableToPointInTimeResult& data)
		: TableDescription(data.GetTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableDescription TableDescription;
};

USTRUCT(BlueprintType)
struct FScanResult
{
	GENERATED_BODY()
public:
	FScanResult() = default;
#if !DISABLE_DYNAMODB
	FScanResult(const Aws::DynamoDB::Model::ScanResult& data)
		: Count(data.GetCount())
		, ScannedCount(data.GetScannedCount())
		, ConsumedCapacity(data.GetConsumedCapacity())
	{
		for (auto& m_Element : data.GetItems())
		{
			for (auto& m_Map : m_Element)
			{
				Items.Add(FAttributeValueMap(m_Map.first.c_str(), m_Map.second));
			}
		}

		for (auto& m_Element : data.GetLastEvaluatedKey())
			LastEvaluatedKey.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeValueMap> Items;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Count;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 ScannedCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> LastEvaluatedKey;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConsumedCapacity ConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FItemResponse
{
	GENERATED_BODY()
public:
	FItemResponse() = default;
#if !DISABLE_DYNAMODB
	FItemResponse(const Aws::DynamoDB::Model::ItemResponse& data)
	{
		for (auto& m_Element : data.GetItem())
			Item.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Item;
};

USTRUCT(BlueprintType)
struct FTransactGetItemsResult
{
	GENERATED_BODY()
public:
	FTransactGetItemsResult() = default;
#if !DISABLE_DYNAMODB
	FTransactGetItemsResult(const Aws::DynamoDB::Model::TransactGetItemsResult& data)
	{
		for (auto& m_Element : data.GetConsumedCapacity())
			ConsumedCapacity.Add(m_Element);

		for (auto& m_Element : data.GetResponses())
			Responses.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FConsumedCapacity> ConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FItemResponse> Responses;
};

USTRUCT(BlueprintType)
struct FItemCollectionMetricsArray
{
	GENERATED_BODY()
public:
	FItemCollectionMetricsArray() = default;
	FItemCollectionMetricsArray(TArray<FItemCollectionMetrics> values)
		: Items(values)
	{}
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FItemCollectionMetrics> Items;
};

USTRUCT(BlueprintType)
struct FTransactWriteItemsResult
{
	GENERATED_BODY()
public:
	FTransactWriteItemsResult() = default;
#if !DISABLE_DYNAMODB
	FTransactWriteItemsResult(const Aws::DynamoDB::Model::TransactWriteItemsResult& data)
	{
		for (auto& m_Element : data.GetConsumedCapacity())
			ConsumedCapacity.Add(m_Element);

		for (auto& m_Element : data.GetItemCollectionMetrics())
		{
			TArray<FItemCollectionMetrics> m_Arr;

			for (auto& m_Data : m_Element.second)
			{
				m_Arr.Add(m_Data);
			}

			ItemCollectionMetrics.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Arr);
		}
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FConsumedCapacity> ConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FItemCollectionMetricsArray> ItemCollectionMetrics;
};

USTRUCT(BlueprintType)
struct FUpdateContinuousBackupsResult
{
	GENERATED_BODY()
public:
	FUpdateContinuousBackupsResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateContinuousBackupsResult(const Aws::DynamoDB::Model::UpdateContinuousBackupsResult& data)
		: ContinuousBackupsDescription(data.GetContinuousBackupsDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FContinuousBackupsDescription ContinuousBackupsDescription;
};

USTRUCT(BlueprintType)
struct FUpdateContributorInsightsResult
{
	GENERATED_BODY()
public:
	FUpdateContributorInsightsResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateContributorInsightsResult(const Aws::DynamoDB::Model::UpdateContributorInsightsResult& data)
		: TableName(UTF8_TO_TCHAR(data.GetTableName().c_str()))
		, IndexName(UTF8_TO_TCHAR(data.GetIndexName().c_str()))
		, ContributorInsightsStatus(static_cast<EContributorInsightsStatus>(data.GetContributorInsightsStatus()))
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EContributorInsightsStatus ContributorInsightsStatus;
};

USTRUCT(BlueprintType)
struct FUpdateGlobalTableResult
{
	GENERATED_BODY()
public:
	FUpdateGlobalTableResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateGlobalTableResult(const Aws::DynamoDB::Model::UpdateGlobalTableResult& data)
		: GlobalTableDescription(data.GetGlobalTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FGlobalTableDescription GlobalTableDescription;
};

USTRUCT(BlueprintType)
struct FUpdateGlobalTableSettingsResult
{
	GENERATED_BODY()
public:
	FUpdateGlobalTableSettingsResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateGlobalTableSettingsResult(const Aws::DynamoDB::Model::UpdateGlobalTableSettingsResult& data)
		: GlobalTableName(UTF8_TO_TCHAR(data.GetGlobalTableName().c_str()))
	{
		for (auto& m_Element : data.GetReplicaSettings())
			ReplicaSettings.Add(m_Element);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaSettingsDescription> ReplicaSettings;
};

USTRUCT(BlueprintType)
struct FUpdateItemResult
{
	GENERATED_BODY()
public:
	FUpdateItemResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateItemResult(const Aws::DynamoDB::Model::UpdateItemResult& data)
		: ConsumedCapacity(data.GetConsumedCapacity())
		, ItemCollectionMetrics(data.GetItemCollectionMetrics())
	{
		for (auto& m_Element : data.GetAttributes())
			Attributes.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Attributes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConsumedCapacity ConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FItemCollectionMetrics ItemCollectionMetrics;
};

USTRUCT(BlueprintType)
struct FUpdateTableResult
{
	GENERATED_BODY()
public:
	FUpdateTableResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateTableResult(const Aws::DynamoDB::Model::UpdateTableResult& data)
		: TableDescription(data.GetTableDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableDescription TableDescription;
};

USTRUCT(BlueprintType)
struct FUpdateTableReplicaAutoScalingResult
{
	GENERATED_BODY()
public:
	FUpdateTableReplicaAutoScalingResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateTableReplicaAutoScalingResult(const Aws::DynamoDB::Model::UpdateTableReplicaAutoScalingResult& data)
		: TableAutoScalingDescription(data.GetTableAutoScalingDescription())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTableAutoScalingDescription TableAutoScalingDescription;
};

USTRUCT(BlueprintType)
struct FUpdateTimeToLiveResult
{
	GENERATED_BODY()
public:
	FUpdateTimeToLiveResult() = default;
#if !DISABLE_DYNAMODB
	FUpdateTimeToLiveResult(const Aws::DynamoDB::Model::UpdateTimeToLiveResult& data)
		: TimeToLiveSpecification(data.GetTimeToLiveSpecification())
	{}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTimeToLiveSpecification TimeToLiveSpecification;
};