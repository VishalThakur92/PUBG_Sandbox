// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/HUD_PUBG.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHUD_PUBG() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SANDBOX_API UClass* Z_Construct_UClass_AHUD_PUBG();
SANDBOX_API UClass* Z_Construct_UClass_AHUD_PUBG_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHUD_PUBG ****************************************************************
void AHUD_PUBG::StaticRegisterNativesAHUD_PUBG()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHUD_PUBG;
UClass* AHUD_PUBG::GetPrivateStaticClass()
{
	using TClass = AHUD_PUBG;
	if (!Z_Registration_Info_UClass_AHUD_PUBG.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HUD_PUBG"),
			Z_Registration_Info_UClass_AHUD_PUBG.InnerSingleton,
			StaticRegisterNativesAHUD_PUBG,
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
	return Z_Registration_Info_UClass_AHUD_PUBG.InnerSingleton;
}
UClass* Z_Construct_UClass_AHUD_PUBG_NoRegister()
{
	return AHUD_PUBG::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHUD_PUBG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_PUBG.h" },
		{ "ModuleRelativePath", "HUD_PUBG.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_PUBG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHUD_PUBG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_PUBG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUD_PUBG_Statics::ClassParams = {
	&AHUD_PUBG::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_PUBG_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_PUBG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHUD_PUBG()
{
	if (!Z_Registration_Info_UClass_AHUD_PUBG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHUD_PUBG.OuterSingleton, Z_Construct_UClass_AHUD_PUBG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHUD_PUBG.OuterSingleton;
}
AHUD_PUBG::AHUD_PUBG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_PUBG);
AHUD_PUBG::~AHUD_PUBG() {}
// ********** End Class AHUD_PUBG ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_HUD_PUBG_h__Script_Sandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHUD_PUBG, AHUD_PUBG::StaticClass, TEXT("AHUD_PUBG"), &Z_Registration_Info_UClass_AHUD_PUBG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_PUBG), 1111928649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_HUD_PUBG_h__Script_Sandbox_3159270708(TEXT("/Script/Sandbox"),
	Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_HUD_PUBG_h__Script_Sandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_HUD_PUBG_h__Script_Sandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
