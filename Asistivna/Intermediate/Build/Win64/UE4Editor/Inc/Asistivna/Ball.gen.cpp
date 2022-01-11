// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asistivna/Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}
// Cross Module References
	ASISTIVNA_API UClass* Z_Construct_UClass_ABall_NoRegister();
	ASISTIVNA_API UClass* Z_Construct_UClass_ABall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Asistivna();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_ABall_DestroyBall();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABall::StaticRegisterNativesABall()
	{
		UClass* Class = ABall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyBall", &ABall::execDestroyBall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABall_DestroyBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABall_DestroyBall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_DestroyBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "DestroyBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABall_DestroyBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_DestroyBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABall_DestroyBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABall_DestroyBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABall_NoRegister()
	{
		return ABall::StaticClass();
	}
	struct Z_Construct_UClass_ABall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestroyHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presaoBox_MetaData[];
#endif
		static void NewProp_presaoBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_presaoBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static void NewProp_player_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBallP2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBallP2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBallP1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBallP1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABall_DestroyBall, "DestroyBall" }, // 2809000791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_DestroyHandle_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_DestroyHandle = { "DestroyHandle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABall, DestroyHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_DestroyHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_DestroyHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_presaoBox_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	void Z_Construct_UClass_ABall_Statics::NewProp_presaoBox_SetBit(void* Obj)
	{
		((ABall*)Obj)->presaoBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_presaoBox = { "presaoBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABall), &Z_Construct_UClass_ABall_Statics::NewProp_presaoBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_presaoBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_presaoBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_player_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	void Z_Construct_UClass_ABall_Statics::NewProp_player_SetBit(void* Obj)
	{
		((ABall*)Obj)->player = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABall), &Z_Construct_UClass_ABall_Statics::NewProp_player_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP2_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP2 = { "MaterialBallP2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABall, MaterialBallP2), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP1_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP1 = { "MaterialBallP1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABall, MaterialBallP1), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABall, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_Ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_Ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_DestroyHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_presaoBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_MaterialBallP1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Ball,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
		&ABall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABall, 3626756542);
	template<> ASISTIVNA_API UClass* StaticClass<ABall>()
	{
		return ABall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABall(Z_Construct_UClass_ABall, &ABall::StaticClass, TEXT("/Script/Asistivna"), TEXT("ABall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
