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
// End Cross Module References
	void ABullin::StaticRegisterNativesABullin()
	{
	}
	UClass* Z_Construct_UClass_ABullin_NoRegister()
	{
		return ABullin::StaticClass();
	}
	struct Z_Construct_UClass_ABullin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bullin.h" },
		{ "ModuleRelativePath", "Bullin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullin_Statics::ClassParams = {
		&ABullin::StaticClass,
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
	IMPLEMENT_CLASS(ABullin, 1402164494);
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
