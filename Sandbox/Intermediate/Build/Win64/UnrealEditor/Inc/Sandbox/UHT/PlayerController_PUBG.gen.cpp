// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/PlayerController_PUBG.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerController_PUBG() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SANDBOX_API UClass* Z_Construct_UClass_APlayerController_PUBG();
SANDBOX_API UClass* Z_Construct_UClass_APlayerController_PUBG_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerController_PUBG ***************************************************
void APlayerController_PUBG::StaticRegisterNativesAPlayerController_PUBG()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerController_PUBG;
UClass* APlayerController_PUBG::GetPrivateStaticClass()
{
	using TClass = APlayerController_PUBG;
	if (!Z_Registration_Info_UClass_APlayerController_PUBG.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerController_PUBG"),
			Z_Registration_Info_UClass_APlayerController_PUBG.InnerSingleton,
			StaticRegisterNativesAPlayerController_PUBG,
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
	return Z_Registration_Info_UClass_APlayerController_PUBG.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerController_PUBG_NoRegister()
{
	return APlayerController_PUBG::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerController_PUBG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController_PUBG.h" },
		{ "ModuleRelativePath", "PlayerController_PUBG.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_PUBG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerController_PUBG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_PUBG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_PUBG_Statics::ClassParams = {
	&APlayerController_PUBG::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_PUBG_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerController_PUBG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerController_PUBG()
{
	if (!Z_Registration_Info_UClass_APlayerController_PUBG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerController_PUBG.OuterSingleton, Z_Construct_UClass_APlayerController_PUBG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerController_PUBG.OuterSingleton;
}
APlayerController_PUBG::APlayerController_PUBG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_PUBG);
APlayerController_PUBG::~APlayerController_PUBG() {}
// ********** End Class APlayerController_PUBG *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerController_PUBG_h__Script_Sandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerController_PUBG, APlayerController_PUBG::StaticClass, TEXT("APlayerController_PUBG"), &Z_Registration_Info_UClass_APlayerController_PUBG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerController_PUBG), 3331856678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerController_PUBG_h__Script_Sandbox_1354414455(TEXT("/Script/Sandbox"),
	Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerController_PUBG_h__Script_Sandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerController_PUBG_h__Script_Sandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
