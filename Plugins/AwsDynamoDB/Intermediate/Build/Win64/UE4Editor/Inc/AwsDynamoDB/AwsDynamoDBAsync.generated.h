// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUpdateTimeToLiveResult;
enum class EDynamoDBErrors : uint8;
struct FUpdateTableReplicaAutoScalingResult;
struct FUpdateTableResult;
struct FUpdateItemResult;
struct FUpdateGlobalTableSettingsResult;
struct FUpdateGlobalTableResult;
struct FUpdateContributorInsightsResult;
struct FUpdateContinuousBackupsResult;
struct FTransactWriteItemsResult;
struct FTransactGetItemsResult;
struct FScanResult;
struct FRestoreTableToPointInTimeResult;
struct FRestoreTableFromBackupResult;
struct FQueryResult;
struct FPutItemResult;
struct FListTagsOfResourceResult;
struct FListTablesResult;
struct FListGlobalTablesResult;
struct FListContributorInsightsResult;
struct FListBackupsResult;
struct FGetItemResult;
struct FDescribeTimeToLiveResult;
struct FDescribeTableReplicaAutoScalingResult;
struct FDescribeTableResult;
struct FDescribeLimitsResult;
struct FDescribeGlobalTableSettingsResult;
struct FDescribeGlobalTableResult;
struct FDescribeEndpointsResult;
struct FDescribeContributorInsightsResult;
struct FDescribeContinuousBackupsResult;
struct FDescribeBackupResult;
struct FDeleteTableResult;
struct FDeleteItemResult;
struct FDeleteBackupResult;
struct FCreateTableResult;
struct FCreateGlobalTableResult;
struct FCreateBackupResult;
struct FBatchWriteItemResult;
struct FBatchGetItemResult;
class UObject;
class UDynamoDBClientObject;
struct FBatchGetItemRequest;
class UDynamoBatchGetItem;
struct FBatchWriteItemRequest;
class UDynamoBatchWriteItem;
struct FCreateBackupRequest;
class UDynamoCreateBackup;
struct FCreateGlobalTableRequest;
class UDynamoCreateGlobalTable;
struct FCreateTableRequest;
class UDynamoCreateTable;
struct FDeleteBackupRequest;
class UDynamoDeleteBackup;
struct FDeleteItemRequest;
class UDynamoDeleteItem;
struct FDeleteTableRequest;
class UDynamoDeleteTable;
struct FDescribeBackupRequest;
class UDynamoDescribeBackup;
struct FDescribeContinuousBackupsRequest;
class UDynamoDescribeContinuousBackups;
struct FDescribeContributorInsightsRequest;
class UDynamoDescribeContributorInsights;
struct FDescribeEndpointsRequest;
class UDynamoDescribeEndpoints;
struct FDescribeGlobalTableRequest;
class UDynamoDescribeGlobalTable;
struct FDescribeGlobalTableSettingsRequest;
class UDynamoDescribeGlobalTableSettings;
struct FDescribeLimitsRequest;
class UDynamoDescribeLimits;
struct FDescribeTableRequest;
class UDynamoDescribeTable;
struct FDescribeTableReplicaAutoScalingRequest;
class UDynamoDescribeTableReplicaAutoScaling;
struct FDescribeTimeToLiveRequest;
class UDynamoDescribeTimeToLive;
struct FGetItemRequest;
class UDynamoGetItem;
struct FListBackupsRequest;
class UDynamoListBackups;
struct FListContributorInsightsRequest;
class UDynamoListContributorInsights;
struct FListGlobalTablesRequest;
class UDynamoListGlobalTables;
struct FListTablesRequest;
class UDynamoListTables;
struct FListTagsOfResourceRequest;
class UDynamoListTagsOfResource;
struct FPutItemRequest;
class UDynamoPutItem;
struct FQueryRequest;
class UDynamoQuery;
struct FRestoreTableFromBackupRequest;
class UDynamoRestoreTableFromBackup;
struct FRestoreTableToPointInTimeRequest;
class UDynamoRestoreTableToPointInTime;
struct FScanRequest;
class UDynamoScan;
struct FTagResourceRequestDynamoDB;
class UDynamoTagResource;
struct FTransactGetItemsRequest;
class UDynamoTransactGetItems;
struct FTransactWriteItemsRequest;
class UDynamoTransactWriteItems;
struct FUntagResourceRequestDynamoDB;
class UDynamoUntagResource;
struct FUpdateContinuousBackupsRequest;
class UDynamoUpdateContinuousBackups;
struct FUpdateContributorInsightsRequest;
class UDynamoUpdateContributorInsights;
struct FUpdateGlobalTableRequest;
class UDynamoUpdateGlobalTable;
struct FUpdateGlobalTableSettingsRequest;
class UDynamoUpdateGlobalTableSettings;
struct FUpdateItemRequest;
class UDynamoUpdateItem;
struct FUpdateTableRequest;
class UDynamoUpdateTable;
struct FUpdateTableReplicaAutoScalingRequest;
class UDynamoUpdateTableReplicaAutoScaling;
struct FUpdateTimeToLiveRequest;
class UDynamoUpdateTimeToLive;
#ifdef AWSDYNAMODB_AwsDynamoDBAsync_generated_h
#error "AwsDynamoDBAsync.generated.h already included, missing '#pragma once' in AwsDynamoDBAsync.h"
#endif
#define AWSDYNAMODB_AwsDynamoDBAsync_generated_h

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1176_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateTimeToLiveCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateTimeToLiveResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateTimeToLiveCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateTimeToLiveCallback, bool bSuccess, FUpdateTimeToLiveResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateTimeToLiveCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateTimeToLiveCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1151_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateTableReplicaAutoScalingCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateTableReplicaAutoScalingResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateTableReplicaAutoScalingCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateTableReplicaAutoScalingCallback, bool bSuccess, FUpdateTableReplicaAutoScalingResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateTableReplicaAutoScalingCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateTableReplicaAutoScalingCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1119_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateTableCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateTableCallback, bool bSuccess, FUpdateTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1092_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateItemCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateItemResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateItemCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateItemCallback, bool bSuccess, FUpdateItemResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateItemCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateItemCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1067_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateGlobalTableSettingsCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateGlobalTableSettingsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateGlobalTableSettingsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateGlobalTableSettingsCallback, bool bSuccess, FUpdateGlobalTableSettingsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateGlobalTableSettingsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateGlobalTableSettingsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1041_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateGlobalTableCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateGlobalTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateGlobalTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateGlobalTableCallback, bool bSuccess, FUpdateGlobalTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateGlobalTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateGlobalTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1016_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateContributorInsightsCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateContributorInsightsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateContributorInsightsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateContributorInsightsCallback, bool bSuccess, FUpdateContributorInsightsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateContributorInsightsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateContributorInsightsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_988_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUpdateContinuousBackupsCallback_Parms \
{ \
	bool bSuccess; \
	FUpdateContinuousBackupsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUpdateContinuousBackupsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateContinuousBackupsCallback, bool bSuccess, FUpdateContinuousBackupsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUpdateContinuousBackupsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUpdateContinuousBackupsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_961_DELEGATE \
struct _Script_AwsDynamoDB_eventOnUntagResourceCallback_Parms \
{ \
	bool bSuccess; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnUntagResourceCallback_DelegateWrapper(const FMulticastScriptDelegate& OnUntagResourceCallback, bool bSuccess, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnUntagResourceCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnUntagResourceCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_922_DELEGATE \
struct _Script_AwsDynamoDB_eventOnTransactWriteItemsCallback_Parms \
{ \
	bool bSuccess; \
	FTransactWriteItemsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnTransactWriteItemsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnTransactWriteItemsCallback, bool bSuccess, FTransactWriteItemsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnTransactWriteItemsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnTransactWriteItemsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_891_DELEGATE \
struct _Script_AwsDynamoDB_eventOnTransactGetItemsCallback_Parms \
{ \
	bool bSuccess; \
	FTransactGetItemsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnTransactGetItemsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnTransactGetItemsCallback, bool bSuccess, FTransactGetItemsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnTransactGetItemsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnTransactGetItemsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_864_DELEGATE \
struct _Script_AwsDynamoDB_eventOnTagResourceCallback_Parms \
{ \
	bool bSuccess; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnTagResourceCallback_DelegateWrapper(const FMulticastScriptDelegate& OnTagResourceCallback, bool bSuccess, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnTagResourceCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnTagResourceCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_834_DELEGATE \
struct _Script_AwsDynamoDB_eventOnScanCallback_Parms \
{ \
	bool bSuccess; \
	FScanResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnScanCallback_DelegateWrapper(const FMulticastScriptDelegate& OnScanCallback, bool bSuccess, FScanResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnScanCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnScanCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_793_DELEGATE \
struct _Script_AwsDynamoDB_eventOnRestoreTableToPointInTimeCallback_Parms \
{ \
	bool bSuccess; \
	FRestoreTableToPointInTimeResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnRestoreTableToPointInTimeCallback_DelegateWrapper(const FMulticastScriptDelegate& OnRestoreTableToPointInTimeCallback, bool bSuccess, FRestoreTableToPointInTimeResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnRestoreTableToPointInTimeCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnRestoreTableToPointInTimeCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_759_DELEGATE \
struct _Script_AwsDynamoDB_eventOnRestoreTableFromBackupCallback_Parms \
{ \
	bool bSuccess; \
	FRestoreTableFromBackupResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnRestoreTableFromBackupCallback_DelegateWrapper(const FMulticastScriptDelegate& OnRestoreTableFromBackupCallback, bool bSuccess, FRestoreTableFromBackupResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnRestoreTableFromBackupCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnRestoreTableFromBackupCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_726_DELEGATE \
struct _Script_AwsDynamoDB_eventOnQueryCallback_Parms \
{ \
	bool bSuccess; \
	FQueryResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnQueryCallback_DelegateWrapper(const FMulticastScriptDelegate& OnQueryCallback, bool bSuccess, FQueryResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnQueryCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnQueryCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_696_DELEGATE \
struct _Script_AwsDynamoDB_eventOnPutItemCallback_Parms \
{ \
	bool bSuccess; \
	FPutItemResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnPutItemCallback_DelegateWrapper(const FMulticastScriptDelegate& OnPutItemCallback, bool bSuccess, FPutItemResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnPutItemCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnPutItemCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_670_DELEGATE \
struct _Script_AwsDynamoDB_eventOnListTagsOfResourceCallback_Parms \
{ \
	bool bSuccess; \
	FListTagsOfResourceResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnListTagsOfResourceCallback_DelegateWrapper(const FMulticastScriptDelegate& OnListTagsOfResourceCallback, bool bSuccess, FListTagsOfResourceResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnListTagsOfResourceCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnListTagsOfResourceCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_645_DELEGATE \
struct _Script_AwsDynamoDB_eventOnListTablesCallback_Parms \
{ \
	bool bSuccess; \
	FListTablesResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnListTablesCallback_DelegateWrapper(const FMulticastScriptDelegate& OnListTablesCallback, bool bSuccess, FListTablesResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnListTablesCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnListTablesCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_620_DELEGATE \
struct _Script_AwsDynamoDB_eventOnListGlobalTablesCallback_Parms \
{ \
	bool bSuccess; \
	FListGlobalTablesResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnListGlobalTablesCallback_DelegateWrapper(const FMulticastScriptDelegate& OnListGlobalTablesCallback, bool bSuccess, FListGlobalTablesResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnListGlobalTablesCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnListGlobalTablesCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_595_DELEGATE \
struct _Script_AwsDynamoDB_eventOnListContributorInsightsCallback_Parms \
{ \
	bool bSuccess; \
	FListContributorInsightsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnListContributorInsightsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnListContributorInsightsCallback, bool bSuccess, FListContributorInsightsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnListContributorInsightsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnListContributorInsightsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_567_DELEGATE \
struct _Script_AwsDynamoDB_eventOnListBackupsCallback_Parms \
{ \
	bool bSuccess; \
	FListBackupsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnListBackupsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnListBackupsCallback, bool bSuccess, FListBackupsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnListBackupsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnListBackupsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_540_DELEGATE \
struct _Script_AwsDynamoDB_eventOnGetItemCallback_Parms \
{ \
	bool bSuccess; \
	FGetItemResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnGetItemCallback_DelegateWrapper(const FMulticastScriptDelegate& OnGetItemCallback, bool bSuccess, FGetItemResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnGetItemCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnGetItemCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_515_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeTimeToLiveCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeTimeToLiveResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeTimeToLiveCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeTimeToLiveCallback, bool bSuccess, FDescribeTimeToLiveResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeTimeToLiveCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeTimeToLiveCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_490_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeTableReplicaAutoScalingCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeTableReplicaAutoScalingResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeTableReplicaAutoScalingCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeTableReplicaAutoScalingCallback, bool bSuccess, FDescribeTableReplicaAutoScalingResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeTableReplicaAutoScalingCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeTableReplicaAutoScalingCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_465_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeTableCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeTableCallback, bool bSuccess, FDescribeTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_424_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeLimitsCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeLimitsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeLimitsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeLimitsCallback, bool bSuccess, FDescribeLimitsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeLimitsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeLimitsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_399_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeGlobalTableSettingsCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeGlobalTableSettingsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeGlobalTableSettingsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeGlobalTableSettingsCallback, bool bSuccess, FDescribeGlobalTableSettingsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeGlobalTableSettingsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeGlobalTableSettingsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_374_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeGlobalTableCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeGlobalTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeGlobalTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeGlobalTableCallback, bool bSuccess, FDescribeGlobalTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeGlobalTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeGlobalTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_349_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeEndpointsCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeEndpointsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeEndpointsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeEndpointsCallback, bool bSuccess, FDescribeEndpointsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeEndpointsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeEndpointsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_324_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeContributorInsightsCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeContributorInsightsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeContributorInsightsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeContributorInsightsCallback, bool bSuccess, FDescribeContributorInsightsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeContributorInsightsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeContributorInsightsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_295_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeContinuousBackupsCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeContinuousBackupsResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeContinuousBackupsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeContinuousBackupsCallback, bool bSuccess, FDescribeContinuousBackupsResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeContinuousBackupsCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeContinuousBackupsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_269_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDescribeBackupCallback_Parms \
{ \
	bool bSuccess; \
	FDescribeBackupResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDescribeBackupCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeBackupCallback, bool bSuccess, FDescribeBackupResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDescribeBackupCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDescribeBackupCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_243_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDeleteTableCallback_Parms \
{ \
	bool bSuccess; \
	FDeleteTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDeleteTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteTableCallback, bool bSuccess, FDeleteTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDeleteTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDeleteTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_215_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDeleteItemCallback_Parms \
{ \
	bool bSuccess; \
	FDeleteItemResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDeleteItemCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemCallback, bool bSuccess, FDeleteItemResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDeleteItemCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDeleteItemCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_188_DELEGATE \
struct _Script_AwsDynamoDB_eventOnDeleteBackupCallback_Parms \
{ \
	bool bSuccess; \
	FDeleteBackupResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnDeleteBackupCallback_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteBackupCallback, bool bSuccess, FDeleteBackupResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnDeleteBackupCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnDeleteBackupCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_159_DELEGATE \
struct _Script_AwsDynamoDB_eventOnCreateTableCallback_Parms \
{ \
	bool bSuccess; \
	FCreateTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnCreateTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateTableCallback, bool bSuccess, FCreateTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnCreateTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnCreateTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_119_DELEGATE \
struct _Script_AwsDynamoDB_eventOnCreateGlobalTableCallback_Parms \
{ \
	bool bSuccess; \
	FCreateGlobalTableResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnCreateGlobalTableCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateGlobalTableCallback, bool bSuccess, FCreateGlobalTableResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnCreateGlobalTableCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnCreateGlobalTableCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_82_DELEGATE \
struct _Script_AwsDynamoDB_eventOnCreateBackupCallback_Parms \
{ \
	bool bSuccess; \
	FCreateBackupResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnCreateBackupCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBackupCallback, bool bSuccess, FCreateBackupResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnCreateBackupCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnCreateBackupCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_52_DELEGATE \
struct _Script_AwsDynamoDB_eventOnBatchWriteItemCallback_Parms \
{ \
	bool bSuccess; \
	FBatchWriteItemResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnBatchWriteItemCallback_DelegateWrapper(const FMulticastScriptDelegate& OnBatchWriteItemCallback, bool bSuccess, FBatchWriteItemResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnBatchWriteItemCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnBatchWriteItemCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_17_DELEGATE \
struct _Script_AwsDynamoDB_eventOnBatchGetItemCallback_Parms \
{ \
	bool bSuccess; \
	FBatchGetItemResult result; \
	EDynamoDBErrors errorType; \
	FString errorMessage; \
}; \
static inline void FOnBatchGetItemCallback_DelegateWrapper(const FMulticastScriptDelegate& OnBatchGetItemCallback, bool bSuccess, FBatchGetItemResult const& result, EDynamoDBErrors errorType, const FString& errorMessage) \
{ \
	_Script_AwsDynamoDB_eventOnBatchGetItemCallback_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.result=result; \
	Parms.errorType=errorType; \
	Parms.errorMessage=errorMessage; \
	OnBatchGetItemCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBatchGetItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBatchGetItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoBatchGetItem(); \
	friend struct Z_Construct_UClass_UDynamoBatchGetItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoBatchGetItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoBatchGetItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoBatchGetItem(); \
	friend struct Z_Construct_UClass_UDynamoBatchGetItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoBatchGetItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoBatchGetItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoBatchGetItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoBatchGetItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoBatchGetItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoBatchGetItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoBatchGetItem(UDynamoBatchGetItem&&); \
	NO_API UDynamoBatchGetItem(const UDynamoBatchGetItem&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoBatchGetItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoBatchGetItem(UDynamoBatchGetItem&&); \
	NO_API UDynamoBatchGetItem(const UDynamoBatchGetItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoBatchGetItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoBatchGetItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoBatchGetItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_19_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoBatchGetItem>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBatchWriteItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBatchWriteItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoBatchWriteItem(); \
	friend struct Z_Construct_UClass_UDynamoBatchWriteItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoBatchWriteItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoBatchWriteItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoBatchWriteItem(); \
	friend struct Z_Construct_UClass_UDynamoBatchWriteItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoBatchWriteItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoBatchWriteItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoBatchWriteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoBatchWriteItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoBatchWriteItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoBatchWriteItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoBatchWriteItem(UDynamoBatchWriteItem&&); \
	NO_API UDynamoBatchWriteItem(const UDynamoBatchWriteItem&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoBatchWriteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoBatchWriteItem(UDynamoBatchWriteItem&&); \
	NO_API UDynamoBatchWriteItem(const UDynamoBatchWriteItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoBatchWriteItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoBatchWriteItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoBatchWriteItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_54_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoBatchWriteItem>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoCreateBackup(); \
	friend struct Z_Construct_UClass_UDynamoCreateBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoCreateBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoCreateBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoCreateBackup(); \
	friend struct Z_Construct_UClass_UDynamoCreateBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoCreateBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoCreateBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoCreateBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoCreateBackup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoCreateBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoCreateBackup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoCreateBackup(UDynamoCreateBackup&&); \
	NO_API UDynamoCreateBackup(const UDynamoCreateBackup&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoCreateBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoCreateBackup(UDynamoCreateBackup&&); \
	NO_API UDynamoCreateBackup(const UDynamoCreateBackup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoCreateBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoCreateBackup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoCreateBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_84_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoCreateBackup>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGlobalTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGlobalTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoCreateGlobalTable(); \
	friend struct Z_Construct_UClass_UDynamoCreateGlobalTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoCreateGlobalTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoCreateGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoCreateGlobalTable(); \
	friend struct Z_Construct_UClass_UDynamoCreateGlobalTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoCreateGlobalTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoCreateGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoCreateGlobalTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoCreateGlobalTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoCreateGlobalTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoCreateGlobalTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoCreateGlobalTable(UDynamoCreateGlobalTable&&); \
	NO_API UDynamoCreateGlobalTable(const UDynamoCreateGlobalTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoCreateGlobalTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoCreateGlobalTable(UDynamoCreateGlobalTable&&); \
	NO_API UDynamoCreateGlobalTable(const UDynamoCreateGlobalTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoCreateGlobalTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoCreateGlobalTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoCreateGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_121_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoCreateGlobalTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoCreateTable(); \
	friend struct Z_Construct_UClass_UDynamoCreateTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoCreateTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoCreateTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoCreateTable(); \
	friend struct Z_Construct_UClass_UDynamoCreateTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoCreateTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoCreateTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoCreateTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoCreateTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoCreateTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoCreateTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoCreateTable(UDynamoCreateTable&&); \
	NO_API UDynamoCreateTable(const UDynamoCreateTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoCreateTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoCreateTable(UDynamoCreateTable&&); \
	NO_API UDynamoCreateTable(const UDynamoCreateTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoCreateTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoCreateTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoCreateTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_161_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoCreateTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDeleteBackup(); \
	friend struct Z_Construct_UClass_UDynamoDeleteBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoDeleteBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDeleteBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDeleteBackup(); \
	friend struct Z_Construct_UClass_UDynamoDeleteBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoDeleteBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDeleteBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDeleteBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDeleteBackup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDeleteBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDeleteBackup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDeleteBackup(UDynamoDeleteBackup&&); \
	NO_API UDynamoDeleteBackup(const UDynamoDeleteBackup&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDeleteBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDeleteBackup(UDynamoDeleteBackup&&); \
	NO_API UDynamoDeleteBackup(const UDynamoDeleteBackup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDeleteBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDeleteBackup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDeleteBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_190_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDeleteBackup>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDeleteItem(); \
	friend struct Z_Construct_UClass_UDynamoDeleteItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoDeleteItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDeleteItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDeleteItem(); \
	friend struct Z_Construct_UClass_UDynamoDeleteItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoDeleteItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDeleteItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDeleteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDeleteItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDeleteItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDeleteItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDeleteItem(UDynamoDeleteItem&&); \
	NO_API UDynamoDeleteItem(const UDynamoDeleteItem&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDeleteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDeleteItem(UDynamoDeleteItem&&); \
	NO_API UDynamoDeleteItem(const UDynamoDeleteItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDeleteItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDeleteItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDeleteItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_217_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDeleteItem>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDeleteTable(); \
	friend struct Z_Construct_UClass_UDynamoDeleteTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoDeleteTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDeleteTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDeleteTable(); \
	friend struct Z_Construct_UClass_UDynamoDeleteTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoDeleteTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDeleteTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDeleteTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDeleteTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDeleteTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDeleteTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDeleteTable(UDynamoDeleteTable&&); \
	NO_API UDynamoDeleteTable(const UDynamoDeleteTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDeleteTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDeleteTable(UDynamoDeleteTable&&); \
	NO_API UDynamoDeleteTable(const UDynamoDeleteTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDeleteTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDeleteTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDeleteTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_245_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDeleteTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeBackup(); \
	friend struct Z_Construct_UClass_UDynamoDescribeBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeBackup(); \
	friend struct Z_Construct_UClass_UDynamoDescribeBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeBackup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeBackup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeBackup(UDynamoDescribeBackup&&); \
	NO_API UDynamoDescribeBackup(const UDynamoDescribeBackup&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeBackup(UDynamoDescribeBackup&&); \
	NO_API UDynamoDescribeBackup(const UDynamoDescribeBackup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeBackup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_271_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeBackup>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeContinuousBackups);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeContinuousBackups);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeContinuousBackups(); \
	friend struct Z_Construct_UClass_UDynamoDescribeContinuousBackups_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeContinuousBackups, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeContinuousBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeContinuousBackups(); \
	friend struct Z_Construct_UClass_UDynamoDescribeContinuousBackups_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeContinuousBackups, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeContinuousBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeContinuousBackups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeContinuousBackups) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeContinuousBackups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeContinuousBackups); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeContinuousBackups(UDynamoDescribeContinuousBackups&&); \
	NO_API UDynamoDescribeContinuousBackups(const UDynamoDescribeContinuousBackups&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeContinuousBackups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeContinuousBackups(UDynamoDescribeContinuousBackups&&); \
	NO_API UDynamoDescribeContinuousBackups(const UDynamoDescribeContinuousBackups&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeContinuousBackups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeContinuousBackups); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeContinuousBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_297_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_300_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeContinuousBackups>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeContributorInsights);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeContributorInsights);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeContributorInsights(); \
	friend struct Z_Construct_UClass_UDynamoDescribeContributorInsights_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeContributorInsights, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeContributorInsights(); \
	friend struct Z_Construct_UClass_UDynamoDescribeContributorInsights_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeContributorInsights, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeContributorInsights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeContributorInsights) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeContributorInsights); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeContributorInsights); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeContributorInsights(UDynamoDescribeContributorInsights&&); \
	NO_API UDynamoDescribeContributorInsights(const UDynamoDescribeContributorInsights&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeContributorInsights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeContributorInsights(UDynamoDescribeContributorInsights&&); \
	NO_API UDynamoDescribeContributorInsights(const UDynamoDescribeContributorInsights&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeContributorInsights); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeContributorInsights); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_326_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeContributorInsights>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeEndpoints);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeEndpoints);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeEndpoints(); \
	friend struct Z_Construct_UClass_UDynamoDescribeEndpoints_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeEndpoints, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeEndpoints)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeEndpoints(); \
	friend struct Z_Construct_UClass_UDynamoDescribeEndpoints_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeEndpoints, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeEndpoints)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeEndpoints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeEndpoints) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeEndpoints); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeEndpoints); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeEndpoints(UDynamoDescribeEndpoints&&); \
	NO_API UDynamoDescribeEndpoints(const UDynamoDescribeEndpoints&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeEndpoints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeEndpoints(UDynamoDescribeEndpoints&&); \
	NO_API UDynamoDescribeEndpoints(const UDynamoDescribeEndpoints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeEndpoints); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeEndpoints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeEndpoints)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_351_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeEndpoints>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeGlobalTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeGlobalTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeGlobalTable(); \
	friend struct Z_Construct_UClass_UDynamoDescribeGlobalTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeGlobalTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeGlobalTable(); \
	friend struct Z_Construct_UClass_UDynamoDescribeGlobalTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeGlobalTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeGlobalTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeGlobalTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeGlobalTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeGlobalTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeGlobalTable(UDynamoDescribeGlobalTable&&); \
	NO_API UDynamoDescribeGlobalTable(const UDynamoDescribeGlobalTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeGlobalTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeGlobalTable(UDynamoDescribeGlobalTable&&); \
	NO_API UDynamoDescribeGlobalTable(const UDynamoDescribeGlobalTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeGlobalTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeGlobalTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_376_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_379_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeGlobalTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeGlobalTableSettings);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeGlobalTableSettings);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeGlobalTableSettings(); \
	friend struct Z_Construct_UClass_UDynamoDescribeGlobalTableSettings_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeGlobalTableSettings, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeGlobalTableSettings)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeGlobalTableSettings(); \
	friend struct Z_Construct_UClass_UDynamoDescribeGlobalTableSettings_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeGlobalTableSettings, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeGlobalTableSettings)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeGlobalTableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeGlobalTableSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeGlobalTableSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeGlobalTableSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeGlobalTableSettings(UDynamoDescribeGlobalTableSettings&&); \
	NO_API UDynamoDescribeGlobalTableSettings(const UDynamoDescribeGlobalTableSettings&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeGlobalTableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeGlobalTableSettings(UDynamoDescribeGlobalTableSettings&&); \
	NO_API UDynamoDescribeGlobalTableSettings(const UDynamoDescribeGlobalTableSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeGlobalTableSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeGlobalTableSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeGlobalTableSettings)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_401_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_404_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeGlobalTableSettings>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeLimits);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeLimits);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeLimits(); \
	friend struct Z_Construct_UClass_UDynamoDescribeLimits_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeLimits, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeLimits)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeLimits(); \
	friend struct Z_Construct_UClass_UDynamoDescribeLimits_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeLimits, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeLimits)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeLimits(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeLimits) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeLimits); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeLimits); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeLimits(UDynamoDescribeLimits&&); \
	NO_API UDynamoDescribeLimits(const UDynamoDescribeLimits&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeLimits(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeLimits(UDynamoDescribeLimits&&); \
	NO_API UDynamoDescribeLimits(const UDynamoDescribeLimits&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeLimits); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeLimits); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeLimits)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_426_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_429_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeLimits>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeTable(); \
	friend struct Z_Construct_UClass_UDynamoDescribeTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeTable(); \
	friend struct Z_Construct_UClass_UDynamoDescribeTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeTable(UDynamoDescribeTable&&); \
	NO_API UDynamoDescribeTable(const UDynamoDescribeTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeTable(UDynamoDescribeTable&&); \
	NO_API UDynamoDescribeTable(const UDynamoDescribeTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_467_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_470_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeTableReplicaAutoScaling);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeTableReplicaAutoScaling);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeTableReplicaAutoScaling(); \
	friend struct Z_Construct_UClass_UDynamoDescribeTableReplicaAutoScaling_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeTableReplicaAutoScaling, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeTableReplicaAutoScaling)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeTableReplicaAutoScaling(); \
	friend struct Z_Construct_UClass_UDynamoDescribeTableReplicaAutoScaling_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeTableReplicaAutoScaling, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeTableReplicaAutoScaling)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeTableReplicaAutoScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeTableReplicaAutoScaling) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeTableReplicaAutoScaling); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeTableReplicaAutoScaling); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeTableReplicaAutoScaling(UDynamoDescribeTableReplicaAutoScaling&&); \
	NO_API UDynamoDescribeTableReplicaAutoScaling(const UDynamoDescribeTableReplicaAutoScaling&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeTableReplicaAutoScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeTableReplicaAutoScaling(UDynamoDescribeTableReplicaAutoScaling&&); \
	NO_API UDynamoDescribeTableReplicaAutoScaling(const UDynamoDescribeTableReplicaAutoScaling&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeTableReplicaAutoScaling); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeTableReplicaAutoScaling); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeTableReplicaAutoScaling)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_492_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_495_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeTableReplicaAutoScaling>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDescribeTimeToLive);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDescribeTimeToLive);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoDescribeTimeToLive(); \
	friend struct Z_Construct_UClass_UDynamoDescribeTimeToLive_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeTimeToLive, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeTimeToLive)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoDescribeTimeToLive(); \
	friend struct Z_Construct_UClass_UDynamoDescribeTimeToLive_Statics; \
public: \
	DECLARE_CLASS(UDynamoDescribeTimeToLive, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoDescribeTimeToLive)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeTimeToLive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeTimeToLive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeTimeToLive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeTimeToLive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeTimeToLive(UDynamoDescribeTimeToLive&&); \
	NO_API UDynamoDescribeTimeToLive(const UDynamoDescribeTimeToLive&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoDescribeTimeToLive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoDescribeTimeToLive(UDynamoDescribeTimeToLive&&); \
	NO_API UDynamoDescribeTimeToLive(const UDynamoDescribeTimeToLive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoDescribeTimeToLive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoDescribeTimeToLive); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoDescribeTimeToLive)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_517_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_520_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoDescribeTimeToLive>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoGetItem(); \
	friend struct Z_Construct_UClass_UDynamoGetItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoGetItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoGetItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoGetItem(); \
	friend struct Z_Construct_UClass_UDynamoGetItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoGetItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoGetItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoGetItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoGetItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoGetItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoGetItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoGetItem(UDynamoGetItem&&); \
	NO_API UDynamoGetItem(const UDynamoGetItem&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoGetItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoGetItem(UDynamoGetItem&&); \
	NO_API UDynamoGetItem(const UDynamoGetItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoGetItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoGetItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoGetItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_542_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_545_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoGetItem>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListBackups);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListBackups);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoListBackups(); \
	friend struct Z_Construct_UClass_UDynamoListBackups_Statics; \
public: \
	DECLARE_CLASS(UDynamoListBackups, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoListBackups(); \
	friend struct Z_Construct_UClass_UDynamoListBackups_Statics; \
public: \
	DECLARE_CLASS(UDynamoListBackups, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListBackups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListBackups) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListBackups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListBackups); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListBackups(UDynamoListBackups&&); \
	NO_API UDynamoListBackups(const UDynamoListBackups&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListBackups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListBackups(UDynamoListBackups&&); \
	NO_API UDynamoListBackups(const UDynamoListBackups&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListBackups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListBackups); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_569_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_572_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoListBackups>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListContributorInsights);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListContributorInsights);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoListContributorInsights(); \
	friend struct Z_Construct_UClass_UDynamoListContributorInsights_Statics; \
public: \
	DECLARE_CLASS(UDynamoListContributorInsights, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoListContributorInsights(); \
	friend struct Z_Construct_UClass_UDynamoListContributorInsights_Statics; \
public: \
	DECLARE_CLASS(UDynamoListContributorInsights, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListContributorInsights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListContributorInsights) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListContributorInsights); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListContributorInsights); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListContributorInsights(UDynamoListContributorInsights&&); \
	NO_API UDynamoListContributorInsights(const UDynamoListContributorInsights&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListContributorInsights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListContributorInsights(UDynamoListContributorInsights&&); \
	NO_API UDynamoListContributorInsights(const UDynamoListContributorInsights&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListContributorInsights); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListContributorInsights); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_597_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_600_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoListContributorInsights>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListGlobalTables);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListGlobalTables);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoListGlobalTables(); \
	friend struct Z_Construct_UClass_UDynamoListGlobalTables_Statics; \
public: \
	DECLARE_CLASS(UDynamoListGlobalTables, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListGlobalTables)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoListGlobalTables(); \
	friend struct Z_Construct_UClass_UDynamoListGlobalTables_Statics; \
public: \
	DECLARE_CLASS(UDynamoListGlobalTables, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListGlobalTables)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListGlobalTables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListGlobalTables) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListGlobalTables); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListGlobalTables); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListGlobalTables(UDynamoListGlobalTables&&); \
	NO_API UDynamoListGlobalTables(const UDynamoListGlobalTables&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListGlobalTables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListGlobalTables(UDynamoListGlobalTables&&); \
	NO_API UDynamoListGlobalTables(const UDynamoListGlobalTables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListGlobalTables); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListGlobalTables); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListGlobalTables)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_622_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_625_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoListGlobalTables>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListTables);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListTables);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoListTables(); \
	friend struct Z_Construct_UClass_UDynamoListTables_Statics; \
public: \
	DECLARE_CLASS(UDynamoListTables, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListTables)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoListTables(); \
	friend struct Z_Construct_UClass_UDynamoListTables_Statics; \
public: \
	DECLARE_CLASS(UDynamoListTables, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListTables)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListTables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListTables) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListTables); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListTables); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListTables(UDynamoListTables&&); \
	NO_API UDynamoListTables(const UDynamoListTables&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListTables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListTables(UDynamoListTables&&); \
	NO_API UDynamoListTables(const UDynamoListTables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListTables); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListTables); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListTables)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_647_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_650_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoListTables>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListTagsOfResource);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListTagsOfResource);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoListTagsOfResource(); \
	friend struct Z_Construct_UClass_UDynamoListTagsOfResource_Statics; \
public: \
	DECLARE_CLASS(UDynamoListTagsOfResource, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListTagsOfResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoListTagsOfResource(); \
	friend struct Z_Construct_UClass_UDynamoListTagsOfResource_Statics; \
public: \
	DECLARE_CLASS(UDynamoListTagsOfResource, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoListTagsOfResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListTagsOfResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListTagsOfResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListTagsOfResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListTagsOfResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListTagsOfResource(UDynamoListTagsOfResource&&); \
	NO_API UDynamoListTagsOfResource(const UDynamoListTagsOfResource&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoListTagsOfResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoListTagsOfResource(UDynamoListTagsOfResource&&); \
	NO_API UDynamoListTagsOfResource(const UDynamoListTagsOfResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoListTagsOfResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoListTagsOfResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoListTagsOfResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_672_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_675_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoListTagsOfResource>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPutItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPutItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoPutItem(); \
	friend struct Z_Construct_UClass_UDynamoPutItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoPutItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoPutItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoPutItem(); \
	friend struct Z_Construct_UClass_UDynamoPutItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoPutItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoPutItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoPutItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoPutItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoPutItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoPutItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoPutItem(UDynamoPutItem&&); \
	NO_API UDynamoPutItem(const UDynamoPutItem&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoPutItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoPutItem(UDynamoPutItem&&); \
	NO_API UDynamoPutItem(const UDynamoPutItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoPutItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoPutItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoPutItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_698_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_701_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoPutItem>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuery);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuery);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoQuery(); \
	friend struct Z_Construct_UClass_UDynamoQuery_Statics; \
public: \
	DECLARE_CLASS(UDynamoQuery, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoQuery)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoQuery(); \
	friend struct Z_Construct_UClass_UDynamoQuery_Statics; \
public: \
	DECLARE_CLASS(UDynamoQuery, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoQuery)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoQuery(UDynamoQuery&&); \
	NO_API UDynamoQuery(const UDynamoQuery&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoQuery(UDynamoQuery&&); \
	NO_API UDynamoQuery(const UDynamoQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoQuery)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_728_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_731_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoQuery>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreTableFromBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreTableFromBackup);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoRestoreTableFromBackup(); \
	friend struct Z_Construct_UClass_UDynamoRestoreTableFromBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoRestoreTableFromBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoRestoreTableFromBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoRestoreTableFromBackup(); \
	friend struct Z_Construct_UClass_UDynamoRestoreTableFromBackup_Statics; \
public: \
	DECLARE_CLASS(UDynamoRestoreTableFromBackup, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoRestoreTableFromBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoRestoreTableFromBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoRestoreTableFromBackup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoRestoreTableFromBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoRestoreTableFromBackup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoRestoreTableFromBackup(UDynamoRestoreTableFromBackup&&); \
	NO_API UDynamoRestoreTableFromBackup(const UDynamoRestoreTableFromBackup&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoRestoreTableFromBackup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoRestoreTableFromBackup(UDynamoRestoreTableFromBackup&&); \
	NO_API UDynamoRestoreTableFromBackup(const UDynamoRestoreTableFromBackup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoRestoreTableFromBackup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoRestoreTableFromBackup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoRestoreTableFromBackup)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_761_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_764_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoRestoreTableFromBackup>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreTableToPointInTime);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreTableToPointInTime);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoRestoreTableToPointInTime(); \
	friend struct Z_Construct_UClass_UDynamoRestoreTableToPointInTime_Statics; \
public: \
	DECLARE_CLASS(UDynamoRestoreTableToPointInTime, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoRestoreTableToPointInTime)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoRestoreTableToPointInTime(); \
	friend struct Z_Construct_UClass_UDynamoRestoreTableToPointInTime_Statics; \
public: \
	DECLARE_CLASS(UDynamoRestoreTableToPointInTime, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoRestoreTableToPointInTime)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoRestoreTableToPointInTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoRestoreTableToPointInTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoRestoreTableToPointInTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoRestoreTableToPointInTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoRestoreTableToPointInTime(UDynamoRestoreTableToPointInTime&&); \
	NO_API UDynamoRestoreTableToPointInTime(const UDynamoRestoreTableToPointInTime&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoRestoreTableToPointInTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoRestoreTableToPointInTime(UDynamoRestoreTableToPointInTime&&); \
	NO_API UDynamoRestoreTableToPointInTime(const UDynamoRestoreTableToPointInTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoRestoreTableToPointInTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoRestoreTableToPointInTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoRestoreTableToPointInTime)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_795_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_798_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoRestoreTableToPointInTime>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScan);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScan);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoScan(); \
	friend struct Z_Construct_UClass_UDynamoScan_Statics; \
public: \
	DECLARE_CLASS(UDynamoScan, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoScan)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoScan(); \
	friend struct Z_Construct_UClass_UDynamoScan_Statics; \
public: \
	DECLARE_CLASS(UDynamoScan, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoScan)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoScan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoScan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoScan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoScan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoScan(UDynamoScan&&); \
	NO_API UDynamoScan(const UDynamoScan&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoScan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoScan(UDynamoScan&&); \
	NO_API UDynamoScan(const UDynamoScan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoScan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoScan); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoScan)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_836_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_839_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoScan>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTagResource);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTagResource);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoTagResource(); \
	friend struct Z_Construct_UClass_UDynamoTagResource_Statics; \
public: \
	DECLARE_CLASS(UDynamoTagResource, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoTagResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoTagResource(); \
	friend struct Z_Construct_UClass_UDynamoTagResource_Statics; \
public: \
	DECLARE_CLASS(UDynamoTagResource, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoTagResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoTagResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoTagResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoTagResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoTagResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoTagResource(UDynamoTagResource&&); \
	NO_API UDynamoTagResource(const UDynamoTagResource&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoTagResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoTagResource(UDynamoTagResource&&); \
	NO_API UDynamoTagResource(const UDynamoTagResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoTagResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoTagResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoTagResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_866_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_869_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoTagResource>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransactGetItems);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransactGetItems);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoTransactGetItems(); \
	friend struct Z_Construct_UClass_UDynamoTransactGetItems_Statics; \
public: \
	DECLARE_CLASS(UDynamoTransactGetItems, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoTransactGetItems)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoTransactGetItems(); \
	friend struct Z_Construct_UClass_UDynamoTransactGetItems_Statics; \
public: \
	DECLARE_CLASS(UDynamoTransactGetItems, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoTransactGetItems)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoTransactGetItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoTransactGetItems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoTransactGetItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoTransactGetItems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoTransactGetItems(UDynamoTransactGetItems&&); \
	NO_API UDynamoTransactGetItems(const UDynamoTransactGetItems&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoTransactGetItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoTransactGetItems(UDynamoTransactGetItems&&); \
	NO_API UDynamoTransactGetItems(const UDynamoTransactGetItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoTransactGetItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoTransactGetItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoTransactGetItems)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_893_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_896_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoTransactGetItems>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransactWriteItems);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransactWriteItems);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoTransactWriteItems(); \
	friend struct Z_Construct_UClass_UDynamoTransactWriteItems_Statics; \
public: \
	DECLARE_CLASS(UDynamoTransactWriteItems, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoTransactWriteItems)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoTransactWriteItems(); \
	friend struct Z_Construct_UClass_UDynamoTransactWriteItems_Statics; \
public: \
	DECLARE_CLASS(UDynamoTransactWriteItems, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoTransactWriteItems)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoTransactWriteItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoTransactWriteItems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoTransactWriteItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoTransactWriteItems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoTransactWriteItems(UDynamoTransactWriteItems&&); \
	NO_API UDynamoTransactWriteItems(const UDynamoTransactWriteItems&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoTransactWriteItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoTransactWriteItems(UDynamoTransactWriteItems&&); \
	NO_API UDynamoTransactWriteItems(const UDynamoTransactWriteItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoTransactWriteItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoTransactWriteItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoTransactWriteItems)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_924_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_927_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoTransactWriteItems>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUntagResource);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUntagResource);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUntagResource(); \
	friend struct Z_Construct_UClass_UDynamoUntagResource_Statics; \
public: \
	DECLARE_CLASS(UDynamoUntagResource, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUntagResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUntagResource(); \
	friend struct Z_Construct_UClass_UDynamoUntagResource_Statics; \
public: \
	DECLARE_CLASS(UDynamoUntagResource, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUntagResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUntagResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUntagResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUntagResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUntagResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUntagResource(UDynamoUntagResource&&); \
	NO_API UDynamoUntagResource(const UDynamoUntagResource&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUntagResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUntagResource(UDynamoUntagResource&&); \
	NO_API UDynamoUntagResource(const UDynamoUntagResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUntagResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUntagResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUntagResource)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_963_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_966_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUntagResource>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateContinuousBackups);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateContinuousBackups);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateContinuousBackups(); \
	friend struct Z_Construct_UClass_UDynamoUpdateContinuousBackups_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateContinuousBackups, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateContinuousBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateContinuousBackups(); \
	friend struct Z_Construct_UClass_UDynamoUpdateContinuousBackups_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateContinuousBackups, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateContinuousBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateContinuousBackups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateContinuousBackups) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateContinuousBackups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateContinuousBackups); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateContinuousBackups(UDynamoUpdateContinuousBackups&&); \
	NO_API UDynamoUpdateContinuousBackups(const UDynamoUpdateContinuousBackups&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateContinuousBackups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateContinuousBackups(UDynamoUpdateContinuousBackups&&); \
	NO_API UDynamoUpdateContinuousBackups(const UDynamoUpdateContinuousBackups&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateContinuousBackups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateContinuousBackups); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateContinuousBackups)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_990_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_993_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateContinuousBackups>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateContributorInsights);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateContributorInsights);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateContributorInsights(); \
	friend struct Z_Construct_UClass_UDynamoUpdateContributorInsights_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateContributorInsights, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateContributorInsights(); \
	friend struct Z_Construct_UClass_UDynamoUpdateContributorInsights_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateContributorInsights, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateContributorInsights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateContributorInsights) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateContributorInsights); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateContributorInsights); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateContributorInsights(UDynamoUpdateContributorInsights&&); \
	NO_API UDynamoUpdateContributorInsights(const UDynamoUpdateContributorInsights&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateContributorInsights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateContributorInsights(UDynamoUpdateContributorInsights&&); \
	NO_API UDynamoUpdateContributorInsights(const UDynamoUpdateContributorInsights&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateContributorInsights); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateContributorInsights); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateContributorInsights)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1018_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1021_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateContributorInsights>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateGlobalTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGlobalTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateGlobalTable(); \
	friend struct Z_Construct_UClass_UDynamoUpdateGlobalTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateGlobalTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateGlobalTable(); \
	friend struct Z_Construct_UClass_UDynamoUpdateGlobalTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateGlobalTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateGlobalTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateGlobalTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateGlobalTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateGlobalTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateGlobalTable(UDynamoUpdateGlobalTable&&); \
	NO_API UDynamoUpdateGlobalTable(const UDynamoUpdateGlobalTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateGlobalTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateGlobalTable(UDynamoUpdateGlobalTable&&); \
	NO_API UDynamoUpdateGlobalTable(const UDynamoUpdateGlobalTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateGlobalTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateGlobalTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateGlobalTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1043_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1046_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateGlobalTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateGlobalTableSettings);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGlobalTableSettings);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateGlobalTableSettings(); \
	friend struct Z_Construct_UClass_UDynamoUpdateGlobalTableSettings_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateGlobalTableSettings, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateGlobalTableSettings)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateGlobalTableSettings(); \
	friend struct Z_Construct_UClass_UDynamoUpdateGlobalTableSettings_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateGlobalTableSettings, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateGlobalTableSettings)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateGlobalTableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateGlobalTableSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateGlobalTableSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateGlobalTableSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateGlobalTableSettings(UDynamoUpdateGlobalTableSettings&&); \
	NO_API UDynamoUpdateGlobalTableSettings(const UDynamoUpdateGlobalTableSettings&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateGlobalTableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateGlobalTableSettings(UDynamoUpdateGlobalTableSettings&&); \
	NO_API UDynamoUpdateGlobalTableSettings(const UDynamoUpdateGlobalTableSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateGlobalTableSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateGlobalTableSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateGlobalTableSettings)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1069_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1072_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateGlobalTableSettings>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateItem);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateItem(); \
	friend struct Z_Construct_UClass_UDynamoUpdateItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateItem(); \
	friend struct Z_Construct_UClass_UDynamoUpdateItem_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateItem, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateItem(UDynamoUpdateItem&&); \
	NO_API UDynamoUpdateItem(const UDynamoUpdateItem&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateItem(UDynamoUpdateItem&&); \
	NO_API UDynamoUpdateItem(const UDynamoUpdateItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateItem)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1094_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1097_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateItem>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTable);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateTable(); \
	friend struct Z_Construct_UClass_UDynamoUpdateTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateTable(); \
	friend struct Z_Construct_UClass_UDynamoUpdateTable_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateTable, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateTable(UDynamoUpdateTable&&); \
	NO_API UDynamoUpdateTable(const UDynamoUpdateTable&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateTable(UDynamoUpdateTable&&); \
	NO_API UDynamoUpdateTable(const UDynamoUpdateTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateTable)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1121_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateTable>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTableReplicaAutoScaling);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTableReplicaAutoScaling);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateTableReplicaAutoScaling(); \
	friend struct Z_Construct_UClass_UDynamoUpdateTableReplicaAutoScaling_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateTableReplicaAutoScaling, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateTableReplicaAutoScaling)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateTableReplicaAutoScaling(); \
	friend struct Z_Construct_UClass_UDynamoUpdateTableReplicaAutoScaling_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateTableReplicaAutoScaling, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateTableReplicaAutoScaling)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateTableReplicaAutoScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateTableReplicaAutoScaling) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateTableReplicaAutoScaling); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateTableReplicaAutoScaling); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateTableReplicaAutoScaling(UDynamoUpdateTableReplicaAutoScaling&&); \
	NO_API UDynamoUpdateTableReplicaAutoScaling(const UDynamoUpdateTableReplicaAutoScaling&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateTableReplicaAutoScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateTableReplicaAutoScaling(UDynamoUpdateTableReplicaAutoScaling&&); \
	NO_API UDynamoUpdateTableReplicaAutoScaling(const UDynamoUpdateTableReplicaAutoScaling&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateTableReplicaAutoScaling); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateTableReplicaAutoScaling); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateTableReplicaAutoScaling)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1153_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateTableReplicaAutoScaling>();

