/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#if !DISABLE_DYNAMODB
THIRD_PARTY_INCLUDES_START
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/BatchGetItemRequest.h>
#include <aws/dynamodb/model/LocalSecondaryIndex.h>
#include <aws/dynamodb/model/GlobalSecondaryIndex.h>
#include <aws/dynamodb/model/SSESpecification.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>
#include <aws/dynamodb/model/Condition.h>
#include <aws/dynamodb/model/Get.h>
#include <aws/dynamodb/model/TransactGetItem.h>
#include <aws/dynamodb/model/Put.h>
#include <aws/dynamodb/model/ConditionCheck.h>
#include <aws/dynamodb/model/Update.h>
#include <aws/dynamodb/model/Delete.h>
#include <aws/dynamodb/model/TransactWriteItem.h>
#include <aws/dynamodb/model/PointInTimeRecoverySpecification.h>
#include <aws/dynamodb/model/CreateReplicaAction.h>
#include <aws/dynamodb/model/DeleteReplicaAction.h>
#include <aws/dynamodb/model/ReplicaUpdate.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/dynamodb/model/GlobalTableGlobalSecondaryIndexSettingsUpdate.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexSettingsUpdate.h>
#include <aws/dynamodb/model/ReplicaSettingsUpdate.h>
#include <aws/dynamodb/model/AttributeValueUpdate.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexUpdate.h>
#include <aws/dynamodb/model/UpdateGlobalSecondaryIndexAction.h>
#include <aws/dynamodb/model/DeleteGlobalSecondaryIndexAction.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexAutoScalingUpdate.h>
#include <aws/dynamodb/model/ReplicaAutoScalingUpdate.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingUpdate.h>
#include <aws/dynamodb/model/TimeToLiveSpecification.h>
THIRD_PARTY_INCLUDES_END
#endif
#include "AwsDynamoDBTypes.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAwsDynamoDB, Log, All);

