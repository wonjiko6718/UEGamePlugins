// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownGameBase/Public/TopdownCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopdownCharacterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TOPDOWNGAMEBASE_API UClass* Z_Construct_UClass_ATopdownCharacterBase();
	TOPDOWNGAMEBASE_API UClass* Z_Construct_UClass_ATopdownCharacterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopdownGameBase();
// End Cross Module References
	void ATopdownCharacterBase::StaticRegisterNativesATopdownCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopdownCharacterBase);
	UClass* Z_Construct_UClass_ATopdownCharacterBase_NoRegister()
	{
		return ATopdownCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATopdownCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopdownCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopdownGameBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopdownCharacterBase.h" },
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacterBase, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacterBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopdownCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopdownCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopdownCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopdownCharacterBase_Statics::ClassParams = {
		&ATopdownCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopdownCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopdownCharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATopdownCharacterBase()
	{
		if (!Z_Registration_Info_UClass_ATopdownCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopdownCharacterBase.OuterSingleton, Z_Construct_UClass_ATopdownCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopdownCharacterBase.OuterSingleton;
	}
	template<> TOPDOWNGAMEBASE_API UClass* StaticClass<ATopdownCharacterBase>()
	{
		return ATopdownCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopdownCharacterBase);
	ATopdownCharacterBase::~ATopdownCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopdownCharacterBase, ATopdownCharacterBase::StaticClass, TEXT("ATopdownCharacterBase"), &Z_Registration_Info_UClass_ATopdownCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopdownCharacterBase), 4190458835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_2557087106(TEXT("/Script/TopdownGameBase"),
		Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
