// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_CharacterBase_1/TD_CharacterBase_1PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_CharacterBase_1PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TD_CHARACTERBASE_1_API UClass* Z_Construct_UClass_ATD_CharacterBase_1PlayerController();
	TD_CHARACTERBASE_1_API UClass* Z_Construct_UClass_ATD_CharacterBase_1PlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TD_CharacterBase_1();
// End Cross Module References
	void ATD_CharacterBase_1PlayerController::StaticRegisterNativesATD_CharacterBase_1PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATD_CharacterBase_1PlayerController);
	UClass* Z_Construct_UClass_ATD_CharacterBase_1PlayerController_NoRegister()
	{
		return ATD_CharacterBase_1PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Teleporting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Teleporting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TD_CharacterBase_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TD_CharacterBase_1PlayerController.h" },
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_FXCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationClickAction_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationClickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Dash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Dash = { "Dash", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, Dash), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Dash_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Dash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Teleporting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TD_CharacterBase_1PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Teleporting = { "Teleporting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATD_CharacterBase_1PlayerController, Teleporting), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Teleporting_MetaData), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Teleporting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_SetDestinationTouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Dash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::NewProp_Teleporting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATD_CharacterBase_1PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::ClassParams = {
		&ATD_CharacterBase_1PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATD_CharacterBase_1PlayerController()
	{
		if (!Z_Registration_Info_UClass_ATD_CharacterBase_1PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATD_CharacterBase_1PlayerController.OuterSingleton, Z_Construct_UClass_ATD_CharacterBase_1PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATD_CharacterBase_1PlayerController.OuterSingleton;
	}
	template<> TD_CHARACTERBASE_1_API UClass* StaticClass<ATD_CharacterBase_1PlayerController>()
	{
		return ATD_CharacterBase_1PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATD_CharacterBase_1PlayerController);
	ATD_CharacterBase_1PlayerController::~ATD_CharacterBase_1PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATD_CharacterBase_1PlayerController, ATD_CharacterBase_1PlayerController::StaticClass, TEXT("ATD_CharacterBase_1PlayerController"), &Z_Registration_Info_UClass_ATD_CharacterBase_1PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATD_CharacterBase_1PlayerController), 2332830416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1PlayerController_h_994794946(TEXT("/Script/TD_CharacterBase_1"),
		Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micha_OneDrive_Documents_Unreal_Projects_TD_CharacterBase_1_Source_TD_CharacterBase_1_TD_CharacterBase_1PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
