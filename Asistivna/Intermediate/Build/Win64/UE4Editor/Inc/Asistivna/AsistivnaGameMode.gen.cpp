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
// End Cross Module References
	void AAsistivnaGameMode::StaticRegisterNativesAAsistivnaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAsistivnaGameMode_NoRegister()
	{
		return AAsistivnaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAsistivnaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsistivnaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Asistivna,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AsistivnaGameMode.h" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsistivnaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsistivnaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsistivnaGameMode_Statics::ClassParams = {
		&AAsistivnaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AAsistivnaGameMode, 4118528325);
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
