// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaziZombies/NaziZombiesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaziZombiesGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NAZIZOMBIES_API UClass* Z_Construct_UClass_ANaziZombiesGameMode();
NAZIZOMBIES_API UClass* Z_Construct_UClass_ANaziZombiesGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NaziZombies();
// End Cross Module References

// Begin Class ANaziZombiesGameMode
void ANaziZombiesGameMode::StaticRegisterNativesANaziZombiesGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaziZombiesGameMode);
UClass* Z_Construct_UClass_ANaziZombiesGameMode_NoRegister()
{
	return ANaziZombiesGameMode::StaticClass();
}
struct Z_Construct_UClass_ANaziZombiesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NaziZombiesGameMode.h" },
		{ "ModuleRelativePath", "NaziZombiesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaziZombiesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANaziZombiesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NaziZombies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANaziZombiesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaziZombiesGameMode_Statics::ClassParams = {
	&ANaziZombiesGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANaziZombiesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANaziZombiesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANaziZombiesGameMode()
{
	if (!Z_Registration_Info_UClass_ANaziZombiesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaziZombiesGameMode.OuterSingleton, Z_Construct_UClass_ANaziZombiesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANaziZombiesGameMode.OuterSingleton;
}
template<> NAZIZOMBIES_API UClass* StaticClass<ANaziZombiesGameMode>()
{
	return ANaziZombiesGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANaziZombiesGameMode);
ANaziZombiesGameMode::~ANaziZombiesGameMode() {}
// End Class ANaziZombiesGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANaziZombiesGameMode, ANaziZombiesGameMode::StaticClass, TEXT("ANaziZombiesGameMode"), &Z_Registration_Info_UClass_ANaziZombiesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaziZombiesGameMode), 3757537167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesGameMode_h_3772997644(TEXT("/Script/NaziZombies"),
	Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
