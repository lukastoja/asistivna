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
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsistivnaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AsistivnaGameMode.h" },
		{ "ModuleRelativePath", "AsistivnaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
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
		nullptr,
		Z_Construct_UClass_AAsistivnaGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AAsistivnaGameMode, 3853918719);
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
