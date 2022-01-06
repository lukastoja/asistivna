// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asistivna/AsistivnaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsistivnaGameMode() {}
// Cross Module References
	ASISTIVNA_API UClass* Z_Construct_UClass_AAsistivnaGameMode_NoRegister();
	ASISTIVNA_API UClass* Z_Construct_UClass_AAsistivnaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Asistivna();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AAsistivnaGameMode::StaticRegisterNativesAAsistivnaGameMode()
	{
		UClass* Class = AAsistivnaGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScoreP1", &AAsistivnaGameMode::execGetScoreP1 },
			{ "GetScoreP2", &AAsistivnaGameMode::execGetScoreP2 },
			{ "PronadjiNajblizuLoptu", &AAsistivnaGameMode::execPronadjiNajblizuLoptu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics
	{
		struct AsistivnaGameMode_eventGetScoreP1_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaGameMode_eventGetScoreP1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::Function_MetaDataParams[] = {
		{ "Category", "score" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaGameMode, nullptr, "GetScoreP1", nullptr, nullptr, sizeof(AsistivnaGameMode_eventGetScoreP1_Parms), Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics
	{
		struct AsistivnaGameMode_eventGetScoreP2_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaGameMode_eventGetScoreP2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::Function_MetaDataParams[] = {
		{ "Category", "score" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaGameMode, nullptr, "GetScoreP2", nullptr, nullptr, sizeof(AsistivnaGameMode_eventGetScoreP2_Parms), Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu_Statics::Function_MetaDataParams[] = {
		{ "Category", "BallDistance" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaGameMode, nullptr, "PronadjiNajblizuLoptu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsistivnaGameMode_NoRegister()
	{
		return AAsistivnaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAsistivnaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundOver_MetaData[];
#endif
		static void NewProp_roundOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_roundOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finalScorep2_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_finalScorep2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finalScorep1_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_finalScorep1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsistivnaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsistivnaGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP1, "GetScoreP1" }, // 473288904
		{ &Z_Construct_UFunction_AAsistivnaGameMode_GetScoreP2, "GetScoreP2" }, // 3155478386
		{ &Z_Construct_UFunction_AAsistivnaGameMode_PronadjiNajblizuLoptu, "PronadjiNajblizuLoptu" }, // 954560639
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AsistivnaGameMode.h" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver_MetaData[] = {
		{ "Category", "finalscore" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver_SetBit(void* Obj)
	{
		((AAsistivnaGameMode*)Obj)->roundOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver = { "roundOver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAsistivnaGameMode), &Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep2_MetaData[] = {
		{ "Category", "finalscore" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep2 = { "finalScorep2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaGameMode, finalScorep2), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep1_MetaData[] = {
		{ "Category", "finalscore" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep1 = { "finalScorep1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaGameMode, finalScorep1), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "MainHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_MainHUD_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "MainHud" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_MainHUD = { "MainHUD", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaGameMode, MainHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_MainHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_MainHUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsistivnaGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_roundOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_finalScorep1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaGameMode_Statics::NewProp_MainHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsistivnaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsistivnaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsistivnaGameMode_Statics::ClassParams = {
		&AAsistivnaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsistivnaGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAsistivnaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsistivnaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsistivnaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsistivnaGameMode, 1027951676);
	template<> ASISTIVNA_API UClass* StaticClass<AAsistivnaGameMode>()
	{
		return AAsistivnaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsistivnaGameMode(Z_Construct_UClass_AAsistivnaGameMode, &AAsistivnaGameMode::StaticClass, TEXT("/Script/Asistivna"), TEXT("AAsistivnaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsistivnaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
