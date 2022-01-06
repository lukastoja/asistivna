// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asistivna/Bullin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullin() {}
// Cross Module References
	ASISTIVNA_API UClass* Z_Construct_UClass_ABullin_NoRegister();
	ASISTIVNA_API UClass* Z_Construct_UClass_ABullin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Asistivna();
	ASISTIVNA_API UFunction* Z_Construct_UFunction_ABullin_DestroyBullin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABullin::StaticRegisterNativesABullin()
	{
		UClass* Class = ABullin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyBullin", &ABullin::execDestroyBullin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABullin_DestroyBullin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABullin_DestroyBullin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bullin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullin_DestroyBullin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullin, nullptr, "DestroyBullin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABullin_DestroyBullin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullin_DestroyBullin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABullin_DestroyBullin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABullin_DestroyBullin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABullin_NoRegister()
	{
		return ABullin::StaticClass();
	}
	struct Z_Construct_UClass_ABullin_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presaoV_MetaData[];
#endif
		static void NewProp_presaoV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_presaoV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bullin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABullin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullin_DestroyBullin, "DestroyBullin" }, // 2464069677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bullin.h" },
		{ "ModuleRelativePath", "Bullin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullin_Statics::NewProp_DestroyHandle_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Bullin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABullin_Statics::NewProp_DestroyHandle = { "DestroyHandle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullin, DestroyHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABullin_Statics::NewProp_DestroyHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullin_Statics::NewProp_DestroyHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullin_Statics::NewProp_presaoV_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Bullin.h" },
	};
#endif
	void Z_Construct_UClass_ABullin_Statics::NewProp_presaoV_SetBit(void* Obj)
	{
		((ABullin*)Obj)->presaoV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABullin_Statics::NewProp_presaoV = { "presaoV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABullin), &Z_Construct_UClass_ABullin_Statics::NewProp_presaoV_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABullin_Statics::NewProp_presaoV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullin_Statics::NewProp_presaoV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullin_Statics::NewProp_Bullin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bullin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bullin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullin_Statics::NewProp_Bullin = { "Bullin", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullin, Bullin), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullin_Statics::NewProp_Bullin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullin_Statics::NewProp_Bullin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullin_Statics::NewProp_DestroyHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullin_Statics::NewProp_presaoV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullin_Statics::NewProp_Bullin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullin_Statics::ClassParams = {
		&ABullin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABullin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABullin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABullin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABullin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABullin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABullin, 1676971033);
	template<> ASISTIVNA_API UClass* StaticClass<ABullin>()
	{
		return ABullin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullin(Z_Construct_UClass_ABullin, &ABullin::StaticClass, TEXT("/Script/Asistivna"), TEXT("ABullin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
