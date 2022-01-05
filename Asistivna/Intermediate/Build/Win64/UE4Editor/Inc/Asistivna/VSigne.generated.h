// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ASISTIVNA_VSigne_generated_h
#error "VSigne.generated.h already included, missing '#pragma once' in VSigne.h"
#endif
#define ASISTIVNA_VSigne_generated_h

#define Asistivna_Source_Asistivna_VSigne_h_12_SPARSE_DATA
#define Asistivna_Source_Asistivna_VSigne_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_VSigne_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_VSigne_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVSigne(); \
	friend struct Z_Construct_UClass_AVSigne_Statics; \
public: \
	DECLARE_CLASS(AVSigne, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(AVSigne)


#define Asistivna_Source_Asistivna_VSigne_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVSigne(); \
	friend struct Z_Construct_UClass_AVSigne_Statics; \
public: \
	DECLARE_CLASS(AVSigne, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(AVSigne)


#define Asistivna_Source_Asistivna_VSigne_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVSigne(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVSigne) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVSigne); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVSigne); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVSigne(AVSigne&&); \
	NO_API AVSigne(const AVSigne&); \
public:


#define Asistivna_Source_Asistivna_VSigne_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVSigne(AVSigne&&); \
	NO_API AVSigne(const AVSigne&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVSigne); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVSigne); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVSigne)


#define Asistivna_Source_Asistivna_VSigne_h_12_PRIVATE_PROPERTY_OFFSET
#define Asistivna_Source_Asistivna_VSigne_h_9_PROLOG
#define Asistivna_Source_Asistivna_VSigne_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_VSigne_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_VSigne_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_VSigne_h_12_RPC_WRAPPERS \
	Asistivna_Source_Asistivna_VSigne_h_12_INCLASS \
	Asistivna_Source_Asistivna_VSigne_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asistivna_Source_Asistivna_VSigne_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_VSigne_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_VSigne_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_VSigne_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_VSigne_h_12_INCLASS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_VSigne_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASISTIVNA_API UClass* StaticClass<class AVSigne>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asistivna_Source_Asistivna_VSigne_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