UCLASS()
class AWSDYNAMODB_API UAwsDynamoDBAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override { Super::Activate(); }
	virtual void SetReadyToDestroy() override { Super::SetReadyToDestroy(); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		ENUMS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class EDynamoDBErrors : uint8
{
	//From Core//
	//////////////////////////////////////////////////////////////////////////////////////////
	INCOMPLETE_SIGNATURE = 0,
	INTERNAL_FAILURE = 1,
	INVALID_ACTION = 2,
	INVALID_CLIENT_TOKEN_ID = 3,
	INVALID_PARAMETER_COMBINATION = 4,
	INVALID_QUERY_PARAMETER = 5,
	INVALID_PARAMETER_VALUE = 6,
	MISSING_ACTION = 7, // SDK should never allow
	MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
	MISSING_PARAMETER = 9, // SDK should never allow
	OPT_IN_REQUIRED = 10,
	REQUEST_EXPIRED = 11,
	SERVICE_UNAVAILABLE = 12,
	THROTTLING = 13,
	VALIDATION = 14,
	ACCESS_DENIED = 15,
	RESOURCE_NOT_FOUND = 16,
	UNRECOGNIZED_CLIENT = 17,
	MALFORMED_QUERY_STRING = 18,
	SLOW_DOWN = 19,
	REQUEST_TIME_TOO_SKEWED = 20,
	INVALID_SIGNATURE = 21,
	SIGNATURE_DOES_NOT_MATCH = 22,
	INVALID_ACCESS_KEY_ID = 23,
	REQUEST_TIMEOUT = 24,
	NETWORK_CONNECTION = 99,

	UNKNOWN = 100,
	///////////////////////////////////////////////////////////////////////////////////////////

#if !DISABLE_DYNAMODB
	BACKUP_IN_USE = static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
#endif
	BACKUP_NOT_FOUND,
	CONDITIONAL_CHECK_FAILED,
	CONTINUOUS_BACKUPS_UNAVAILABLE,
	GLOBAL_TABLE_ALREADY_EXISTS,
	GLOBAL_TABLE_NOT_FOUND,
	IDEMPOTENT_PARAMETER_MISMATCH,
	INDEX_NOT_FOUND,
	INVALID_RESTORE_TIME,
	ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED,
	LIMIT_EXCEEDED,
	POINT_IN_TIME_RECOVERY_UNAVAILABLE,
	PROVISIONED_THROUGHPUT_EXCEEDED,
	REPLICA_ALREADY_EXISTS,
	REPLICA_NOT_FOUND,
	REQUEST_LIMIT_EXCEEDED,
	RESOURCE_IN_USE,
	TABLE_ALREADY_EXISTS,
	TABLE_IN_USE,
	TABLE_NOT_FOUND,
	TRANSACTION_CANCELED,
	TRANSACTION_CONFLICT,
	TRANSACTION_IN_PROGRESS
};

UENUM(BlueprintType)
enum class EValueType : uint8
{
	STRING, NUMBER, BOOL
};

UENUM(BlueprintType)
enum class EDynamoDBScheme : uint8
{
	HTTP,
	HTTPS
};

UENUM(BlueprintType)
enum class EDynamoDBFollowRedirectsPolicy : uint8
{
	DEFAULT,
	ALWAYS,
	NEVER
};

UENUM(BlueprintType)
enum class EScalarAttributeType : uint8
{
	NOT_SET,
	S,
	N,
	B
};

UENUM(BlueprintType)
enum class EKeyType : uint8
{
	NOT_SET,
	HASH,
	RANGE
};

UENUM(BlueprintType)
enum class EProjectionType : uint8
{
	NOT_SET,
	ALL,
	KEYS_ONLY,
	INCLUDE
};

UENUM(BlueprintType)
enum class EBillingMode : uint8
{
	NOT_SET,
	PROVISIONED,
	PAY_PER_REQUEST
};

UENUM(BlueprintType)
enum class EStreamViewType : uint8
{
	NOT_SET,
	NEW_IMAGE,
	OLD_IMAGE,
	NEW_AND_OLD_IMAGES,
	KEYS_ONLY
};

UENUM(BlueprintType)
enum class ESSEType : uint8
{
	NOT_SET,
	AES256,
	KMS
};

UENUM(BlueprintType)
enum class EComparisonOperator : uint8
{
	NOT_SET,
	EQ,
	NE,
	INN,
	LE,
	LT,
	GE,
	GT,
	BETWEEN,
	NOT_NULL,
	NULL_,
	CONTAINS,
	NOT_CONTAINS,
	BEGINS_WITH
};

UENUM(BlueprintType)
enum class EConditionalOperator : uint8
{
	NOT_SET,
	AND,
	OR
};

UENUM(BlueprintType)
enum class EReturnValue : uint8
{
	NOT_SET,
	NONE,
	ALL_OLD,
	UPDATED_OLD,
	ALL_NEW,
	UPDATED_NEW
};

UENUM(BlueprintType)
enum class EReturnConsumedCapacity : uint8
{
	NOT_SET,
	INDEXES,
	TOTAL,
	NONE
};

UENUM(BlueprintType)
enum class EReturnItemCollectionMetrics : uint8
{
	NOT_SET,
	SIZE,
	NONE
};

UENUM(BlueprintType)
enum class EBackupTypeFilter : uint8
{
	NOT_SET,
	USER,
	SYSTEM,
	AWS_BACKUP,
	ALL
};

UENUM(BlueprintType)
enum class ESelect : uint8
{
	NOT_SET,
	ALL_ATTRIBUTES,
	ALL_PROJECTED_ATTRIBUTES,
	SPECIFIC_ATTRIBUTES,
	COUNT
};

UENUM(BlueprintType)
enum class EReturnValuesOnConditionCheckFailure : uint8
{
	NOT_SET,
	ALL_OLD,
	NONE
};

UENUM(BlueprintType)
enum class EContributorInsightsAction : uint8
{
	NOT_SET,
	ENABLE,
	DISABLE
};

UENUM(BlueprintType)
enum class EAttributeAction : uint8
{
	NOT_SET,
	ADD,
	PUT,
	DELETE_
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		CREDENTIALS AND CONFIG
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FAwsDynamoDBCredentials
{
	GENERATED_BODY()
public:
	FAwsDynamoDBCredentials() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::Auth::AWSCredentials() const
	{
		Aws::Auth::AWSCredentials m_Data;
		if (AccessKeyId.Len() > 0)
			m_Data.SetAWSAccessKeyId(TCHAR_TO_UTF8(*AccessKeyId));
		if (SecretKey.Len() > 0)
			m_Data.SetAWSSecretKey(TCHAR_TO_UTF8(*SecretKey));
		if (SessionToken.Len() > 0)
			m_Data.SetSessionToken(TCHAR_TO_UTF8(*SessionToken));
		if (Expiration.GetTicks() > 0)
			m_Data.SetExpiration(Aws::Utils::DateTime(TCHAR_TO_UTF8(*Expiration.ToIso8601()), Aws::Utils::DateFormat::ISO_8601));
		return m_Data;
	}
	bool operator==(const FAwsDynamoDBCredentials& other)
	{
		return other.AccessKeyId == AccessKeyId && other.SecretKey == SecretKey;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString AccessKeyId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString SecretKey;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString SessionToken;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FDateTime Expiration;
};

USTRUCT(BlueprintType)
struct FAwsDynamoDBClientConfiguration
{
	GENERATED_BODY()
public:
	FAwsDynamoDBClientConfiguration()
		: Sceheme(EDynamoDBScheme::HTTPS)
		, Region("eu-west-2")
		, bUseDualStack(false)
		, MaxConnections(25)
		, HTTP_RequestTimeoutMs(0)
		, RequestTimeoutMs(3000)
		, ConnectTimeoutMs(1000)
		, bEnableTcpKeepAlive(true)
		, TcpKeepAliveIntervalMs(30)
		, LowSpeedLimit(1)
		, ProxyScheme(EDynamoDBScheme::HTTP)
		, ProxyPort(0)
		, bVerifySSL(false)
		, FollowRedirects(EDynamoDBFollowRedirectsPolicy::DEFAULT)
		, bDisableExpectHeader(false)
		, bEnableClockSkewAdjustment(true)
		, bEnableHostPrefixInjection(true)
		, bEnableEndpointDiscovery(false)
	{
	}
public:
#if !DISABLE_DYNAMODB
	operator Aws::Client::ClientConfiguration() const
	{
		Aws::Client::ClientConfiguration m_Data;
		if (UserAgent.Len() > 0)
			m_Data.userAgent = TCHAR_TO_UTF8(*UserAgent);
		m_Data.scheme = static_cast<Aws::Http::Scheme>(Sceheme);
		if (Region.Len() > 0)
			m_Data.region = TCHAR_TO_UTF8(*Region);
		m_Data.useDualStack = bUseDualStack;
		m_Data.maxConnections = MaxConnections;
		m_Data.httpRequestTimeoutMs = HTTP_RequestTimeoutMs;
		m_Data.requestTimeoutMs = RequestTimeoutMs;
		m_Data.connectTimeoutMs = ConnectTimeoutMs;
		m_Data.enableTcpKeepAlive = bEnableTcpKeepAlive;
		m_Data.tcpKeepAliveIntervalMs = TcpKeepAliveIntervalMs;
		m_Data.lowSpeedLimit = LowSpeedLimit;
		if (EndPointOverride.Len() > 0)
			m_Data.endpointOverride = TCHAR_TO_UTF8(*EndPointOverride);
		m_Data.proxyScheme = static_cast<Aws::Http::Scheme>(ProxyScheme);
		if (ProxyHost.Len() > 0)
			m_Data.proxyHost = TCHAR_TO_UTF8(*ProxyHost);
		m_Data.proxyPort = ProxyPort;
		if (ProxyUsername.Len() > 0)
			m_Data.proxyUserName = TCHAR_TO_UTF8(*ProxyUsername);
		if (ProxyPassword.Len() > 0)
			m_Data.proxyPassword = TCHAR_TO_UTF8(*ProxyPassword);
		if (ProxySSL_CertPath.Len() > 0)
			m_Data.proxySSLCertPath = TCHAR_TO_UTF8(*ProxySSL_CertPath);
		if (ProxySSL_CertType.Len() > 0)
			m_Data.proxySSLCertType = TCHAR_TO_UTF8(*ProxySSL_CertType);
		if (ProxySSL_KeyPath.Len() > 0)
			m_Data.proxySSLKeyPath = TCHAR_TO_UTF8(*ProxySSL_KeyPath);
		if (ProxySSL_KeyType.Len() > 0)
			m_Data.proxySSLKeyType = TCHAR_TO_UTF8(*ProxySSL_KeyType);
		if (ProxySSL_KeyPassword.Len() > 0)
			m_Data.proxySSLKeyPassword = TCHAR_TO_UTF8(*ProxySSL_KeyPassword);
		m_Data.verifySSL = bVerifySSL;
		if (CaPath.Len() > 0)
			m_Data.caPath = TCHAR_TO_UTF8(*CaPath);
		if (CaFile.Len() > 0)
			m_Data.caFile = TCHAR_TO_UTF8(*CaFile);

		m_Data.followRedirects = static_cast<Aws::Client::FollowRedirectsPolicy>(FollowRedirects);
		m_Data.disableExpectHeader = bDisableExpectHeader;
		m_Data.enableClockSkewAdjustment = bEnableClockSkewAdjustment;
		m_Data.enableHostPrefixInjection = bEnableHostPrefixInjection;
		m_Data.enableEndpointDiscovery = bEnableEndpointDiscovery;

		if (ProfileName.Len() > 0)
			m_Data.profileName = TCHAR_TO_UTF8(*ProfileName);

		return m_Data;
	}
	bool operator==(const FAwsDynamoDBClientConfiguration& other)
	{
		return other.Region == Region;
	}
#endif
public:
	// User Agent string user for http calls. This is filled in for you in the constructor. Don't override this unless you have a really good reason.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString UserAgent;
	// Http scheme to use. E.g. Http or Https. Default HTTPS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		EDynamoDBScheme Sceheme;
	// AWS Region to use in signing requests. Default eu-west-2
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString Region;
	// Use dual stack endpoint32 in the endpoint32 calculation. It is your responsibility to verify that the service supports ipv6 in the region you select.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bUseDualStack;
	// Max concurrent tcp connections for a single http client to use. Default 25.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 MaxConnections;
	/**
	 * This is currently only applicable for Curl to set the http request level timeout, including possible dns lookup time, connection establish time, ssl handshake time and actual data transmission time.
	 * the corresponding Curl option is CURLOPT_TIMEOUT_MS
	 * defaults to 0, no http request level timeout.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 HTTP_RequestTimeoutMs;
	/**
	 * Socket read timeouts for HTTP clients on Windows. Default 3000 ms. This should be more than adequate for most services. However, if you are transfering large amounts of data
	 * or are worried about higher latencies, you should set to something that makes more sense for your use case.
	 * For Curl, it's the low speed time, which contains the time in number milliseconds that transfer speed should be below "lowSpeedLimit" for the library to consider it too slow and abort.
	 * Note that for Curl this config is converted to seconds by rounding down to the nearest whole second except when the value is greater than 0 and less than 1000. In this case it is set to one second. When it's 0, low speed limit check will be disabled.
	 * Note that for Windows when this config is 0, the behavior is not specified by Windows.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 RequestTimeoutMs;
	/**
	 * Socket connect timeout. Default 1000 ms. Unless you are very far away from your the data center you are talking to. 1000ms is more than sufficient.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 ConnectTimeoutMs;
	/**
	 * Enable TCP keep-alive. Default true;
	 * No-op for WinHTTP, WinINet and IXMLHTTPRequest2 client.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bEnableTcpKeepAlive;
	/**
	 * Interval to send a keep-alive packet over the connection. Default 30 seconds. Minimum 15 seconds.
	 * WinHTTP & libcurl support this option. Note that for Curl, this value will be rounded to an integer with second granularity.
	 * No-op for WinINet and IXMLHTTPRequest2 client.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 TcpKeepAliveIntervalMs;
	/**
	 * Average transfer speed in bytes per second that the transfer should be below during the request timeout interval for it to be considered too slow and abort.
	 * Default 1 byte/second. Only for CURL client currently.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 LowSpeedLimit;
	/**
	 * Override the http endpoint32 used to talk to a service.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString EndPointOverride;
	/**
	 * If you have users going through a proxy, set the proxy scheme here. Default HTTP
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		EDynamoDBScheme ProxyScheme;
	/**
	 * If you have users going through a proxy, set the host here.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxyHost;
	/**
	 * If you have users going through a proxy, set the port here.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		int32 ProxyPort;
	/**
	 * If you have users going through a proxy, set the username here.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxyUsername;
	/**
	* If you have users going through a proxy, set the password here.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxyPassword;
	/**
	* SSL Certificate file to use for connecting to an HTTPS proxy.
	* Used to set CURLOPT_PROXY_SSLCERT in libcurl. Example: client.pem
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxySSL_CertPath;
	/**
	* Type of proxy client SSL certificate.
	* Used to set CURLOPT_PROXY_SSLCERTTYPE in libcurl. Example: PEM
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxySSL_CertType;
	/**
	* Private key file to use for connecting to an HTTPS proxy.
	* Used to set CURLOPT_PROXY_SSLKEY in libcurl. Example: key.pem
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxySSL_KeyPath;
	/**
	* Type of private key file used to connect to an HTTPS proxy.
	* Used to set CURLOPT_PROXY_SSLKEYTYPE in libcurl. Example: PEM
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxySSL_KeyType;
	/**
	* Passphrase to the private key file used to connect to an HTTPS proxy.
	* Used to set CURLOPT_PROXY_KEYPASSWD in libcurl. Example: password1
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProxySSL_KeyPassword;
	/**
	 * If you need to test and want to get around TLS validation errors, do that here.
	 * you probably shouldn't use this flag in a production scenario.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bVerifySSL;
	/**
	 * If your Certificate Authority path is different from the default, you can tell
	 * clients that aren't using the default trust store where to find your CA trust store.
	 * If you are on windows or apple, you likely don't want this.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString CaPath;
	/**
	 * If you certificate file is different from the default, you can tell clients that
	 * aren't using the default trust store where to find your ca file.
	 * If you are on windows or apple, you likely don't want this.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString CaFile;
	/**
	 * Sets the behavior how http stack handles 30x redirect codes.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		EDynamoDBFollowRedirectsPolicy FollowRedirects;
	/**
	 * Only works for Curl http client.
	 * Curl will by default add "Expect: 100-Continue" header in a Http request so as to avoid sending http
	 * payload to wire if server respond error immediately after receiving the header.
	 * Set this option to true will tell Curl to send http request header and body together.
	 * This can save one round-trip time and especially useful when the payload is small and network latency is more important.
	 * But be careful when Http request has large payload such S3 PutObject. You don't want to spend long time sending a large payload just getting a error response for server.
	 * The default value will be false.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bDisableExpectHeader;
	/**
	 * If set to true clock skew will be adjusted after each http attempt, default to true.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bEnableClockSkewAdjustment;

	/**
	 * Enable host prefix injection.
	 * For services whose endpoint32 is injectable. e.g. servicediscovery, you can modify the http host's prefix so as to add "data-" prefix for DiscoverInstances request.
	 * Default to true, enabled. You can disable it for testing purpose.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bEnableHostPrefixInjection;

	/**
	 * Enable endpoint32 discovery
	 * For some services to dynamically set up their endpoints for different requests.
	 * Defaults to false, it's an opt-in feature.
	 * If disabled, regional or overriden endpoint32 will be used instead.
	 * If a request requires endpoint32 discovery but you disabled it. The request will never succeed.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		bool bEnableEndpointDiscovery;

	/**
	 * profileName in config file that will be used by this object to reslove more configurations.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|Lambda")
		FString ProfileName;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		STRUCTS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FAttributeValue
{
	GENERATED_BODY()
public:
	FAttributeValue() = default;
#if !DISABLE_DYNAMODB
	FAttributeValue(const Aws::DynamoDB::Model::AttributeValue& data)
	{
		switch (data.GetType())
		{
			case Aws::DynamoDB::Model::ValueType::BOOL:
				Value = FString::Printf(TEXT("%d"), data.GetBool());
				Type = EValueType::BOOL;
			break;
			case Aws::DynamoDB::Model::ValueType::NUMBER:
				Value = LexToString(FCString::Atoi(UTF8_TO_TCHAR(data.GetN().c_str())));
				Type = EValueType::NUMBER;
			break;
			case Aws::DynamoDB::Model::ValueType::STRING:
				Value = UTF8_TO_TCHAR(data.GetS().c_str());
				Type = EValueType::STRING;
			break;
		}
	}
public:
	operator Aws::DynamoDB::Model::AttributeValue() const
	{
		Aws::DynamoDB::Model::AttributeValue m_Data;
		switch (Type)
		{
		case EValueType::STRING:
			m_Data.SetS(TCHAR_TO_UTF8(*Value));
			break;
		case EValueType::NUMBER:
			m_Data.SetN(FCString::Atod(*Value));
			break;
		case EValueType::BOOL:
			m_Data.SetBool(FCString::Atoi(*Value) > 0);
			break;
		}
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Value;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EValueType Type;
};

USTRUCT(BlueprintType)
struct FKeysMap
{
	GENERATED_BODY()
public:
	FKeysMap() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Map;
};

USTRUCT(BlueprintType)
struct FKeysAndAttributes
{
	GENERATED_BODY()
public:
	FKeysAndAttributes() = default;
#if !DISABLE_DYNAMODB
	FKeysAndAttributes(const Aws::DynamoDB::Model::KeysAndAttributes& data) 
		: bConsistentRead(data.GetConsistentRead())
		, ProjectionExpression(UTF8_TO_TCHAR(data.GetProjectionExpression().c_str()))
	{
		for (auto& m_Element : data.GetAttributesToGet())
			AttributesToGet.Add(UTF8_TO_TCHAR(m_Element.c_str()));

		for (auto& m_Element : data.GetExpressionAttributeNames())
			ExpressionAttributeNames.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), UTF8_TO_TCHAR(m_Element.second.c_str()));

		for (auto& m_Element : data.GetKeys())
		{
			FKeysMap KeysMap;

			for (auto& m_MapElement : m_Element)
			{
				KeysMap.Map.Add(UTF8_TO_TCHAR(m_MapElement.first.c_str()), m_MapElement.second);
			}

			Keys.Add(KeysMap);
		}
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> AttributesToGet;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bConsistentRead;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProjectionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeysMap> Keys;
};

USTRUCT(BlueprintType)
struct FBatchGetItemRequest
{
	GENERATED_BODY()
public:
	FBatchGetItemRequest() = default;
#if !DISABLE_DYNAMODB
	FBatchGetItemRequest(const Aws::DynamoDB::Model::BatchGetItemRequest& data) 
		: ReturnConsumedCapacity(static_cast<EReturnConsumedCapacity>(data.GetReturnConsumedCapacity()))
	{
		for (auto& m_Element : data.GetRequestItems())
			RequestItems.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FKeysAndAttributes> RequestItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FPutRequest
{
	GENERATED_BODY()
public:
	FPutRequest() = default;
#if !DISABLE_DYNAMODB
	FPutRequest(const Aws::DynamoDB::Model::PutRequest& data) 
	{
		for (auto& m_Element : data.GetItem())
		{
			Item.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
		}
	}
public:
	operator Aws::DynamoDB::Model::PutRequest() const
	{
		Aws::DynamoDB::Model::PutRequest m_Data;
		for (auto& m_Element : Item)
			m_Data.AddItem(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Item;
};

USTRUCT(BlueprintType)
struct FDeleteRequest
{
	GENERATED_BODY()
public:
	FDeleteRequest() = default;
#if !DISABLE_DYNAMODB
	FDeleteRequest(const Aws::DynamoDB::Model::DeleteRequest& data)
	{
		for (auto& m_Element : data.GetKey())
		{
			Key.Add(UTF8_TO_TCHAR(m_Element.first.c_str()), m_Element.second);
		}
	}
public:
	operator Aws::DynamoDB::Model::DeleteRequest() const
	{
		Aws::DynamoDB::Model::DeleteRequest m_Data;
		for (auto& m_Element : Key)
			m_Data.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
};

USTRUCT(BlueprintType)
struct FWriteRequest
{
	GENERATED_BODY()
public:
	FWriteRequest() = default;
#if !DISABLE_DYNAMODB
	FWriteRequest(const Aws::DynamoDB::Model::WriteRequest& data)
		: PutRequest(data.GetPutRequest())
		, DeleteRequest(data.GetDeleteRequest())
	{}
public:
	operator Aws::DynamoDB::Model::WriteRequest() const
	{
		Aws::DynamoDB::Model::WriteRequest m_Data;
		m_Data.SetPutRequest(PutRequest);
		m_Data.SetDeleteRequest(DeleteRequest);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FPutRequest PutRequest;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDeleteRequest DeleteRequest;
};

USTRUCT(BlueprintType)
struct FWriteRequestArray
{
	GENERATED_BODY()
public:
	FWriteRequestArray() = default;
	FWriteRequestArray(TArray<FWriteRequest> requests)
		: Requests(requests) {}
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FWriteRequest> Requests;
};

USTRUCT(BlueprintType)
struct FBatchWriteItemRequest
{
	GENERATED_BODY()
public:
	FBatchWriteItemRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FWriteRequestArray> RequestItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnItemCollectionMetrics ReturnItemCollectionMetrics;
};

USTRUCT(BlueprintType)
struct FCreateBackupRequest
{
	GENERATED_BODY()
public:
	FCreateBackupRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupName;
};

USTRUCT(BlueprintType)
struct FReplica
{
	GENERATED_BODY()
public:
	FReplica() = default;
#if !DISABLE_DYNAMODB
	FReplica(const Aws::DynamoDB::Model::Replica& data)
		: RegionName(UTF8_TO_TCHAR(data.GetRegionName().c_str()))
	{ }
public:
	operator Aws::DynamoDB::Model::Replica() const
	{
		Aws::DynamoDB::Model::Replica m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
};

USTRUCT(BlueprintType)
struct FCreateGlobalTableRequest
{
	GENERATED_BODY()
public:
	FCreateGlobalTableRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplica> ReplicationGroup;
};

USTRUCT(BlueprintType)
struct FAttributeDefinition
{
	GENERATED_BODY()
public:
	FAttributeDefinition() 
		: AttributeType(EScalarAttributeType::NOT_SET)
	{ }
#if !DISABLE_DYNAMODB
	FAttributeDefinition(const Aws::DynamoDB::Model::AttributeDefinition& data)
		: AttributeName(UTF8_TO_TCHAR(data.GetAttributeName().c_str()))
		, AttributeType(static_cast<EScalarAttributeType>(data.GetAttributeType()))
	{}
public:
	operator Aws::DynamoDB::Model::AttributeDefinition() const
	{
		Aws::DynamoDB::Model::AttributeDefinition m_Data;
		if (AttributeName.Len() > 0)
			m_Data.SetAttributeName(TCHAR_TO_UTF8(*AttributeName));
		if (AttributeType != EScalarAttributeType::NOT_SET)
			m_Data.SetAttributeType(static_cast<Aws::DynamoDB::Model::ScalarAttributeType>(AttributeType));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AttributeName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EScalarAttributeType AttributeType;
};

USTRUCT(BlueprintType)
struct FKeySchemaElement
{
	GENERATED_BODY()
public:
	FKeySchemaElement() 
		: KeyType(EKeyType::NOT_SET)
	{ }
#if !DISABLE_DYNAMODB
	FKeySchemaElement(const Aws::DynamoDB::Model::KeySchemaElement& data) 
		: AttributeName(UTF8_TO_TCHAR(data.GetAttributeName().c_str()))
		, KeyType(static_cast<EKeyType>(data.GetKeyType()))
	{}
public:
	operator Aws::DynamoDB::Model::KeySchemaElement() const
	{
		Aws::DynamoDB::Model::KeySchemaElement m_Data;
		if (AttributeName.Len() > 0)
			m_Data.SetAttributeName(TCHAR_TO_UTF8(*AttributeName));
		if (KeyType != EKeyType::NOT_SET)
			m_Data.SetKeyType(static_cast<Aws::DynamoDB::Model::KeyType>(KeyType));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AttributeName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EKeyType KeyType;
};

USTRUCT(BlueprintType)
struct FProjection
{
	GENERATED_BODY()
public:
	FProjection() 
		: ProjectionType(EProjectionType::NOT_SET)
	{ }
public:
#if !DISABLE_DYNAMODB
	FProjection(const Aws::DynamoDB::Model::Projection& data)
		: ProjectionType(static_cast<EProjectionType>(data.GetProjectionType()))
	{
		for (auto& m_Element : data.GetNonKeyAttributes())
			NonKeyAttributes.Add(UTF8_TO_TCHAR(m_Element.c_str()));
	}
public:
	operator Aws::DynamoDB::Model::Projection() const
	{
		Aws::DynamoDB::Model::Projection m_Data;
		if (ProjectionType != EProjectionType::NOT_SET)
			m_Data.SetProjectionType(static_cast<Aws::DynamoDB::Model::ProjectionType>(ProjectionType));

		for (auto& m_Element : NonKeyAttributes)
			m_Data.AddNonKeyAttributes(TCHAR_TO_UTF8(*m_Element));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EProjectionType ProjectionType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> NonKeyAttributes;
};

USTRUCT(BlueprintType)
struct FLocalSecondaryIndex
{
	GENERATED_BODY()
public:
	FLocalSecondaryIndex() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::LocalSecondaryIndex() const
	{
		Aws::DynamoDB::Model::LocalSecondaryIndex m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		for (auto& m_Element : KeySchema)
			m_Data.AddKeySchema(m_Element);
		m_Data.SetProjection(Projection);
		return m_Data;
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
struct FProvisionedThroughput
{
	GENERATED_BODY()
public:
	FProvisionedThroughput() = default;
#if !DISABLE_DYNAMODB
	FProvisionedThroughput(const Aws::DynamoDB::Model::ProvisionedThroughput& data)
		: ReadCapacityUnits(LexToString(data.GetReadCapacityUnits()))
		, WriteCapacityUnits(LexToString(data.GetWriteCapacityUnits()))
	{}
public:
	operator Aws::DynamoDB::Model::ProvisionedThroughput() const
	{
		Aws::DynamoDB::Model::ProvisionedThroughput m_Data;
		if (ReadCapacityUnits.Len() > 0)
			m_Data.SetReadCapacityUnits(FCString::Atod(*ReadCapacityUnits));
		if (WriteCapacityUnits.Len() > 0)
			m_Data.SetWriteCapacityUnits(FCString::Atod(*WriteCapacityUnits));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString WriteCapacityUnits;
};

USTRUCT(BlueprintType)
struct FGlobalSecondaryIndex
{
	GENERATED_BODY()
public:
	FGlobalSecondaryIndex() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::GlobalSecondaryIndex() const
	{
		Aws::DynamoDB::Model::GlobalSecondaryIndex m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));

		for (auto& m_Element : KeySchema)
			m_Data.AddKeySchema(m_Element);

		m_Data.SetProjection(Projection);
		m_Data.SetProvisionedThroughput(ProvisionedThroughput);

		return m_Data;
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
struct FStreamSpecification
{
	GENERATED_BODY()
public:
	FStreamSpecification() 
		: bStreamEnabled(false)
		, StreamViewType(EStreamViewType::NOT_SET)
	{ }
#if !DISABLE_DYNAMODB
	FStreamSpecification(const Aws::DynamoDB::Model::StreamSpecification& data) 
		: bStreamEnabled(data.GetStreamEnabled())
		, StreamViewType(static_cast<EStreamViewType>(data.GetStreamViewType()))
	{}
public:
	operator Aws::DynamoDB::Model::StreamSpecification() const
	{
		Aws::DynamoDB::Model::StreamSpecification m_Data;
		m_Data.SetStreamEnabled(bStreamEnabled);
		if (StreamViewType != EStreamViewType::NOT_SET)
			m_Data.SetStreamViewType(static_cast<Aws::DynamoDB::Model::StreamViewType>(StreamViewType));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bStreamEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EStreamViewType StreamViewType;
};

USTRUCT(BlueprintType)
struct FSSESpecification
{
	GENERATED_BODY()
public:
	FSSESpecification() 
		: bEnabled(false)
		, SSEType(ESSEType::NOT_SET)
	{ }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::SSESpecification() const
	{
		Aws::DynamoDB::Model::SSESpecification m_Data;
		m_Data.SetEnabled(bEnabled);
		if (SSEType != ESSEType::NOT_SET)
			m_Data.SetSSEType(static_cast<Aws::DynamoDB::Model::SSEType>(SSEType));
		m_Data.SetKMSMasterKeyId(TCHAR_TO_UTF8(*KMSMasterKeyId));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ESSEType SSEType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString KMSMasterKeyId;
};

USTRUCT(BlueprintType)
struct FDynamoDBTag
{
	GENERATED_BODY()
public:
	FDynamoDBTag() = default;
#if !DISABLE_DYNAMODB
	FDynamoDBTag(const Aws::DynamoDB::Model::Tag& data)
		: Key(UTF8_TO_TCHAR(data.GetKey().c_str()))
		, Value(UTF8_TO_TCHAR(data.GetValue().c_str()))
	{}
public:
	operator Aws::DynamoDB::Model::Tag() const
	{
		Aws::DynamoDB::Model::Tag m_Data;
		if (Key.Len() > 0)
			m_Data.SetKey(TCHAR_TO_UTF8(*Key));
		if (Value.Len() > 0)
			m_Data.SetValue(TCHAR_TO_UTF8(*Value));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString Value;
};

USTRUCT(BlueprintType)
struct FCreateTableRequest
{
	GENERATED_BODY()
public:
	FCreateTableRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeDefinition> AttributeDefinitions;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FKeySchemaElement> KeySchema;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FLocalSecondaryIndex> LocalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndex> GlobalSecondaryIndexes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode BillingMode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughput;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FStreamSpecification StreamSpecification;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSSESpecification SSESpecification;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FDynamoDBTag> Tags;
};

USTRUCT(BlueprintType)
struct FDeleteBackupRequest
{
	GENERATED_BODY()
public:
	FDeleteBackupRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupArn;
};

USTRUCT(BlueprintType)
struct FExpectedAttributeValue
{
	GENERATED_BODY()
public:
	FExpectedAttributeValue() 
		: bExists(false)
		, ComparisonOperator(EComparisonOperator::NOT_SET)
	{ }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ExpectedAttributeValue() const
	{
		Aws::DynamoDB::Model::ExpectedAttributeValue m_Data;
		m_Data.SetValue(Value);
		m_Data.SetExists(bExists);
		if (ComparisonOperator != EComparisonOperator::NOT_SET)
			m_Data.SetComparisonOperator(static_cast<Aws::DynamoDB::Model::ComparisonOperator>(ComparisonOperator));
		for (auto& m_Element : AttributeValueList)
			m_Data.AddAttributeValueList(m_Element);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAttributeValue Value;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bExists;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EComparisonOperator ComparisonOperator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeValue> AttributeValueList;
};

USTRUCT(BlueprintType)
struct FDeleteItemRequest
{
	GENERATED_BODY()
public:
	FDeleteItemRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FExpectedAttributeValue> Expected;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EConditionalOperator ConditionalOperator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValue ReturnValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnItemCollectionMetrics ReturnItemCollectionMetrics;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
};

USTRUCT(BlueprintType)
struct FDeleteTableRequest
{
	GENERATED_BODY()
public:
	FDeleteTableRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
};

USTRUCT(BlueprintType)
struct FDescribeBackupRequest
{
	GENERATED_BODY()
public:
	FDescribeBackupRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupArn;
};

USTRUCT(BlueprintType)
struct FDescribeContinuousBackupsRequest
{
	GENERATED_BODY()
public:
	FDescribeContinuousBackupsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
};

USTRUCT(BlueprintType)
struct FDescribeContributorInsightsRequest
{
	GENERATED_BODY()
public:
	FDescribeContributorInsightsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
};

USTRUCT(BlueprintType)
struct FDescribeEndpointsRequest
{
	GENERATED_BODY()
public:
	FDescribeEndpointsRequest() = default;

};

USTRUCT(BlueprintType)
struct FDescribeGlobalTableRequest
{
	GENERATED_BODY()
public:
	FDescribeGlobalTableRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
};

USTRUCT(BlueprintType)
struct FDescribeGlobalTableSettingsRequest
{
	GENERATED_BODY()
public:
	FDescribeGlobalTableSettingsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
};

USTRUCT(BlueprintType)
struct FDescribeLimitsRequest
{
	GENERATED_BODY()
public:
	FDescribeLimitsRequest() = default;
};

USTRUCT(BlueprintType)
struct FDescribeTableRequest
{
	GENERATED_BODY()
public:
	FDescribeTableRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
};

USTRUCT(BlueprintType)
struct FDescribeTableReplicaAutoScalingRequest
{
	GENERATED_BODY()
public:
	FDescribeTableReplicaAutoScalingRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
};

USTRUCT(BlueprintType)
struct FDescribeTimeToLiveRequest
{
	GENERATED_BODY()
public:
	FDescribeTimeToLiveRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
};

USTRUCT(BlueprintType)
struct FGetItemRequest
{
	GENERATED_BODY()
public:
	FGetItemRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> AttributesToGet;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bConsistentRead;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProjectionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
};

USTRUCT(BlueprintType)
struct FListBackupsRequest
{
	GENERATED_BODY()
public:
	FListBackupsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Limit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime TimeRangeLowerBound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime TimeRangeUpperBound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ExclusiveStartBackupArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBackupTypeFilter BackupType;
};

USTRUCT(BlueprintType)
struct FListContributorInsightsRequest
{
	GENERATED_BODY()
public:
	FListContributorInsightsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString NextToken;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 MaxResults;
};

USTRUCT(BlueprintType)
struct FListGlobalTablesRequest
{
	GENERATED_BODY()
public:
	FListGlobalTablesRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ExclusiveStartGlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Limit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
};

USTRUCT(BlueprintType)
struct FListTablesRequest
{
	GENERATED_BODY()
public:
	FListTablesRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ExclusiveStartTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Limit;
};

USTRUCT(BlueprintType)
struct FListTagsOfResourceRequest
{
	GENERATED_BODY()
public:
	FListTagsOfResourceRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ResourceArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString NextToken;
};

USTRUCT(BlueprintType)
struct FPutItemRequest
{
	GENERATED_BODY()
public:
	FPutItemRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Item;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FExpectedAttributeValue> Expected;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValue ReturnValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnItemCollectionMetrics ReturnItemCollectionMetrics;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EConditionalOperator ConditionalOperator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
};

USTRUCT(BlueprintType)
struct FCondition
{
	GENERATED_BODY()
public:
	FCondition() 
		: ComparisonOperator(EComparisonOperator::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::Condition() const
	{
		Aws::DynamoDB::Model::Condition m_Data;
		for (auto& m_Element : AttributeValueList)
			m_Data.AddAttributeValueList(m_Element);
		if (ComparisonOperator != EComparisonOperator::NOT_SET)
			m_Data.SetComparisonOperator(static_cast<Aws::DynamoDB::Model::ComparisonOperator>(ComparisonOperator));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeValue> AttributeValueList;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EComparisonOperator ComparisonOperator;
};

USTRUCT(BlueprintType)
struct FQueryRequest
{
	GENERATED_BODY()
public:
	FQueryRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ESelect Select;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> AttributesToGet;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Limit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bConsistentRead;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FCondition> KeyConditions;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FCondition> QueryFilter;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EConditionalOperator ConditionalOperator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bScanIndexForward;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExclusiveStartKey;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProjectionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString FilterExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString KeyConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
};

USTRUCT(BlueprintType)
struct FRestoreTableFromBackupRequest
{
	GENERATED_BODY()
public:
	FRestoreTableFromBackupRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TargetTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString BackupArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode BillingModeOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndex> GlobalSecondaryIndexOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FLocalSecondaryIndex> LocalSecondaryIndexOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughputOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSSESpecification SSESpecificationOverride;
};

USTRUCT(BlueprintType)
struct FRestoreTableToPointInTimeRequest
{
	GENERATED_BODY()
public:
	FRestoreTableToPointInTimeRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString SourceTableArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString SourceTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TargetTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bUseLatestRestorableTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDateTime RestoreDateTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode BillingModeOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndex> GlobalSecondaryIndexOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FLocalSecondaryIndex> LocalSecondaryIndexOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughputOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSSESpecification SSESpecificationOverride;
};

USTRUCT(BlueprintType)
struct FScanRequest
{
	GENERATED_BODY()
public:
	FScanRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> AttributesToGet;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Limit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		ESelect Select;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FCondition> ScanFilter;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EConditionalOperator ConditionalOperator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExclusiveStartKey;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 TotalSegments;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		int32 Segment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProjectionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString FilterExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bConsistentRead;
};

USTRUCT(BlueprintType)
struct FTagResourceRequestDynamoDB
{
	GENERATED_BODY()
public:
	FTagResourceRequestDynamoDB() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ResourceArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FDynamoDBTag> Tags;
};

USTRUCT(BlueprintType)
struct FDynamoDBGet
{
	GENERATED_BODY()
public:
	FDynamoDBGet() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::Get() const
	{
		Aws::DynamoDB::Model::Get m_Data;
		for (auto& m_Element : Key)
			m_Data.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (TableName.Len() > 0)
			m_Data.SetTableName(TCHAR_TO_UTF8(*TableName));
		if (ProjectionExpression.Len() > 0)
			m_Data.SetProjectionExpression(TCHAR_TO_UTF8(*ProjectionExpression));
		for (auto& m_Element : ExpressionAttributeNames)
			m_Data.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProjectionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
};

USTRUCT(BlueprintType)
struct FTransactGetItem
{
	GENERATED_BODY()
public:
	FTransactGetItem() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::TransactGetItem() const
	{
		Aws::DynamoDB::Model::TransactGetItem m_Data;
		m_Data.SetGet(Get);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDynamoDBGet Get;
};

USTRUCT(BlueprintType)
struct FTransactGetItemsRequest
{
	GENERATED_BODY()
public:
	FTransactGetItemsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FTransactGetItem> TransactItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
};

USTRUCT(BlueprintType)
struct FPut
{
	GENERATED_BODY()
public:
	FPut() 
		: ReturnValuesOnConditionCheckFailure(EReturnValuesOnConditionCheckFailure::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::Put() const
	{
		Aws::DynamoDB::Model::Put m_Data;
		for (auto& m_Element : Item)
			m_Data.AddItem(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (TableName.Len() > 0)
			m_Data.SetTableName(TCHAR_TO_UTF8(*TableName));
		if (ConditionExpression.Len() > 0)
			m_Data.SetConditionExpression(TCHAR_TO_UTF8(*ConditionExpression));
		for (auto& m_Element : ExpressionAttributeNames)
			m_Data.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));
		for (auto& m_Element : ExpressionAttributeValues)
			m_Data.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (ReturnValuesOnConditionCheckFailure != EReturnValuesOnConditionCheckFailure::NOT_SET)
			m_Data.SetReturnValuesOnConditionCheckFailure(static_cast<Aws::DynamoDB::Model::ReturnValuesOnConditionCheckFailure>(ReturnValuesOnConditionCheckFailure));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Item;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValuesOnConditionCheckFailure ReturnValuesOnConditionCheckFailure;
};

USTRUCT(BlueprintType)
struct FConditionCheck
{
	GENERATED_BODY()
public:
	FConditionCheck()
		: ReturnValuesOnConditionCheckFailure(EReturnValuesOnConditionCheckFailure::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ConditionCheck() const
	{
		Aws::DynamoDB::Model::ConditionCheck m_Data;
		for (auto& m_Element : Key)
			m_Data.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (TableName.Len() > 0)
			m_Data.SetTableName(TCHAR_TO_UTF8(*TableName));
		if (ConditionExpression.Len() > 0)
			m_Data.SetConditionExpression(TCHAR_TO_UTF8(*ConditionExpression));
		for (auto& m_Element : ExpressionAttributeNames)
			m_Data.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));
		for (auto& m_Element : ExpressionAttributeValues)
			m_Data.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (ReturnValuesOnConditionCheckFailure != EReturnValuesOnConditionCheckFailure::NOT_SET)
			m_Data.SetReturnValuesOnConditionCheckFailure(static_cast<Aws::DynamoDB::Model::ReturnValuesOnConditionCheckFailure>(ReturnValuesOnConditionCheckFailure));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValuesOnConditionCheckFailure ReturnValuesOnConditionCheckFailure;
};

USTRUCT(BlueprintType)
struct FDeleteDynamoDB
{
	GENERATED_BODY()
public:
	FDeleteDynamoDB()
		: ReturnValuesOnConditionCheckFailure(EReturnValuesOnConditionCheckFailure::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::Delete() const
	{
		Aws::DynamoDB::Model::Delete m_Data;
		for (auto& m_Element : Key)
			m_Data.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (TableName.Len() > 0)
			m_Data.SetTableName(TCHAR_TO_UTF8(*TableName));
		if (ConditionExpression.Len() > 0)
			m_Data.SetConditionExpression(TCHAR_TO_UTF8(*ConditionExpression));
		for (auto& m_Element : ExpressionAttributeNames)
			m_Data.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));
		for (auto& m_Element : ExpressionAttributeValues)
			m_Data.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (ReturnValuesOnConditionCheckFailure != EReturnValuesOnConditionCheckFailure::NOT_SET)
			m_Data.SetReturnValuesOnConditionCheckFailure(static_cast<Aws::DynamoDB::Model::ReturnValuesOnConditionCheckFailure>(ReturnValuesOnConditionCheckFailure));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValuesOnConditionCheckFailure ReturnValuesOnConditionCheckFailure;
};

USTRUCT(BlueprintType)
struct FUpdateDynamoDB
{
	GENERATED_BODY()
public:
	FUpdateDynamoDB()
		: ReturnValuesOnConditionCheckFailure(EReturnValuesOnConditionCheckFailure::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::Update() const
	{
		Aws::DynamoDB::Model::Update m_Data;
		for (auto& m_Element : Key)
			m_Data.AddKey(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (UpdateExpression.Len() > 0)
			m_Data.SetUpdateExpression(TCHAR_TO_UTF8(*UpdateExpression));
		if (TableName.Len() > 0)
			m_Data.SetTableName(TCHAR_TO_UTF8(*TableName));
		if (ConditionExpression.Len() > 0)
			m_Data.SetConditionExpression(TCHAR_TO_UTF8(*ConditionExpression));
		for (auto& m_Element : ExpressionAttributeNames)
			m_Data.AddExpressionAttributeNames(TCHAR_TO_UTF8(*m_Element.Key), TCHAR_TO_UTF8(*m_Element.Value));
		for (auto& m_Element : ExpressionAttributeValues)
			m_Data.AddExpressionAttributeValues(TCHAR_TO_UTF8(*m_Element.Key), m_Element.Value);
		if (ReturnValuesOnConditionCheckFailure != EReturnValuesOnConditionCheckFailure::NOT_SET)
			m_Data.SetReturnValuesOnConditionCheckFailure(static_cast<Aws::DynamoDB::Model::ReturnValuesOnConditionCheckFailure>(ReturnValuesOnConditionCheckFailure));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString UpdateExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValuesOnConditionCheckFailure ReturnValuesOnConditionCheckFailure;
};

USTRUCT(BlueprintType)
struct FTransactWriteItem
{
	GENERATED_BODY()
public:
	FTransactWriteItem() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::TransactWriteItem() const
	{
		Aws::DynamoDB::Model::TransactWriteItem m_Data;
		m_Data.SetConditionCheck(ConditionCheck);
		m_Data.SetPut(Put);
		m_Data.SetDelete(Delete);
		m_Data.SetUpdate(Update);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FConditionCheck ConditionCheck;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FPut Put;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDeleteDynamoDB Delete;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FUpdateDynamoDB Update;
};

USTRUCT(BlueprintType)
struct FTransactWriteItemsRequest
{
	GENERATED_BODY()
public:
	FTransactWriteItemsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FTransactWriteItem> TransactItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnItemCollectionMetrics ReturnItemCollectionMetrics;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ClientRequestToken;
};

USTRUCT(BlueprintType)
struct FUntagResourceRequestDynamoDB
{
	GENERATED_BODY()
public:
	FUntagResourceRequestDynamoDB() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ResourceArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FString> TagKeys;
};

USTRUCT(BlueprintType)
struct FPointInTimeRecoverySpecification
{
	GENERATED_BODY()
public:
	FPointInTimeRecoverySpecification() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::PointInTimeRecoverySpecification() const
	{
		Aws::DynamoDB::Model::PointInTimeRecoverySpecification m_Data;
		m_Data.SetPointInTimeRecoveryEnabled(bPointInTimeRecoveryEnabled);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bPointInTimeRecoveryEnabled;
};

USTRUCT(BlueprintType)
struct FUpdateContinuousBackupsRequest
{
	GENERATED_BODY()
public:
	FUpdateContinuousBackupsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FPointInTimeRecoverySpecification PointInTimeRecoverySpecification;
};

USTRUCT(BlueprintType)
struct FUpdateContributorInsightsRequest
{
	GENERATED_BODY()
public:
	FUpdateContributorInsightsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EContributorInsightsAction ContributorInsightsAction;
};

USTRUCT(BlueprintType)
struct FCreateReplicaAction
{
	GENERATED_BODY()
public:
	FCreateReplicaAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::CreateReplicaAction() const
	{
		Aws::DynamoDB::Model::CreateReplicaAction m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
};

USTRUCT(BlueprintType)
struct FDeleteReplicaAction
{
	GENERATED_BODY()
public:
	FDeleteReplicaAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::DeleteReplicaAction() const
	{
		Aws::DynamoDB::Model::DeleteReplicaAction m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
};

USTRUCT(BlueprintType)
struct FReplicaUpdate
{
	GENERATED_BODY()
public:
	FReplicaUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicaUpdate() const
	{
		Aws::DynamoDB::Model::ReplicaUpdate m_Data;
		m_Data.SetCreate(Create);
		m_Data.SetDelete(Delete);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FCreateReplicaAction Create;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDeleteReplicaAction Delete;
};

USTRUCT(BlueprintType)
struct FProvisionedThroughputOverride
{
	GENERATED_BODY()
public:
	FProvisionedThroughputOverride() = default;
#if !DISABLE_DYNAMODB
	FProvisionedThroughputOverride(const Aws::DynamoDB::Model::ProvisionedThroughputOverride& data)
		: ReadCapacityUnits(LexToString(data.GetReadCapacityUnits()))
	{}
public:
	operator Aws::DynamoDB::Model::ProvisionedThroughputOverride() const
	{
		Aws::DynamoDB::Model::ProvisionedThroughputOverride m_Data;
		m_Data.SetReadCapacityUnits(FCString::Atod(*ReadCapacityUnits));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReadCapacityUnits;
};

USTRUCT(BlueprintType)
struct FReplicaGlobalSecondaryIndex
{
	GENERATED_BODY()
public:
	FReplicaGlobalSecondaryIndex() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndex() const
	{
		Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndex m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		m_Data.SetProvisionedThroughputOverride(ProvisionedThroughputOverride);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputOverride ProvisionedThroughputOverride;
};

USTRUCT(BlueprintType)
struct FCreateReplicationGroupMemberAction
{
	GENERATED_BODY()
public:
	FCreateReplicationGroupMemberAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::CreateReplicationGroupMemberAction() const
	{
		Aws::DynamoDB::Model::CreateReplicationGroupMemberAction m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		if (KMSMasterKeyId.Len() > 0)
			m_Data.SetKMSMasterKeyId(TCHAR_TO_UTF8(*KMSMasterKeyId));
		m_Data.SetProvisionedThroughputOverride(ProvisionedThroughputOverride);
		for (auto& m_Element : GlobalSecondaryIndexes)
			m_Data.AddGlobalSecondaryIndexes(m_Element);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString KMSMasterKeyId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputOverride ProvisionedThroughputOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndex> GlobalSecondaryIndexes;
};

USTRUCT(BlueprintType)
struct FUpdateReplicationGroupMemberAction
{
	GENERATED_BODY()
public:
	FUpdateReplicationGroupMemberAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::UpdateReplicationGroupMemberAction() const
	{
		Aws::DynamoDB::Model::UpdateReplicationGroupMemberAction m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		if (KMSMasterKeyId.Len() > 0)
			m_Data.SetKMSMasterKeyId(TCHAR_TO_UTF8(*KMSMasterKeyId));
		m_Data.SetProvisionedThroughputOverride(ProvisionedThroughputOverride);
		for (auto& m_Element : GlobalSecondaryIndexes)
			m_Data.AddGlobalSecondaryIndexes(m_Element);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString KMSMasterKeyId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughputOverride ProvisionedThroughputOverride;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndex> GlobalSecondaryIndexes;
};

USTRUCT(BlueprintType)
struct FDeleteReplicationGroupMemberAction
{
	GENERATED_BODY()
public:
	FDeleteReplicationGroupMemberAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::DeleteReplicationGroupMemberAction() const
	{
		Aws::DynamoDB::Model::DeleteReplicationGroupMemberAction m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
};

USTRUCT(BlueprintType)
struct FReplicationGroupUpdate
{
	GENERATED_BODY()
public:
	FReplicationGroupUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicationGroupUpdate() const
	{
		Aws::DynamoDB::Model::ReplicationGroupUpdate m_Data;
		m_Data.SetCreate(Create);
		m_Data.SetUpdate(Update);
		m_Data.SetDelete(Delete);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FCreateReplicationGroupMemberAction Create;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FUpdateReplicationGroupMemberAction Update;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDeleteReplicationGroupMemberAction Delete;
};

USTRUCT(BlueprintType)
struct FUpdateGlobalTableRequest
{
	GENERATED_BODY()
public:
	FUpdateGlobalTableRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaUpdate> ReplicaUpdates;
};

USTRUCT(BlueprintType)
struct FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate
{
	GENERATED_BODY()
public:
	FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate() const
	{
		Aws::DynamoDB::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate m_Data;
		m_Data.SetDisableScaleIn(bDisableScaleIn);
		if (ScaleInCooldown > 0)
			m_Data.SetScaleInCooldown(ScaleInCooldown);
		if (ScaleOutCooldown > 0)
			m_Data.SetScaleOutCooldown(ScaleOutCooldown);
		if (TargetValue.Len() > 0)
			m_Data.SetTargetValue(FCString::Atod(*TargetValue));
		return m_Data;
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
struct FAutoScalingPolicyUpdate
{
	GENERATED_BODY()
public:
	FAutoScalingPolicyUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::AutoScalingPolicyUpdate() const
	{
		Aws::DynamoDB::Model::AutoScalingPolicyUpdate m_Data;
		if (PolicyName.Len() > 0)
			m_Data.SetPolicyName(TCHAR_TO_UTF8(*PolicyName));
		m_Data.SetTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfiguration);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString PolicyName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate TargetTrackingScalingPolicyConfiguration;
};

USTRUCT(BlueprintType)
struct FAutoScalingSettingsUpdate
{
	GENERATED_BODY()
public:
	FAutoScalingSettingsUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::AutoScalingSettingsUpdate() const
	{
		Aws::DynamoDB::Model::AutoScalingSettingsUpdate m_Data;
		if (MinimumUnits.Len() > 0)
			m_Data.SetMinimumUnits(FCString::Atod(*MinimumUnits));
		if (MinimumUnits.Len() > 0)
			m_Data.SetMaximumUnits(FCString::Atod(*MaximumUnits));
		m_Data.SetAutoScalingDisabled(bAutoScalingDisabled);
		if (AutoScalingRoleArn.Len() > 0)
			m_Data.SetAutoScalingRoleArn(TCHAR_TO_UTF8(*AutoScalingRoleArn));
		m_Data.SetScalingPolicyUpdate(ScalingPolicyUpdate);
		return m_Data;
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
		FString AutoScalingRoleArn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingPolicyUpdate ScalingPolicyUpdate;
};

USTRUCT(BlueprintType)
struct FGlobalTableGlobalSecondaryIndexSettingsUpdate
{
	GENERATED_BODY()
public:
	FGlobalTableGlobalSecondaryIndexSettingsUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate() const
	{
		Aws::DynamoDB::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		if (ProvisionedWriteCapacityUnits.Len() > 0)
			m_Data.SetProvisionedWriteCapacityUnits(FCString::Atod(*ProvisionedWriteCapacityUnits));
		m_Data.SetProvisionedWriteCapacityAutoScalingSettingsUpdate(ProvisionedWriteCapacityAutoScalingSettingsUpdate);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProvisionedWriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ProvisionedWriteCapacityAutoScalingSettingsUpdate;
};

USTRUCT(BlueprintType)
struct FReplicaGlobalSecondaryIndexSettingsUpdate
{
	GENERATED_BODY()
public:
	FReplicaGlobalSecondaryIndexSettingsUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexSettingsUpdate() const
	{
		Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexSettingsUpdate m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		if (ProvisionedReadCapacityUnits.Len() > 0)
			m_Data.SetProvisionedReadCapacityUnits(FCString::Atod(*ProvisionedReadCapacityUnits));
		m_Data.SetProvisionedReadCapacityAutoScalingSettingsUpdate(ProvisionedReadCapacityAutoScalingSettingsUpdate);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ProvisionedReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ProvisionedReadCapacityAutoScalingSettingsUpdate;
};

USTRUCT(BlueprintType)
struct FReplicaSettingsUpdate
{
	GENERATED_BODY()
public:
	FReplicaSettingsUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicaSettingsUpdate() const
	{
		Aws::DynamoDB::Model::ReplicaSettingsUpdate m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		if (ReplicaProvisionedReadCapacityUnits.Len() > 0)
			m_Data.SetReplicaProvisionedReadCapacityUnits(FCString::Atod(*ReplicaProvisionedReadCapacityUnits));
		m_Data.SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate);
		for (auto& m_Element : ReplicaGlobalSecondaryIndexSettingsUpdate)
			m_Data.AddReplicaGlobalSecondaryIndexSettingsUpdate(m_Element);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ReplicaProvisionedReadCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndexSettingsUpdate> ReplicaGlobalSecondaryIndexSettingsUpdate;
};

USTRUCT(BlueprintType)
struct FUpdateGlobalTableSettingsRequest
{
	GENERATED_BODY()
public:
	FUpdateGlobalTableSettingsRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode GlobalTableBillingMode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString GlobalTableProvisionedWriteCapacityUnits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalTableGlobalSecondaryIndexSettingsUpdate> GlobalTableGlobalSecondaryIndexSettingsUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaSettingsUpdate> ReplicaSettingsUpdate;
};

USTRUCT(BlueprintType)
struct FAttributeValueUpdate
{
	GENERATED_BODY()
public:
	FAttributeValueUpdate()
		: Action(EAttributeAction::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::AttributeValueUpdate() const
	{
		Aws::DynamoDB::Model::AttributeValueUpdate m_Data;
		m_Data.SetValue(Value);
		if (Action != EAttributeAction::NOT_SET)
			m_Data.SetAction(static_cast<Aws::DynamoDB::Model::AttributeAction>(Action));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAttributeValue Value;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EAttributeAction Action;
};

USTRUCT(BlueprintType)
struct FUpdateItemRequest
{
	GENERATED_BODY()
public:
	FUpdateItemRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValueUpdate> AttributeUpdates;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FExpectedAttributeValue> Expected;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EConditionalOperator ConditionalOperator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnValue ReturnValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnConsumedCapacity ReturnConsumedCapacity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EReturnItemCollectionMetrics ReturnItemCollectionMetrics;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString UpdateExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString ConditionExpression;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FString> ExpressionAttributeNames;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TMap<FString, FAttributeValue> ExpressionAttributeValues;
};

USTRUCT(BlueprintType)
struct FUpdateGlobalSecondaryIndexAction
{
	GENERATED_BODY()
public:
	FUpdateGlobalSecondaryIndexAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::UpdateGlobalSecondaryIndexAction() const
	{
		Aws::DynamoDB::Model::UpdateGlobalSecondaryIndexAction m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		m_Data.SetProvisionedThroughput(ProvisionedThroughput);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughput;
};

USTRUCT(BlueprintType)
struct FCreateGlobalSecondaryIndexAction
{
	GENERATED_BODY()
public:
	FCreateGlobalSecondaryIndexAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::CreateGlobalSecondaryIndexAction() const
	{
		Aws::DynamoDB::Model::CreateGlobalSecondaryIndexAction m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		for (auto& m_Element : KeySchema)
			m_Data.AddKeySchema(m_Element);
		m_Data.SetProjection(Projection);
		m_Data.SetProvisionedThroughput(ProvisionedThroughput);
		return m_Data;
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
struct FDeleteGlobalSecondaryIndexAction
{
	GENERATED_BODY()
public:
	FDeleteGlobalSecondaryIndexAction() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::DeleteGlobalSecondaryIndexAction() const
	{
		Aws::DynamoDB::Model::DeleteGlobalSecondaryIndexAction m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
};

USTRUCT(BlueprintType)
struct FGlobalSecondaryIndexUpdate
{
	GENERATED_BODY()
public:
	FGlobalSecondaryIndexUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::GlobalSecondaryIndexUpdate() const
	{
		Aws::DynamoDB::Model::GlobalSecondaryIndexUpdate m_Data;
		m_Data.SetUpdate(Update);
		m_Data.SetCreate(Create);
		m_Data.SetDelete(Delete);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FUpdateGlobalSecondaryIndexAction Update;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FCreateGlobalSecondaryIndexAction Create;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FDeleteGlobalSecondaryIndexAction Delete;
};

USTRUCT(BlueprintType)
struct FUpdateTableRequest
{
	GENERATED_BODY()
public:
	FUpdateTableRequest()
		: BillingMode(EBillingMode::NOT_SET) { }
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::UpdateTableRequest() const
	{
		Aws::DynamoDB::Model::UpdateTableRequest m_Data;
		for (auto& m_Element : AttributeDefinitions)
			m_Data.AddAttributeDefinitions(m_Element);
		if (TableName.Len() > 0)
			m_Data.SetTableName(TCHAR_TO_UTF8(*TableName));
		if (BillingMode != EBillingMode::NOT_SET)
			m_Data.SetBillingMode(static_cast<Aws::DynamoDB::Model::BillingMode>(BillingMode));
		m_Data.SetProvisionedThroughput(ProvisionedThroughput);
		for (auto& m_Element : GlobalSecondaryIndexUpdates)
			m_Data.AddGlobalSecondaryIndexUpdates(m_Element);
		m_Data.SetStreamSpecification(StreamSpecification);
		m_Data.SetSSESpecification(SSESpecification);
		for (auto& m_Element : ReplicaUpdates)
			m_Data.AddReplicaUpdates(m_Element);

		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FAttributeDefinition> AttributeDefinitions;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		EBillingMode BillingMode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FProvisionedThroughput ProvisionedThroughput;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndexUpdate> GlobalSecondaryIndexUpdates;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FStreamSpecification StreamSpecification;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FSSESpecification SSESpecification;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicationGroupUpdate> ReplicaUpdates;
};

USTRUCT(BlueprintType)
struct FGlobalSecondaryIndexAutoScalingUpdate
{
	GENERATED_BODY()
public:
	FGlobalSecondaryIndexAutoScalingUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::GlobalSecondaryIndexAutoScalingUpdate() const
	{
		Aws::DynamoDB::Model::GlobalSecondaryIndexAutoScalingUpdate m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		m_Data.SetProvisionedWriteCapacityAutoScalingUpdate(ProvisionedWriteCapacityAutoScalingUpdate);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ProvisionedWriteCapacityAutoScalingUpdate;
};

USTRUCT(BlueprintType)
struct FReplicaGlobalSecondaryIndexAutoScalingUpdate
{
	GENERATED_BODY()
public:
	FReplicaGlobalSecondaryIndexAutoScalingUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate() const
	{
		Aws::DynamoDB::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate m_Data;
		if (IndexName.Len() > 0)
			m_Data.SetIndexName(TCHAR_TO_UTF8(*IndexName));
		m_Data.SetProvisionedReadCapacityAutoScalingUpdate(ProvisionedReadCapacityAutoScalingUpdate);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString IndexName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ProvisionedReadCapacityAutoScalingUpdate;
};

USTRUCT(BlueprintType)
struct FReplicaAutoScalingUpdate
{
	GENERATED_BODY()
public:
	FReplicaAutoScalingUpdate() = default;
public:
#if !DISABLE_DYNAMODB
	operator Aws::DynamoDB::Model::ReplicaAutoScalingUpdate() const
	{
		Aws::DynamoDB::Model::ReplicaAutoScalingUpdate m_Data;
		if (RegionName.Len() > 0)
			m_Data.SetRegionName(TCHAR_TO_UTF8(*RegionName));
		for (auto& m_Element : ReplicaGlobalSecondaryIndexUpdates)
			m_Data.AddReplicaGlobalSecondaryIndexUpdates(m_Element);
		m_Data.SetReplicaProvisionedReadCapacityAutoScalingUpdate(ReplicaProvisionedReadCapacityAutoScalingUpdate);
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString RegionName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaGlobalSecondaryIndexAutoScalingUpdate> ReplicaGlobalSecondaryIndexUpdates;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ReplicaProvisionedReadCapacityAutoScalingUpdate;
};

USTRUCT(BlueprintType)
struct FUpdateTableReplicaAutoScalingRequest
{
	GENERATED_BODY()
public:
	FUpdateTableReplicaAutoScalingRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FGlobalSecondaryIndexAutoScalingUpdate> GlobalSecondaryIndexUpdates;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FAutoScalingSettingsUpdate ProvisionedWriteCapacityAutoScalingUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		TArray<FReplicaAutoScalingUpdate> ReplicaUpdates;
};

USTRUCT(BlueprintType)
struct FTimeToLiveSpecification
{
	GENERATED_BODY()
public:
	FTimeToLiveSpecification() = default;
#if !DISABLE_DYNAMODB
	FTimeToLiveSpecification(const Aws::DynamoDB::Model::TimeToLiveSpecification& data) 
		: bEnabled(data.GetEnabled())
		, AttributeName(UTF8_TO_TCHAR(data.GetAttributeName().c_str()))
	{}
public:
	operator Aws::DynamoDB::Model::TimeToLiveSpecification() const
	{
		Aws::DynamoDB::Model::TimeToLiveSpecification m_Data;
		m_Data.SetEnabled(bEnabled);
		if (AttributeName.Len() > 0)
			m_Data.SetAttributeName(TCHAR_TO_UTF8(*AttributeName));
		return m_Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		bool bEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString AttributeName;
};

USTRUCT(BlueprintType)
struct FUpdateTimeToLiveRequest
{
	GENERATED_BODY()
public:
	FUpdateTimeToLiveRequest() = default;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FString TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AWSCore|AwsDynamoDB")
		FTimeToLiveSpecification TimeToLiveSpecification;
};