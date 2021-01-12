/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "AwsDynamoDBTypes.h"
#include "AwsDynamoDBLogging.h"
#include "AwsDynamoDBLibrary.generated.h"

static TArray<UDynamoDBClientObject*> s_DynamoDBObjects;

UCLASS(BlueprintType)
class AWSDYNAMODB_API UDynamoDBClientObject : public UObject
{
	GENERATED_BODY()
protected:
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::DynamoDBClient* AwsCoreDynamoDBClient;
#endif
	FAwsDynamoDBCredentials Credentials;
	FAwsDynamoDBClientConfiguration ClientConfiguration;
public:
	void Activate();
#if !DISABLE_DYNAMODB
	Aws::DynamoDB::DynamoDBClient* GetDynamoDBClient(){ return AwsCoreDynamoDBClient; }
	Aws::DynamoDB::DynamoDBClient* GetDynamoDBClient() const{	return AwsCoreDynamoDBClient; }
#endif
public:
	/**
	*
	**/
	UFUNCTION(BlueprintCallable, Category = "AwsCoreDynamoDB Client Object")
		static UDynamoDBClientObject* CreateDynamoDbObject(FAwsDynamoDBCredentials credentials, FAwsDynamoDBClientConfiguration clientConfiguration);
};

UCLASS()
class AWSDYNAMODB_API UAwsCoreDynamoDBPlatformObject : public UObject
{
	GENERATED_BODY()
public:
	/*
	* Utility function to get the last created game lift object
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AWSCore|DynamoDB")
		static UDynamoDBClientObject* GetDynamoDBObject();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AWSCore|DynamoDB")
		static TArray<UDynamoDBClientObject*> GetDynamoDBObjects();
};

UCLASS()
class AWSDYNAMODB_API UDynamoDBAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override { Super::Activate(); }
	virtual void SetReadyToDestroy() override { Super::SetReadyToDestroy(); }
};