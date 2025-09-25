// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/GameModeBase_PUBG.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameModeBase_PUBG() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SANDBOX_API UClass* Z_Construct_UClass_AGameModeBase_PUBG();
SANDBOX_API UClass* Z_Construct_UClass_AGameModeBase_PUBG_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameModeBase_PUBG *******************************************************
void AGameModeBase_PUBG::StaticRegisterNativesAGameModeBase_PUBG()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameModeBase_PUBG;
UClass* AGameModeBase_PUBG::GetPrivateStaticClass()
{
	using TClass = AGameModeBase_PUBG;
	if (!Z_Registration_Info_UClass_AGameModeBase_PUBG.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameModeBase_PUBG"),
			Z_Registration_Info_UClass_AGameModeBase_PUBG.InnerSingleton,
			StaticRegisterNativesAGameModeBase_PUBG,
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
	return Z_Registration_Info_UClass_AGameModeBase_PUBG.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameModeBase_PUBG_NoRegister()
{
	return AGameModeBase_PUBG::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameModeBase_PUBG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeBase_PUBG.h" },
		{ "ModuleRelativePath", "GameModeBase_PUBG.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeBase_PUBG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameModeBase_PUBG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_PUBG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModeBase_PUBG_Statics::ClassParams = {
	&AGameModeBase_PUBG::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_PUBG_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameModeBase_PUBG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameModeBase_PUBG()
{
	if (!Z_Registration_Info_UClass_AGameModeBase_PUBG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModeBase_PUBG.OuterSingleton, Z_Construct_UClass_AGameModeBase_PUBG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameModeBase_PUBG.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBase_PUBG);
AGameModeBase_PUBG::~AGameModeBase_PUBG() {}
// ********** End Class AGameModeBase_PUBG *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_GameModeBase_PUBG_h__Script_Sandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameModeBase_PUBG, AGameModeBase_PUBG::StaticClass, TEXT("AGameModeBase_PUBG"), &Z_Registration_Info_UClass_AGameModeBase_PUBG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModeBase_PUBG), 374210706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_GameModeBase_PUBG_h__Script_Sandbox_1875407172(TEXT("/Script/Sandbox"),
	Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_GameModeBase_PUBG_h__Script_Sandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_GameModeBase_PUBG_h__Script_Sandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
