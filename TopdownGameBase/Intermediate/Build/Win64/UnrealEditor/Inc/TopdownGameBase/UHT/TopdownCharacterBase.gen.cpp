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
	DEFINE_FUNCTION(ATopdownCharacterBase::execServerCallEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCallEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopdownCharacterBase::execServerCallSprintDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCallSprintDone_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopdownCharacterBase::execServerCallSprintStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCallSprintStart_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATopdownCharacterBase_ServerCallEquip = FName(TEXT("ServerCallEquip"));
	void ATopdownCharacterBase::ServerCallEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATopdownCharacterBase_ServerCallEquip),NULL);
	}
	static FName NAME_ATopdownCharacterBase_ServerCallSprintDone = FName(TEXT("ServerCallSprintDone"));
	void ATopdownCharacterBase::ServerCallSprintDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATopdownCharacterBase_ServerCallSprintDone),NULL);
	}
	static FName NAME_ATopdownCharacterBase_ServerCallSprintStart = FName(TEXT("ServerCallSprintStart"));
	void ATopdownCharacterBase::ServerCallSprintStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATopdownCharacterBase_ServerCallSprintStart),NULL);
	}
	void ATopdownCharacterBase::StaticRegisterNativesATopdownCharacterBase()
	{
		UClass* Class = ATopdownCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerCallEquip", &ATopdownCharacterBase::execServerCallEquip },
			{ "ServerCallSprintDone", &ATopdownCharacterBase::execServerCallSprintDone },
			{ "ServerCallSprintStart", &ATopdownCharacterBase::execServerCallSprintStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacterBase, nullptr, "ServerCallEquip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacterBase, nullptr, "ServerCallSprintDone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Server- Action Func.\n" },
#endif
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server- Action Func." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacterBase, nullptr, "ServerCallSprintStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopdownCharacterBase);
	UClass* Z_Construct_UClass_ATopdownCharacterBase_NoRegister()
	{
		return ATopdownCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATopdownCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[];
#endif
		static void NewProp_bIsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopdownCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopdownGameBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopdownCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopdownCharacterBase_ServerCallEquip, "ServerCallEquip" }, // 690817767
		{ &Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintDone, "ServerCallSprintDone" }, // 3897840786
		{ &Z_Construct_UFunction_ATopdownCharacterBase_ServerCallSprintStart, "ServerCallSprintStart" }, // 2262152438
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TopdownCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning_SetBit(void* Obj)
	{
		((ATopdownCharacterBase*)Obj)->bIsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATopdownCharacterBase), &Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning_MetaData), Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopdownCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacterBase_Statics::NewProp_bIsRunning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopdownCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopdownCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopdownCharacterBase_Statics::ClassParams = {
		&ATopdownCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopdownCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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

	void ATopdownCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsRunning(TEXT("bIsRunning"));

		const bool bIsValid = true
			&& Name_bIsRunning == ClassReps[(int32)ENetFields_Private::bIsRunning].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATopdownCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopdownCharacterBase);
	ATopdownCharacterBase::~ATopdownCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopdownCharacterBase, ATopdownCharacterBase::StaticClass, TEXT("ATopdownCharacterBase"), &Z_Registration_Info_UClass_ATopdownCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopdownCharacterBase), 2246606360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_2770155555(TEXT("/Script/TopdownGameBase"),
		Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wonji_Desktop_UEProjects_UntilWeGoing_Plugins_TopdownGameBase_Source_TopdownGameBase_Public_TopdownCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
