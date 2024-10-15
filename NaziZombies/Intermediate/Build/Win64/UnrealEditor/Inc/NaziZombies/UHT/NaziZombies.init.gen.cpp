// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaziZombies_init() {}
	NAZIZOMBIES_API UFunction* Z_Construct_UDelegateFunction_NaziZombies_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NaziZombies;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NaziZombies()
	{
		if (!Z_Registration_Info_UPackage__Script_NaziZombies.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NaziZombies_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NaziZombies",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1B80A3F8,
				0x24B7D5D9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NaziZombies.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NaziZombies.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NaziZombies(Z_Construct_UPackage__Script_NaziZombies, TEXT("/Script/NaziZombies"), Z_Registration_Info_UPackage__Script_NaziZombies, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1B80A3F8, 0x24B7D5D9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
