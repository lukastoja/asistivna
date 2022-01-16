// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ASISTIVNA_AsistivnaBall_generated_h
#error "AsistivnaBall.generated.h already included, missing '#pragma once' in AsistivnaBall.h"
#endif
#define ASISTIVNA_AsistivnaBall_generated_h

#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_SPARSE_DATA
#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeActionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeActionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKrajRunde) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KrajRunde(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayer) \
	{ \
		P_GET_UBOOL(Z_Param_new_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayer(Z_Param_new_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBallThrow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BallThrow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBullinRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BullinRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBallRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BallRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrowVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_VectorLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrowVector(Z_Param_VectorLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLineVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_VectorLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLineVector(Z_Param_VectorLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLineAngleSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLineAngleSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseBarFaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseBarFaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseBarFaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseBarFaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBarFaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetBarFaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBarCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBarCounter(); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeActionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeActionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKrajRunde) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KrajRunde(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayer) \
	{ \
		P_GET_UBOOL(Z_Param_new_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayer(Z_Param_new_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBallThrow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BallThrow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBullinRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BullinRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBallRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BallRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrowVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_VectorLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrowVector(Z_Param_VectorLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLineVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_VectorLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLineVector(Z_Param_VectorLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLineAngleSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLineAngleSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseBarFaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseBarFaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseBarFaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseBarFaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBarFaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetBarFaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBarCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBarCounter(); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsistivnaBall(); \
	friend struct Z_Construct_UClass_AAsistivnaBall_Statics; \
public: \
	DECLARE_CLASS(AAsistivnaBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(AAsistivnaBall)


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAsistivnaBall(); \
	friend struct Z_Construct_UClass_AAsistivnaBall_Statics; \
public: \
	DECLARE_CLASS(AAsistivnaBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(AAsistivnaBall)


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_STANDARD_CONSTRUCTORS \
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


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsistivnaBall(AAsistivnaBall&&); \
	NO_API AAsistivnaBall(const AAsistivnaBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsistivnaBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsistivnaBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsistivnaBall)


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(AAsistivnaBall, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AAsistivnaBall, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAsistivnaBall, Camera); } \
	FORCEINLINE static uint32 __PPO__BallClass() { return STRUCT_OFFSET(AAsistivnaBall, BallClass); } \
	FORCEINLINE static uint32 __PPO__BullinClass() { return STRUCT_OFFSET(AAsistivnaBall, BullinClass); }


#define Asistivna_Source_Asistivna_AsistivnaBall_h_9_PROLOG
#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asistivna_Source_Asistivna_AsistivnaBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_INCLASS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_AsistivnaBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASISTIVNA_API UClass* StaticClass<class AAsistivnaBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asistivna_Source_Asistivna_AsistivnaBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
