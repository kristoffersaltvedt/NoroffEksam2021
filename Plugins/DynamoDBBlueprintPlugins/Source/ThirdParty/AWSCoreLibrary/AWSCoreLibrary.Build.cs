/* Copyright (C) Siqi.Wu - All Rights Reserved
 * Written by Siqi.Wu <lion547016@gmail.com>, May 2019
 */

using UnrealBuildTool;
using System.IO;

public class AWSCoreLibrary : ModuleRules
{
    public AWSCoreLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        PublicIncludePaths.Add(ModuleDirectory);

        PublicDefinitions.Add("USE_IMPORT_EXPORT=1");
        PublicDefinitions.Add("AWS_DEEP_CHECKS=1");

        string ThirdPartyPath = System.IO.Path.Combine(ModuleDirectory, Target.Platform.ToString());

        if (Target.Type != TargetRules.TargetType.Server)
        {
            if (Target.Platform == UnrealTargetPlatform.Linux)
            {
                ThirdPartyPath = System.IO.Path.Combine(ThirdPartyPath, "x86_64-unknown-linux-gnu");

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-common.so"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-common.so"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-checksums.so"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-checksums.so"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-event-stream.so"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-event-stream.so"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-cpp-sdk-core.so"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-cpp-sdk-core.so"));

            }
            else if (Target.Platform == UnrealTargetPlatform.Android)
            {
        		PublicDefinitions.Add("_FILE_OFFSET_BITS=64");
        		
                AdditionalPropertiesForReceipt.Add("AndroidPlugin", System.IO.Path.Combine(ModuleDirectory, "AWSCoreSDK_UPL.xml"));

        		PublicDefinitions.Add("_GLIBCXX_FULLY_DYNAMIC_STRING=1");

                {
                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-c-common.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-c-common.so"));

                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-checksums.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-checksums.so"));

                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-c-event-stream.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-c-event-stream.so"));

                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-cpp-sdk-core.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "armeabi-v7a", "libaws-cpp-sdk-core.so"));
                }

                {
                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-c-common.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-c-common.so"));

                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-checksums.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-checksums.so"));

                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-c-event-stream.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-c-event-stream.so"));

                    PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-cpp-sdk-core.so"));
                    RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "arm64-v8a", "libaws-cpp-sdk-core.so"));
                }
            }
            else if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-cpp-sdk-core.lib"));
                PublicDelayLoadDLLs.Add("aws-cpp-sdk-core.dll");
                string SDKLibWindows = System.IO.Path.Combine(ThirdPartyPath, "aws-cpp-sdk-core.dll");

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-c-common.lib"));
                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-checksums.lib"));
                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-c-event-stream.lib"));

                PublicDelayLoadDLLs.Add("aws-c-common.dll");
                PublicDelayLoadDLLs.Add("aws-checksums.dll");
                PublicDelayLoadDLLs.Add("aws-c-event-stream.dll");

                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-c-common.dll"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-checksums.dll"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "aws-c-event-stream.dll"));

                RuntimeDependencies.Add(SDKLibWindows);
            }
            else if (Target.Platform == UnrealTargetPlatform.Mac)
            {
        		PublicDefinitions.Add("_FILE_OFFSET_BITS=64");

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-common.dylib"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-common.dylib"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-checksums.dylib"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-checksums.dylib"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-event-stream.dylib"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-event-stream.dylib"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-cpp-sdk-core.dylib"));
                RuntimeDependencies.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-cpp-sdk-core.dylib"));

            }
            else if (Target.Platform == UnrealTargetPlatform.IOS)
            {
        		PublicDefinitions.Add("_FILE_OFFSET_BITS=64");

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libcurl.a"));

                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-common.a"));
                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-checksums.a"));
                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-c-event-stream.a"));
                PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyPath, "libaws-cpp-sdk-core.a"));

            }
            }
        }
    }
