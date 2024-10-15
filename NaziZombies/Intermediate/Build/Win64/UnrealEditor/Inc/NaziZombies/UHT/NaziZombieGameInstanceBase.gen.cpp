// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaziZombies/Public/NaziZombie/Game/NaziZombieGameInstanceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaziZombieGameInstanceBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NAZIZOMBIES_API UClass* Z_Construct_UClass_UNaziZombieGameInstanceBase();
NAZIZOMBIES_API UClass* Z_Construct_UClass_UNaziZombieGameInstanceBase_NoRegister();
NAZIZOMBIES_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
UPackage* Z_Construct_UPackage__Script_NaziZombies();
// End Cross Module References

// Begin ScriptStruct FMapInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapInfo;
class UScriptStruct* FMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapInfo, (UObject*)Z_Construct_UPackage__Script_NaziZombies(), TEXT("MapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton;
}
template<> NAZIZOMBIES_API UScriptStruct* StaticStruct<FMapInfo>()
{
	return FMapInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/NaziZombie/Game/NaziZombieGameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapURL_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Public/NaziZombie/Game/NaziZombieGameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Public/NaziZombie/Game/NaziZombieGameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDescription_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Public/NaziZombie/Game/NaziZombieGameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapImage_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Public/NaziZombie/Game/NaziZombieGameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL = { "MapURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapInfo, MapURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapURL_MetaData), NewProp_MapURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapInfo, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapDescription = { "MapDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapInfo, MapDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDescription_MetaData), NewProp_MapDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapImage = { "MapImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapInfo, MapImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapImage_MetaData), NewProp_MapImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NaziZombies,
	nullptr,
	&NewStructOps,
	"MapInfo",
	Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers),
	sizeof(FMapInfo),
	alignof(FMapInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton, Z_Construct_UScriptStruct_FMapInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton;
}
// End ScriptStruct FMapInfo

// Begin Class UNaziZombieGameInstanceBase
void UNaziZombieGameInstanceBase::StaticRegisterNativesUNaziZombieGameInstanceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaziZombieGameInstanceBase);
UClass* Z_Construct_UClass_UNaziZombieGameInstanceBase_NoRegister()
{
	return UNaziZombieGameInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NaziZombie/Game/NaziZombieGameInstanceBase.h" },
		{ "ModuleRelativePath", "Public/NaziZombie/Game/NaziZombieGameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaziZombieGameInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NaziZombies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics::ClassParams = {
	&UNaziZombieGameInstanceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNaziZombieGameInstanceBase()
{
	if (!Z_Registration_Info_UClass_UNaziZombieGameInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaziZombieGameInstanceBase.OuterSingleton, Z_Construct_UClass_UNaziZombieGameInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNaziZombieGameInstanceBase.OuterSingleton;
}
template<> NAZIZOMBIES_API UClass* StaticClass<UNaziZombieGameInstanceBase>()
{
	return UNaziZombieGameInstanceBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNaziZombieGameInstanceBase);
UNaziZombieGameInstanceBase::~UNaziZombieGameInstanceBase() {}
// End Class UNaziZombieGameInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_Public_NaziZombie_Game_NaziZombieGameInstanceBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapInfo::StaticStruct, Z_Construct_UScriptStruct_FMapInfo_Statics::NewStructOps, TEXT("MapInfo"), &Z_Registration_Info_UScriptStruct_MapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapInfo), 2225974880U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNaziZombieGameInstanceBase, UNaziZombieGameInstanceBase::StaticClass, TEXT("UNaziZombieGameInstanceBase"), &Z_Registration_Info_UClass_UNaziZombieGameInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaziZombieGameInstanceBase), 2261233096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_Public_NaziZombie_Game_NaziZombieGameInstanceBase_h_744752665(TEXT("/Script/NaziZombies"),
	Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_Public_NaziZombie_Game_NaziZombieGameInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_Public_NaziZombie_Game_NaziZombieGameInstanceBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_Public_NaziZombie_Game_NaziZombieGameInstanceBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_Public_NaziZombie_Game_NaziZombieGameInstanceBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
