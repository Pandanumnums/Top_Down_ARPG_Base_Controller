// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_CharacterBase_1/TD_CharacterBase_1Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_CharacterBase_1Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TD_CHARACTERBASE_1_API UClass* Z_Construct_UClass_ATD_CharacterBase_1Character();
	TD_CHARACTERBASE_1_API UClass* Z_Construct_UClass_ATD_CharacterBase_1Character_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TD_CharacterBase_1();
// End Cross Module References
	void ATD_CharacterBase_1Character::StaticRegisterNativesATD_CharacterBase_1Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATD_CharacterBase_1Character);
	UClass* Z_Construct_UClass_ATD_CharacterBase_1Character_NoRegister()
	{
		return ATD_CharacterBase_1Character::StaticClass();
	}
	struct Z_Construct_UClass_ATD_CharacterBase_1Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashTimeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashTimeDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TD_CharacterBase_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TD_CharacterBase_1Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TD_CharacterBase_1Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDistance_MetaData[] = {
		{ "Category", "TD_CharacterBase_1Character" },
		{ "ModuleRelativePath", "TD_CharacterBase_1Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1Character, DashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDistance_MetaData), Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDuration_MetaData[] = {
		{ "Category", "TD_CharacterBase_1Character" },
		{ "ModuleRelativePath", "TD_CharacterBase_1Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDuration = { "DashDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1Character, DashDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDuration_MetaData), Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashTimeDelay_MetaData[] = {
		{ "Category", "TD_CharacterBase_1Character" },
		{ "ModuleRelativePath", "TD_CharacterBase_1Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashTimeDelay = { "DashTimeDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1Character, DashTimeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashTimeDelay_MetaData), Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashTimeDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TD_CharacterBase_1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TD_CharacterBase_1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_DashTimeDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATD_CharacterBase_1Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::ClassParams = {
		&ATD_CharacterBase_1Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATD_CharacterBase_1Character()
	{
		if (!Z_Registration_Info_UClass_ATD_CharacterBase_1Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATD_CharacterBase_1Character.OuterSingleton, Z_Construct_UClass_ATD_CharacterBase_1Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATD_CharacterBase_1Character.OuterSingleton;
	}
	template<> TD_CHARACTERBASE_1_API UClass* StaticClass<ATD_CharacterBase_1Character>()
	{
		return ATD_CharacterBase_1Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATD_CharacterBase_1Character);
	ATD_CharacterBase_1Character::~ATD_CharacterBase_1Character() {}
	struct Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATD_CharacterBase_1Character, ATD_CharacterBase_1Character::StaticClass, TEXT("ATD_CharacterBase_1Character"), &Z_Registration_Info_UClass_ATD_CharacterBase_1Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATD_CharacterBase_1Character), 2254116248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1Character_h_1937025841(TEXT("/Script/TD_CharacterBase_1"),
		Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
