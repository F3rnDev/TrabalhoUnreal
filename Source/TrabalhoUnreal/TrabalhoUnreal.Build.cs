// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TrabalhoUnreal : ModuleRules
{
	public TrabalhoUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
