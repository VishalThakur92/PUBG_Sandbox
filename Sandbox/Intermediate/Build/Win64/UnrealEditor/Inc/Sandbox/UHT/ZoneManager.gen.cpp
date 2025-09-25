// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/ZoneManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeZoneManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
SANDBOX_API UClass* Z_Construct_UClass_UZoneManager();
SANDBOX_API UClass* Z_Construct_UClass_UZoneManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZoneManager *************************************************************
void UZoneManager::StaticRegisterNativesUZoneManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UZoneManager;
UClass* UZoneManager::GetPrivateStaticClass()
{
	using TClass = UZoneManager;
	if (!Z_Registration_Info_UClass_UZoneManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ZoneManager"),
			Z_Registration_Info_UClass_UZoneManager.InnerSingleton,
			StaticRegisterNativesUZoneManager,
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
	return Z_Registration_Info_UClass_UZoneManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UZoneManager_NoRegister()
{
	return UZoneManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZoneManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ZoneManager.h" },
		{ "ModuleRelativePath", "ZoneManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UZoneManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZoneManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneManager_Statics::ClassParams = {
	&UZoneManager::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZoneManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UZoneManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZoneManager()
{
	if (!Z_Registration_Info_UClass_UZoneManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneManager.OuterSingleton, Z_Construct_UClass_UZoneManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZoneManager.OuterSingleton;
}
UZoneManager::UZoneManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneManager);
UZoneManager::~UZoneManager() {}
// ********** End Class UZoneManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h__Script_Sandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZoneManager, UZoneManager::StaticClass, TEXT("UZoneManager"), &Z_Registration_Info_UClass_UZoneManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneManager), 50037196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h__Script_Sandbox_149072294(TEXT("/Script/Sandbox"),
	Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h__Script_Sandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h__Script_Sandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
