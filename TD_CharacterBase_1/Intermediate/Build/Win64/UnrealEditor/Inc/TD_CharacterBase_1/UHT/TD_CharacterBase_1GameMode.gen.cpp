// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_CharacterBase_1/TD_CharacterBase_1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_CharacterBase_1GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TD_CHARACTERBASE_1_API UClass* Z_Construct_UClass_ATD_CharacterBase_1GameMode();
	TD_CHARACTERBASE_1_API UClass* Z_Construct_UClass_ATD_CharacterBase_1GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TD_CharacterBase_1();
// End Cross Module References
	void ATD_CharacterBase_1GameMode::StaticRegisterNativesATD_CharacterBase_1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATD_CharacterBase_1GameMode);
	UClass* Z_Construct_UClass_ATD_CharacterBase_1GameMode_NoRegister()
	{
		return ATD_CharacterBase_1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TD_CharacterBase_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TD_CharacterBase_1GameMode.h" },
		{ "ModuleRelativePath", "TD_CharacterBase_1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATD_CharacterBase_1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::ClassParams = {
		&ATD_CharacterBase_1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATD_CharacterBase_1GameMode()
	{
		if (!Z_Registration_Info_UClass_ATD_CharacterBase_1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATD_CharacterBase_1GameMode.OuterSingleton, Z_Construct_UClass_ATD_CharacterBase_1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATD_CharacterBase_1GameMode.OuterSingleton;
	}
	template<> TD_CHARACTERBASE_1_API UClass* StaticClass<ATD_CharacterBase_1GameMode>()
	{
		return ATD_CharacterBase_1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATD_CharacterBase_1GameMode);
	ATD_CharacterBase_1GameMode::~ATD_CharacterBase_1GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATD_CharacterBase_1GameMode, ATD_CharacterBase_1GameMode::StaticClass, TEXT("ATD_CharacterBase_1GameMode"), &Z_Registration_Info_UClass_ATD_CharacterBase_1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATD_CharacterBase_1GameMode), 2699528110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1GameMode_h_803680323(TEXT("/Script/TD_CharacterBase_1"),
		Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
