// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaziZombies/NaziZombiesCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaziZombiesCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NAZIZOMBIES_API UClass* Z_Construct_UClass_ANaziZombiesCharacter();
NAZIZOMBIES_API UClass* Z_Construct_UClass_ANaziZombiesCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NaziZombies();
// End Cross Module References

// Begin Class ANaziZombiesCharacter Function GetHasRifle
struct Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics
{
	struct NaziZombiesCharacter_eventGetHasRifle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaziZombiesCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaziZombiesCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaziZombiesCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::NaziZombiesCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::NaziZombiesCharacter_eventGetHasRifle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANaziZombiesCharacter::execGetHasRifle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
	P_NATIVE_END;
}
// End Class ANaziZombiesCharacter Function GetHasRifle

// Begin Class ANaziZombiesCharacter Function SetHasRifle
struct Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics
{
	struct NaziZombiesCharacter_eventSetHasRifle_Parms
	{
		bool bNewHasRifle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewHasRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
{
	((NaziZombiesCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaziZombiesCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaziZombiesCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::NaziZombiesCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::NaziZombiesCharacter_eventSetHasRifle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANaziZombiesCharacter::execSetHasRifle)
{
	P_GET_UBOOL(Z_Param_bNewHasRifle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
	P_NATIVE_END;
}
// End Class ANaziZombiesCharacter Function SetHasRifle

// Begin Class ANaziZombiesCharacter
void ANaziZombiesCharacter::StaticRegisterNativesANaziZombiesCharacter()
{
	UClass* Class = ANaziZombiesCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHasRifle", &ANaziZombiesCharacter::execGetHasRifle },
		{ "SetHasRifle", &ANaziZombiesCharacter::execSetHasRifle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaziZombiesCharacter);
UClass* Z_Construct_UClass_ANaziZombiesCharacter_NoRegister()
{
	return ANaziZombiesCharacter::StaticClass();
}
struct Z_Construct_UClass_ANaziZombiesCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaziZombiesCharacter.h" },
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "NaziZombiesCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static void NewProp_bHasRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaziZombiesCharacter_GetHasRifle, "GetHasRifle" }, // 419857148
		{ &Z_Construct_UFunction_ANaziZombiesCharacter_SetHasRifle, "SetHasRifle" }, // 3355129563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaziZombiesCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANaziZombiesCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANaziZombiesCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANaziZombiesCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANaziZombiesCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANaziZombiesCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANaziZombiesCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
void Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
{
	((ANaziZombiesCharacter*)Obj)->bHasRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANaziZombiesCharacter), &Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRifle_MetaData), NewProp_bHasRifle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaziZombiesCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaziZombiesCharacter_Statics::NewProp_bHasRifle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANaziZombiesCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANaziZombiesCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NaziZombies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANaziZombiesCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaziZombiesCharacter_Statics::ClassParams = {
	&ANaziZombiesCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANaziZombiesCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANaziZombiesCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANaziZombiesCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANaziZombiesCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANaziZombiesCharacter()
{
	if (!Z_Registration_Info_UClass_ANaziZombiesCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaziZombiesCharacter.OuterSingleton, Z_Construct_UClass_ANaziZombiesCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANaziZombiesCharacter.OuterSingleton;
}
template<> NAZIZOMBIES_API UClass* StaticClass<ANaziZombiesCharacter>()
{
	return ANaziZombiesCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANaziZombiesCharacter);
ANaziZombiesCharacter::~ANaziZombiesCharacter() {}
// End Class ANaziZombiesCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANaziZombiesCharacter, ANaziZombiesCharacter::StaticClass, TEXT("ANaziZombiesCharacter"), &Z_Registration_Info_UClass_ANaziZombiesCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaziZombiesCharacter), 3701461814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_494293316(TEXT("/Script/NaziZombies"),
	Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_UnrealProjects_NaziZombies_Source_NaziZombies_NaziZombiesCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
