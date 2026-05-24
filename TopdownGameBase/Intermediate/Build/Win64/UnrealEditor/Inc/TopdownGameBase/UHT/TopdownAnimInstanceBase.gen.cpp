// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownGameBase/Public/TopdownAnimInstanceBase.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopdownAnimInstanceBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TOPDOWNGAMEBASE_API UClass* Z_Construct_UClass_UTopdownAnimInstanceBase();
	TOPDOWNGAMEBASE_API UClass* Z_Construct_UClass_UTopdownAnimInstanceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopdownGameBase();
// End Cross Module References
	void UTopdownAnimInstanceBase::StaticRegisterNativesUTopdownAnimInstanceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopdownAnimInstanceBase);
	UClass* Z_Construct_UClass_UTopdownAnimInstanceBase_NoRegister()
	{
		return UTopdownAnimInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UTopdownAnimInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TopdownGameBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TopdownAnimInstanceBase.h" },
		{ "ModuleRelativePath", "Public/TopdownAnimInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TopdownAnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopdownAnimInstanceBase, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TopdownAnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UTopdownAnimInstanceBase*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTopdownAnimInstanceBase), &Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir_MetaData), Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::NewProp_bIsInAir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopdownAnimInstanceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::ClassParams = {
		&UTopdownAnimInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTopdownAnimInstanceBase()
	{
		if (!Z_Registration_Info_UClass_UTopdownAnimInstanceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopdownAnimInstanceBase.OuterSingleton, Z_Construct_UClass_UTopdownAnimInstanceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTopdownAnimInstanceBase.OuterSingleton;
	}
	template<> TOPDOWNGAMEBASE_API UClass* StaticClass<UTopdownAnimInstanceBase>()
	{
		return UTopdownAnimInstanceBase::StaticClass();
	}
	UTopdownAnimInstanceBase::UTopdownAnimInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTopdownAnimInstanceBase);
	UTopdownAnimInstanceBase::~UTopdownAnimInstanceBase() {}
	struct Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownAnimInstanceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownAnimInstanceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTopdownAnimInstanceBase, UTopdownAnimInstanceBase::StaticClass, TEXT("UTopdownAnimInstanceBase"), &Z_Registration_Info_UClass_UTopdownAnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopdownAnimInstanceBase), 2742658536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownAnimInstanceBase_h_3290150120(TEXT("/Script/TopdownGameBase"),
		Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownAnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownAnimInstanceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
