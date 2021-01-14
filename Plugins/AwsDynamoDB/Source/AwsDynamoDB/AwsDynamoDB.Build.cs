/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

using System.IO;
using UnrealBuildTool;

public class AwsDynamoDB : ModuleRules
{
    public AwsDynamoDB(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Private/AwsDynamoDBPrivatePCH.h";

        bEnableExceptions = true;
        PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "CoreUObject", "InputCore", "Projects", "AwsDynamoDBLibrary" });

        string libDir = Path.Combine(ModuleDirectory, "..", "ThirdParty", "AwsDynamoDBLibrary", "Lib", "Win64");
        string binDir = Path.Combine(ModuleDirectory, "..", "ThirdParty", "AwsDynamoDBLibrary", "Bin", "Win64");
    }
}
