// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASISTIVNA_AsistivnaBall_generated_h
#error "AsistivnaBall.generated.h already included, missing '#pragma once' in AsistivnaBall.h"
#endif
#define ASISTIVNA_AsistivnaBall_generated_h

#define asistivna_Source_Asistivna_AsistivnaBall_h_12_SPARSE_DATA
#define asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBarCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBarCounter(); \
		P_NATIVE_END; \
	}


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBarCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBarCounter(); \
		P_NATIVE_END; \
	}


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsistivnaBall(); \
	friend struct Z_Construct_UClass_AAsistivnaBall_Statics; \
public: \
	DECLARE_CLASS(AAsistivnaBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(AAsistivnaBall)


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAsistivnaBall(); \
	friend struct Z_Construct_UClass_AAsistivnaBall_Statics; \
public: \
	DECLARE_CLASS(AAsistivnaBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(AAsistivnaBall)


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsistivnaBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsistivnaBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsistivnaBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsistivnaBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsistivnaBall(AAsistivnaBall&&); \
	NO_API AAsistivnaBall(const AAsistivnaBall&); \
public:


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsistivnaBall(AAsistivnaBall&&); \
	NO_API AAsistivnaBall(const AAsistivnaBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsistivnaBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsistivnaBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsistivnaBall)


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(AAsistivnaBall, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AAsistivnaBall, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAsistivnaBall, Camera); } \
	FORCEINLINE static uint32 __PPO__BallClass() { return STRUCT_OFFSET(AAsistivnaBall, BallClass); }


#define asistivna_Source_Asistivna_AsistivnaBall_h_9_PROLOG
#define asistivna_Source_Asistivna_AsistivnaBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_PRIVATE_PROPERTY_OFFSET \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_SPARSE_DATA \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define asistivna_Source_Asistivna_AsistivnaBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_PRIVATE_PROPERTY_OFFSET \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_SPARSE_DATA \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS_NO_PURE_DECLS \
	asistivna_Source_Asistivna_AsistivnaBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASISTIVNA_API UClass* StaticClass<class AAsistivnaBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID asistivna_Source_Asistivna_AsistivnaBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
