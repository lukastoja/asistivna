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
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_BallRoll();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_BallThrow();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_BullinRoll();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_ChangeActionString();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_GetBarCounter();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_GetBarFaze();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_GetPlayer();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_KrajRunde();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_SetLineVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_SetPlayer();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_AAsistivnaBall_SetThrowVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASISTIVNA_API UClass* Z_Construct_UClass_ABullin_NoRegister();
	ASISTIVNA_API UClass* Z_Construct_UClass_ABall_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAsistivnaBall::StaticRegisterNativesAAsistivnaBall()
	{
		UClass* Class = AAsistivnaBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BallRoll", &AAsistivnaBall::execBallRoll },
			{ "BallThrow", &AAsistivnaBall::execBallThrow },
			{ "BullinRoll", &AAsistivnaBall::execBullinRoll },
			{ "ChangeActionString", &AAsistivnaBall::execChangeActionString },
			{ "DecreaseBarFaze", &AAsistivnaBall::execDecreaseBarFaze },
			{ "GetBarCounter", &AAsistivnaBall::execGetBarCounter },
			{ "GetBarFaze", &AAsistivnaBall::execGetBarFaze },
			{ "GetLineAngleSpeed", &AAsistivnaBall::execGetLineAngleSpeed },
			{ "GetPlayer", &AAsistivnaBall::execGetPlayer },
			{ "IncreaseBarFaze", &AAsistivnaBall::execIncreaseBarFaze },
			{ "KrajRunde", &AAsistivnaBall::execKrajRunde },
			{ "SetLineVector", &AAsistivnaBall::execSetLineVector },
			{ "SetPlayer", &AAsistivnaBall::execSetPlayer },
			{ "SetThrowVector", &AAsistivnaBall::execSetThrowVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsistivnaBall_BallRoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_BallRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "BallRoll" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_BallRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "BallRoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_BallRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_BallRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_BallRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_BallRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_BallThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_BallThrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "BallThrow" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_BallThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "BallThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_BallThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_BallThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_BallThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_BallThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_BullinRoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_BullinRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "BullinRoll" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_BullinRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "BullinRoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_BullinRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_BullinRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_BullinRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_BullinRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_ChangeActionString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_ChangeActionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionString" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_ChangeActionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "ChangeActionString", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_ChangeActionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_ChangeActionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_ChangeActionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_ChangeActionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "BarFaze" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "DecreaseBarFaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics
	{
		struct AsistivnaBall_eventGetBarFaze_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaBall_eventGetBarFaze_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "BarFaze" },
		{ "Comment", "/** Bar Faze. */" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Bar Faze." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "GetBarFaze", nullptr, nullptr, sizeof(AsistivnaBall_eventGetBarFaze_Parms), Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_GetBarFaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_GetBarFaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics
	{
		struct AsistivnaBall_eventGetLineAngleSpeed_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaBall_eventGetLineAngleSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineAngle" },
		{ "Comment", "/** Line Angle. */" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Line Angle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "GetLineAngleSpeed", nullptr, nullptr, sizeof(AsistivnaBall_eventGetLineAngleSpeed_Parms), Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics
	{
		struct AsistivnaBall_eventGetPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AsistivnaBall_eventGetPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsistivnaBall_eventGetPlayer_Parms), &Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "GetPlayer", nullptr, nullptr, sizeof(AsistivnaBall_eventGetPlayer_Parms), Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_GetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_GetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "BarFaze" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "IncreaseBarFaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_KrajRunde_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_KrajRunde_Statics::Function_MetaDataParams[] = {
		{ "Category", "ResetMap" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_KrajRunde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "KrajRunde", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_KrajRunde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_KrajRunde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_KrajRunde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_KrajRunde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics
	{
		struct AsistivnaBall_eventSetLineVector_Parms
		{
			FVector VectorLine;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::NewProp_VectorLine = { "VectorLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaBall_eventSetLineVector_Parms, VectorLine), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::NewProp_VectorLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Line" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "SetLineVector", nullptr, nullptr, sizeof(AsistivnaBall_eventSetLineVector_Parms), Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_SetLineVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_SetLineVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics
	{
		struct AsistivnaBall_eventSetPlayer_Parms
		{
			bool new_player;
		};
		static void NewProp_new_player_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_new_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::NewProp_new_player_SetBit(void* Obj)
	{
		((AsistivnaBall_eventSetPlayer_Parms*)Obj)->new_player = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::NewProp_new_player = { "new_player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsistivnaBall_eventSetPlayer_Parms), &Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::NewProp_new_player_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::NewProp_new_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "SetPlayer", nullptr, nullptr, sizeof(AsistivnaBall_eventSetPlayer_Parms), Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_SetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_SetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics
	{
		struct AsistivnaBall_eventSetThrowVector_Parms
		{
			FVector VectorLine;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::NewProp_VectorLine = { "VectorLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsistivnaBall_eventSetThrowVector_Parms, VectorLine), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::NewProp_VectorLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Line" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsistivnaBall, nullptr, "SetThrowVector", nullptr, nullptr, sizeof(AsistivnaBall_eventSetThrowVector_Parms), Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsistivnaBall_SetThrowVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsistivnaBall_SetThrowVector_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BullinClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BullinClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BallClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_throwIt_MetaData[];
#endif
		static void NewProp_throwIt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_throwIt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstBall_MetaData[];
#endif
		static void NewProp_firstBall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_firstBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentString_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brLopti2_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_brLopti2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brLopti1_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_brLopti1;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LineAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VratiKameru_MetaData[];
#endif
		static void NewProp_VratiKameru_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VratiKameru;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PratiKameru_MetaData[];
#endif
		static void NewProp_PratiKameru_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PratiKameru;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static void NewProp_player_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_player;
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
		{ &Z_Construct_UFunction_AAsistivnaBall_BallRoll, "BallRoll" }, // 221396843
		{ &Z_Construct_UFunction_AAsistivnaBall_BallThrow, "BallThrow" }, // 1169921777
		{ &Z_Construct_UFunction_AAsistivnaBall_BullinRoll, "BullinRoll" }, // 287378600
		{ &Z_Construct_UFunction_AAsistivnaBall_ChangeActionString, "ChangeActionString" }, // 3650507152
		{ &Z_Construct_UFunction_AAsistivnaBall_DecreaseBarFaze, "DecreaseBarFaze" }, // 3542689062
		{ &Z_Construct_UFunction_AAsistivnaBall_GetBarCounter, "GetBarCounter" }, // 4292856351
		{ &Z_Construct_UFunction_AAsistivnaBall_GetBarFaze, "GetBarFaze" }, // 4155991262
		{ &Z_Construct_UFunction_AAsistivnaBall_GetLineAngleSpeed, "GetLineAngleSpeed" }, // 3385417910
		{ &Z_Construct_UFunction_AAsistivnaBall_GetPlayer, "GetPlayer" }, // 214213188
		{ &Z_Construct_UFunction_AAsistivnaBall_IncreaseBarFaze, "IncreaseBarFaze" }, // 3847940586
		{ &Z_Construct_UFunction_AAsistivnaBall_KrajRunde, "KrajRunde" }, // 1010505555
		{ &Z_Construct_UFunction_AAsistivnaBall_SetLineVector, "SetLineVector" }, // 3505750861
		{ &Z_Construct_UFunction_AAsistivnaBall_SetPlayer, "SetPlayer" }, // 1262234526
		{ &Z_Construct_UFunction_AAsistivnaBall_SetThrowVector, "SetThrowVector" }, // 4055427086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AsistivnaBall.h" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BullinClass_MetaData[] = {
		{ "Category", "BullinClass" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BullinClass = { "BullinClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, BullinClass), Z_Construct_UClass_ABullin_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BullinClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BullinClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass_MetaData[] = {
		{ "Category", "BallClass" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass = { "BallClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, BallClass), Z_Construct_UClass_ABall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt_MetaData[] = {
		{ "Category", "throw" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	void Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt_SetBit(void* Obj)
	{
		((AAsistivnaBall*)Obj)->throwIt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt = { "throwIt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAsistivnaBall), &Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall_MetaData[] = {
		{ "Category", "bulin" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	void Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall_SetBit(void* Obj)
	{
		((AAsistivnaBall*)Obj)->firstBall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall = { "firstBall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAsistivnaBall), &Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_currentString_MetaData[] = {
		{ "Category", "ActionString" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_currentString = { "currentString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, currentString), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_currentString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_currentString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti2_MetaData[] = {
		{ "Category", "brLopti" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti2 = { "brLopti2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, brLopti2), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti1_MetaData[] = {
		{ "Category", "brLopti" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti1 = { "brLopti1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, brLopti1), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti1_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_LineAngle_MetaData[] = {
		{ "Category", "Line" },
		{ "Comment", "/** Line angle*/" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
		{ "ToolTip", "Line angle" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_LineAngle = { "LineAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsistivnaBall, LineAngle), METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_LineAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_LineAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru_MetaData[] = {
		{ "Category", "Kamera" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	void Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru_SetBit(void* Obj)
	{
		((AAsistivnaBall*)Obj)->VratiKameru = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru = { "VratiKameru", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAsistivnaBall), &Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru_MetaData[] = {
		{ "Category", "Kamera" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	void Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru_SetBit(void* Obj)
	{
		((AAsistivnaBall*)Obj)->PratiKameru = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru = { "PratiKameru", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAsistivnaBall), &Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "AsistivnaBall.h" },
	};
#endif
	void Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player_SetBit(void* Obj)
	{
		((AAsistivnaBall*)Obj)->player = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAsistivnaBall), &Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BullinClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_throwIt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_firstBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_currentString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brLopti1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_MainHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_RollTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_LineAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_VratiKameru,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_PratiKameru,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_duljina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_polovica_duljine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_brzinaBara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BallLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarFaze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_BarCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsistivnaBall_Statics::NewProp_player,
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
	IMPLEMENT_CLASS(AAsistivnaBall, 1195831193);
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
