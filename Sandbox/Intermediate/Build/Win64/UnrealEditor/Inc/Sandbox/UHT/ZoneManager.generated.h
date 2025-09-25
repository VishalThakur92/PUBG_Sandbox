// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneManager.h"

#ifdef SANDBOX_ZoneManager_generated_h
#error "ZoneManager.generated.h already included, missing '#pragma once' in ZoneManager.h"
#endif
#define SANDBOX_ZoneManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneManager *************************************************************
SANDBOX_API UClass* Z_Construct_UClass_UZoneManager_NoRegister();

#define FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneManager(); \
	friend struct Z_Construct_UClass_UZoneManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SANDBOX_API UClass* Z_Construct_UClass_UZoneManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sandbox"), Z_Construct_UClass_UZoneManager_NoRegister) \
	DECLARE_SERIALIZER(UZoneManager)


#define FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneManager(UZoneManager&&) = delete; \
	UZoneManager(const UZoneManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZoneManager) \
	NO_API virtual ~UZoneManager();


#define FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h_12_PROLOG
#define FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneManager;

// ********** End Class UZoneManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_visha_OneDrive_Documents_Unreal_Projects_Sandbox_Source_Sandbox_ZoneManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
