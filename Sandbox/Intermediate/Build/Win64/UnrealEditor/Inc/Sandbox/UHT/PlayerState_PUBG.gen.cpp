// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/PlayerState_PUBG.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerState_PUBG() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
SANDBOX_API UClass* Z_Construct_UClass_APlayerState_PUBG();
SANDBOX_API UClass* Z_Construct_UClass_APlayerState_PUBG_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerState_PUBG ********************************************************
void APlayerState_PUBG::StaticRegisterNativesAPlayerState_PUBG()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerState_PUBG;
UClass* APlayerState_PUBG::GetPrivateStaticClass()
{
	using TClass = APlayerState_PUBG;
	if (!Z_Registration_Info_UClass_APlayerState_PUBG.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerState_PUBG"),
			Z_Registration_Info_UClass_APlayerState_PUBG.InnerSingleton,
			StaticRegisterNativesAPlayerState_PUBG,
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
	return Z_Registration_Info_UClass_APlayerState_PUBG.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerState_PUBG_NoRegister()
{
	return APlayerState_PUBG::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerState_PUBG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState_PUBG.h" },
		{ "ModuleRelativePath", "PlayerState_PUBG.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerState_PUBG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerState_PUBG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_PUBG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerState_PUBG_Statics::ClassParams = {
	&APlayerState_PUBG::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_PUBG_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerState_PUBG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerState_PUBG()
{
	if (!Z_Registration_Info_UClass_APlayerState_PUBG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerState_PUBG.OuterSingleton, Z_Construct_UClass_APlayerState_PUBG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerState_PUBG.OuterSingleton;
}
APlayerState_PUBG::APlayerState_PUBG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerState_PUBG);
APlayerState_PUBG::~APlayerState_PUBG() {}
// ********** End Class APlayerState_PUBG **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerState_PUBG_h__Script_Sandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerState_PUBG, APlayerState_PUBG::StaticClass, TEXT("APlayerState_PUBG"), &Z_Registration_Info_UClass_APlayerState_PUBG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerState_PUBG), 768350446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerState_PUBG_h__Script_Sandbox_3430337911(TEXT("/Script/Sandbox"),
	Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerState_PUBG_h__Script_Sandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_PlayerState_PUBG_h__Script_Sandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
