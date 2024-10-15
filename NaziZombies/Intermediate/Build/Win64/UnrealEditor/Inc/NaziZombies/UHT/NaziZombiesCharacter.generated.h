// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaziZombiesCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAZIZOMBIES_NaziZombiesCharacter_generated_h
#error "NaziZombiesCharacter.generated.h already included, missing '#pragma once' in NaziZombiesCharacter.h"
#endif
#define NAZIZOMBIES_NaziZombiesCharacter_generated_h

#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaziZombiesCharacter(); \
	friend struct Z_Construct_UClass_ANaziZombiesCharacter_Statics; \
public: \
	DECLARE_CLASS(ANaziZombiesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaziZombies"), NO_API) \
	DECLARE_SERIALIZER(ANaziZombiesCharacter)


#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANaziZombiesCharacter(ANaziZombiesCharacter&&); \
	ANaziZombiesCharacter(const ANaziZombiesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaziZombiesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaziZombiesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaziZombiesCharacter) \
	NO_API virtual ~ANaziZombiesCharacter();


#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_19_PROLOG
#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAZIZOMBIES_API UClass* StaticClass<class ANaziZombiesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
