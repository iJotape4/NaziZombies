// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaziZombiesProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NAZIZOMBIES_NaziZombiesProjectile_generated_h
#error "NaziZombiesProjectile.generated.h already included, missing '#pragma once' in NaziZombiesProjectile.h"
#endif
#define NAZIZOMBIES_NaziZombiesProjectile_generated_h

#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaziZombiesProjectile(); \
	friend struct Z_Construct_UClass_ANaziZombiesProjectile_Statics; \
public: \
	DECLARE_CLASS(ANaziZombiesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaziZombies"), NO_API) \
	DECLARE_SERIALIZER(ANaziZombiesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANaziZombiesProjectile(ANaziZombiesProjectile&&); \
	ANaziZombiesProjectile(const ANaziZombiesProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaziZombiesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaziZombiesProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaziZombiesProjectile) \
	NO_API virtual ~ANaziZombiesProjectile();


#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_12_PROLOG
#define FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAZIZOMBIES_API UClass* StaticClass<class ANaziZombiesProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
