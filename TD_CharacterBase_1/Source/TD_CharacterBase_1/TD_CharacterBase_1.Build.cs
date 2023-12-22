// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TD_CharacterBase_1 : ModuleRules
{
	public TD_CharacterBase_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
