// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asistivna/AsistivnaBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsistivnaBall() {}
// Cross Module References
	ASISTIVNA_API UClass* Z_Construct_UClass_AAsistivnaBall_NoRegister();
	ASISTIVNA_API UClass* Z_Construct_UClass_AAsistivnaBall();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Asistivna();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_GetBarCounter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASISTIVNA_API UClass* Z_Construct_UClass_ABall_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAsistivnaBall::StaticRegisterNativesAAsistivnaBall()
	{
		UClass* Class = AAsistivnaBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBarCounter", &AAsistivnaBall::execGetBarCounter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics
	{
		struct AsistivnaBall_eventGetBarCounter_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaBall_eventGetBarCounter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bar" },
		{ "Comment", "/** Widget bar. */" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Widget bar." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "GetBarCounter", nullptr, nullptr, sizeof(AsistivnaBall_eventGetBarCounter_Parms), Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_GetBarCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_GetBarCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsistivnaBall_NoRegister()
	{
		return AAsistivnaBall::StaticClass();
	}
	struct Z_Construct_UClass_AAsistivnaBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BallClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duljina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duljina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_polovica_duljine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_polovica_duljine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brzinaBara_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brzinaBara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BallLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarFaze_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BarFaze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsistivnaBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsistivnaBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsistivnaBall_GetBarCounter, "GetBarCounter" }, // 4292856351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AsistivnaBall.h" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass_MetaData[] = {
		{ "Category", "BallClass" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass = { "BallClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, BallClass), Z_Construct_UClass_ABall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "MainHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_MainHUD_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "MainHud" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_MainHUD = { "MainHUD", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, MainHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_MainHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_MainHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_spawnLocation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_spawnLocation = { "spawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, spawnLocation), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_spawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_spawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_strength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, strength), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Torque to apply when trying to roll ball */" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Torque to apply when trying to roll ball" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_RollTorque = { "RollTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, RollTorque), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_RollTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_RollTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_duljina_MetaData[] = {
		{ "Category", "Bar" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_duljina = { "duljina", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, duljina), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_duljina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_duljina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_polovica_duljine_MetaData[] = {
		{ "Category", "Bar" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_polovica_duljine = { "polovica_duljine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, polovica_duljine), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_polovica_duljine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_polovica_duljine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brzinaBara_MetaData[] = {
		{ "Category", "Bar" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brzinaBara = { "brzinaBara", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, brzinaBara), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brzinaBara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brzinaBara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallLocation_MetaData[] = {
		{ "Category", "Bar" },
		{ "Comment", "/** Bar location*/" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Bar location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallLocation = { "BallLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, BallLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarFaze_MetaData[] = {
		{ "Category", "Bar" },
		{ "Comment", "/** Bar faze*/" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Bar faze" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarFaze = { "BarFaze", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, BarFaze), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarFaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarFaze_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarCounter_MetaData[] = {
		{ "Category", "Bar" },
		{ "Comment", "/** Bar counter*/" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Bar counter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarCounter = { "BarCounter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, BarCounter), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Vertical impulse to apply when pressing jump */" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Vertical impulse to apply when pressing jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_JumpImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Camera to view the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Camera to view the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Spring arm for positioning the camera above the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Spring arm for positioning the camera above the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** StaticMesh used for the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsistivnaBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_MainHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_RollTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_duljina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_polovica_duljine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brzinaBara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarFaze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_JumpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_Ball,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsistivnaBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsistivnaBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsistivnaBall_Statics::ClassParams = {
		&AAsistivnaBall::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsistivnaBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsistivnaBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsistivnaBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsistivnaBall, 1313329114);
	template<> ASISTIVNA_API UClass* StaticClass<AAsistivnaBall>()
	{
		return AAsistivnaBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsistivnaBall(Z_Construct_UClass_AAsistivnaBall, &AAsistivnaBall::StaticClass, TEXT("/Script/Asistivna"), TEXT("AAsistivnaBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsistivnaBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
