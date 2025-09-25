// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/Character_PUBG.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacter_PUBG() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SANDBOX_API UClass* Z_Construct_UClass_ACharacter_PUBG();
SANDBOX_API UClass* Z_Construct_UClass_ACharacter_PUBG_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharacter_PUBG **********************************************************
void ACharacter_PUBG::StaticRegisterNativesACharacter_PUBG()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharacter_PUBG;
UClass* ACharacter_PUBG::GetPrivateStaticClass()
{
	using TClass = ACharacter_PUBG;
	if (!Z_Registration_Info_UClass_ACharacter_PUBG.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Character_PUBG"),
			Z_Registration_Info_UClass_ACharacter_PUBG.InnerSingleton,
			StaticRegisterNativesACharacter_PUBG,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACharacter_PUBG.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharacter_PUBG_NoRegister()
{
	return ACharacter_PUBG::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharacter_PUBG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_PUBG.h" },
		{ "ModuleRelativePath", "Character_PUBG.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_PUBG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacter_PUBG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_PUBG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_PUBG_Statics::ClassParams = {
	&ACharacter_PUBG::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_PUBG_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacter_PUBG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacter_PUBG()
{
	if (!Z_Registration_Info_UClass_ACharacter_PUBG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacter_PUBG.OuterSingleton, Z_Construct_UClass_ACharacter_PUBG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacter_PUBG.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_PUBG);
ACharacter_PUBG::~ACharacter_PUBG() {}
// ********** End Class ACharacter_PUBG ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_Character_PUBG_h__Script_Sandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacter_PUBG, ACharacter_PUBG::StaticClass, TEXT("ACharacter_PUBG"), &Z_Registration_Info_UClass_ACharacter_PUBG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacter_PUBG), 2981239322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_Character_PUBG_h__Script_Sandbox_3023862588(TEXT("/Script/Sandbox"),
	Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_Character_PUBG_h__Script_Sandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_Character_PUBG_h__Script_Sandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
