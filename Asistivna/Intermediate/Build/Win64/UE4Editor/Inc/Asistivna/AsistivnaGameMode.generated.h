// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASISTIVNA_AsistivnaGameMode_generated_h
#error "AsistivnaGameMode.generated.h already included, missing '#pragma once' in AsistivnaGameMode.h"
#endif
#define ASISTIVNA_AsistivnaGameMode_generated_h

#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_SPARSE_DATA
#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScoreP2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScoreP2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScoreP1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScoreP1(); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScoreP2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScoreP2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScoreP1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScoreP1(); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsistivnaGameMode(); \
	friend struct Z_Construct_UClass_AAsistivnaGameMode_Statics; \
public: \
	DECLARE_CLASS(AAsistivnaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), ASISTIVNA_API) \
	DECLARE_SERIALIZER(AAsistivnaGameMode)


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAsistivnaGameMode(); \
	friend struct Z_Construct_UClass_AAsistivnaGameMode_Statics; \
public: \
	DECLARE_CLASS(AAsistivnaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), ASISTIVNA_API) \
	DECLARE_SERIALIZER(AAsistivnaGameMode)


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASISTIVNA_API AAsistivnaGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsistivnaGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASISTIVNA_API, AAsistivnaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsistivnaGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASISTIVNA_API AAsistivnaGameMode(AAsistivnaGameMode&&); \
	ASISTIVNA_API AAsistivnaGameMode(const AAsistivnaGameMode&); \
public:


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASISTIVNA_API AAsistivnaGameMode(AAsistivnaGameMode&&); \
	ASISTIVNA_API AAsistivnaGameMode(const AAsistivnaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASISTIVNA_API, AAsistivnaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsistivnaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsistivnaGameMode)


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_9_PROLOG
#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_RPC_WRAPPERS \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_INCLASS \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_AsistivnaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASISTIVNA_API UClass* StaticClass<class AAsistivnaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asistivna_Source_Asistivna_AsistivnaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
