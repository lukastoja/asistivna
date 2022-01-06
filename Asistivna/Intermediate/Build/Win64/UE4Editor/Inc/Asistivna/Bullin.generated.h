// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASISTIVNA_Bullin_generated_h
#error "Bullin.generated.h already included, missing '#pragma once' in Bullin.h"
#endif
#define ASISTIVNA_Bullin_generated_h

#define Asistivna_Source_Asistivna_Bullin_h_12_SPARSE_DATA
#define Asistivna_Source_Asistivna_Bullin_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyBullin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyBullin(); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_Bullin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyBullin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyBullin(); \
		P_NATIVE_END; \
	}


#define Asistivna_Source_Asistivna_Bullin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullin(); \
	friend struct Z_Construct_UClass_ABullin_Statics; \
public: \
	DECLARE_CLASS(ABullin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(ABullin)


#define Asistivna_Source_Asistivna_Bullin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullin(); \
	friend struct Z_Construct_UClass_ABullin_Statics; \
public: \
	DECLARE_CLASS(ABullin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asistivna"), NO_API) \
	DECLARE_SERIALIZER(ABullin)


#define Asistivna_Source_Asistivna_Bullin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullin(ABullin&&); \
	NO_API ABullin(const ABullin&); \
public:


#define Asistivna_Source_Asistivna_Bullin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullin(ABullin&&); \
	NO_API ABullin(const ABullin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullin)


#define Asistivna_Source_Asistivna_Bullin_h_12_PRIVATE_PROPERTY_OFFSET
#define Asistivna_Source_Asistivna_Bullin_h_9_PROLOG
#define Asistivna_Source_Asistivna_Bullin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_Bullin_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_Bullin_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_Bullin_h_12_RPC_WRAPPERS \
	Asistivna_Source_Asistivna_Bullin_h_12_INCLASS \
	Asistivna_Source_Asistivna_Bullin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asistivna_Source_Asistivna_Bullin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asistivna_Source_Asistivna_Bullin_h_12_PRIVATE_PROPERTY_OFFSET \
	Asistivna_Source_Asistivna_Bullin_h_12_SPARSE_DATA \
	Asistivna_Source_Asistivna_Bullin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_Bullin_h_12_INCLASS_NO_PURE_DECLS \
	Asistivna_Source_Asistivna_Bullin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASISTIVNA_API UClass* StaticClass<class ABullin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asistivna_Source_Asistivna_Bullin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
