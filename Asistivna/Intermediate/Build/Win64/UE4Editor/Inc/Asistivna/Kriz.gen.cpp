// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asistivna/Kriz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKriz() {}
// Cross Module References
	ASISTIVNA_API UClass* Z_Construct_UClass_AKriz_NoRegister();
	ASISTIVNA_API UClass* Z_Construct_UClass_AKriz();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Asistivna();
// End Cross Module References
	void AKriz::StaticRegisterNativesAKriz()
	{
	}
	UClass* Z_Construct_UClass_AKriz_NoRegister()
	{
		return AKriz::StaticClass();
	}
	struct Z_Construct_UClass_AKriz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKriz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKriz_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kriz.h" },
		{ "ModuleRelativePath", "Kriz.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKriz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKriz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKriz_Statics::ClassParams = {
		&AKriz::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKriz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKriz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKriz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKriz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKriz, 1969290020);
	template<> ASISTIVNA_API UClass* StaticClass<AKriz>()
	{
		return AKriz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKriz(Z_Construct_UClass_AKriz, &AKriz::StaticClass, TEXT("/Script/Asistivna"), TEXT("AKriz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKriz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