#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_SPARSE_DATA
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTimeToLive);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTimeToLive);


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamoUpdateTimeToLive(); \
	friend struct Z_Construct_UClass_UDynamoUpdateTimeToLive_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateTimeToLive, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateTimeToLive)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_INCLASS \
private: \
	static void StaticRegisterNativesUDynamoUpdateTimeToLive(); \
	friend struct Z_Construct_UClass_UDynamoUpdateTimeToLive_Statics; \
public: \
	DECLARE_CLASS(UDynamoUpdateTimeToLive, UDynamoDBAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AwsDynamoDB"), NO_API) \
	DECLARE_SERIALIZER(UDynamoUpdateTimeToLive)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateTimeToLive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateTimeToLive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateTimeToLive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateTimeToLive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateTimeToLive(UDynamoUpdateTimeToLive&&); \
	NO_API UDynamoUpdateTimeToLive(const UDynamoUpdateTimeToLive&); \
public:


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamoUpdateTimeToLive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamoUpdateTimeToLive(UDynamoUpdateTimeToLive&&); \
	NO_API UDynamoUpdateTimeToLive(const UDynamoUpdateTimeToLive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamoUpdateTimeToLive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamoUpdateTimeToLive); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamoUpdateTimeToLive)


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_PRIVATE_PROPERTY_OFFSET
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1178_PROLOG
#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_RPC_WRAPPERS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_INCLASS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_PRIVATE_PROPERTY_OFFSET \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_SPARSE_DATA \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_RPC_WRAPPERS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_INCLASS_NO_PURE_DECLS \
	NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h_1181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AWSDYNAMODB_API UClass* StaticClass<class UDynamoUpdateTimeToLive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoroffExam2021_Plugins_AwsDynamoDB_Source_AwsDynamoDB_Public_AwsDynamoDBAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
