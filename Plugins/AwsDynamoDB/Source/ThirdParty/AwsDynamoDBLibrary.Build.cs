/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

using System.IO;
using UnrealBuildTool;

public class AwsDynamoDBLibrary : ModuleRules
{
    public AwsDynamoDBLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        bEnableExceptions = true;
        bLegacyPublicIncludePaths = false;
        PublicDefinitions.Add("USE_IMPORT_EXPORT");

        bool IsServer = false;
        bool bDisablePlugin = false;

        if (IsServer)
        {
            bDisablePlugin = true;
        }
        else
        {
            if (Target.Platform == UnrealTargetPlatform.Android)
            {
                if (Target.Version.MinorVersion < 25)
                {
                    bDisablePlugin = true;
                }
            }
        }

        if (bDisablePlugin)
        {
            PublicDefinitions.Add("DISABLE_DYNAMODB=1");
        }
        else
        {
            PublicDefinitions.Add("DISABLE_DYNAMODB=0");
        }

        if (!bDisablePlugin)
        {
            string modDir = ModuleDirectory + "/";
            string libDir = Path.Combine(ModuleDirectory, "AwsDynamoDBLibrary", "Lib");
            string binDir = Path.Combine(ModuleDirectory, "AwsDynamoDBLibrary", "Bin");

            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "AwsDynamoDBLibrary", "src"));

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                string finalLibDir = Path.Combine(libDir, "Win64");
                string finalBinDir = Path.Combine(binDir, "Win64");

                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "aws-c-common.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "aws-c-event-stream.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "aws-checksums.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "aws-cpp-sdk-core.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "aws-cpp-sdk-dynamodb.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "aws-cpp-sdk-dynamodbstreams.lib"));

                PublicDelayLoadDLLs.Add("aws-c-common.dll");
                PublicDelayLoadDLLs.Add("aws-c-event-stream.dll");
                PublicDelayLoadDLLs.Add("aws-checksums.dll");
                PublicDelayLoadDLLs.Add("aws-cpp-sdk-core.dll");
                PublicDelayLoadDLLs.Add("aws-cpp-sdk-dynamodb.dll");
                PublicDelayLoadDLLs.Add("aws-cpp-sdk-dynamodbstreams.dll");

                RuntimeDependencies.Add(Path.Combine(finalBinDir, "aws-c-common.dll"));
                RuntimeDependencies.Add(Path.Combine(finalBinDir, "aws-c-event-stream.dll"));
                RuntimeDependencies.Add(Path.Combine(finalBinDir, "aws-checksums.dll"));
                RuntimeDependencies.Add(Path.Combine(finalBinDir, "aws-cpp-sdk-core.dll"));
                RuntimeDependencies.Add(Path.Combine(finalBinDir, "aws-cpp-sdk-dynamodb.dll"));
                RuntimeDependencies.Add(Path.Combine(finalBinDir, "aws-cpp-sdk-dynamodbstreams.dll"));
            }
            else if (Target.Platform == UnrealTargetPlatform.Linux)
            {
                string finalLibDir = Path.Combine(libDir, "Linux");

                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-c-common.so"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-c-event-stream.so"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-checksums.so"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-core.so"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodb.so"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodbstreams.so"));

                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-common.so"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-common.so.0unstable"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-event-stream.so.0unstable"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-event-stream.so"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-checksums.so"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-core.so"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodb.so"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodbstreams.so"));

                RuntimeDependencies.Add(ModuleDirectory + "/cacert.pem");
            }
            else if (Target.Platform == UnrealTargetPlatform.Mac)
            {
                string finalLibDir = Path.Combine(libDir, "Mac");

                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-c-common.dylib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-c-event-stream.dylib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-checksums.dylib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-core.dylib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodb.dylib"));
                PublicAdditionalLibraries.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodbstreams.dylib"));

                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-common.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-common.0unstable.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-event-stream.0unstable.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-c-event-stream.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-checksums.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-core.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodb.dylib"));
                RuntimeDependencies.Add(Path.Combine(finalLibDir, "libaws-cpp-sdk-dynamodbstreams.dylib"));

                RuntimeDependencies.Add(ModuleDirectory + "/cacert.pem");
            }
            else if (Target.Platform == UnrealTargetPlatform.IOS)
            {
            }
            else if (Target.Platform == UnrealTargetPlatform.Android)
            {
                PublicDefinitions.Add("_GLIBCXX_FULLY_DYNAMIC_STRING");

                string armDir = Path.Combine(libDir, "Android", "armeabi-v7a");
                string arm64Dir = Path.Combine(libDir, "Android", "arm64-v8a");

                PublicAdditionalLibraries.Add(Path.Combine(armDir, "libaws-c-common.so"));
                PublicAdditionalLibraries.Add(Path.Combine(armDir, "libaws-c-event-stream.so"));
                PublicAdditionalLibraries.Add(Path.Combine(armDir, "libaws-checksums.so"));
                PublicAdditionalLibraries.Add(Path.Combine(armDir, "libaws-cpp-sdk-core.so"));
                PublicAdditionalLibraries.Add(Path.Combine(armDir, "libaws-cpp-sdk-dynamodb.so"));
                PublicAdditionalLibraries.Add(Path.Combine(armDir, "libaws-cpp-sdk-dynamodbstreams.so"));

                PublicAdditionalLibraries.Add(Path.Combine(arm64Dir, "libaws-c-common.so"));
                PublicAdditionalLibraries.Add(Path.Combine(arm64Dir, "libaws-c-event-stream.so"));
                PublicAdditionalLibraries.Add(Path.Combine(arm64Dir, "libaws-checksums.so"));
                PublicAdditionalLibraries.Add(Path.Combine(arm64Dir, "libaws-cpp-sdk-core.so"));
                PublicAdditionalLibraries.Add(Path.Combine(arm64Dir, "libaws-cpp-sdk-dynamodb.so"));
                PublicAdditionalLibraries.Add(Path.Combine(arm64Dir, "libaws-cpp-sdk-dynamodbstreams.so"));

                AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(modDir, "LibAwsDynamoDB_APL.xml"));

                RuntimeDependencies.Add(ModuleDirectory + "/cacert.pem");

                PublicIncludePathModuleNames.AddRange(new string[] { "Launch" });
            }
        }
    }
}
