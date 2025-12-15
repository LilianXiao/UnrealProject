// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Door.h"

#ifdef LECTURE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define LECTURE_Door_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADoor ********************************************************************
#define FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenDoor);


LECTURE_API UClass* Z_Construct_UClass_ADoor_NoRegister();

#define FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LECTURE_API UClass* Z_Construct_UClass_ADoor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lecture"), Z_Construct_UClass_ADoor_NoRegister) \
	DECLARE_SERIALIZER(ADoor)


#define FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADoor(ADoor&&) = delete; \
	ADoor(const ADoor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor) \
	NO_API virtual ~ADoor();


#define FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_11_PROLOG
#define FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADoor;

// ********** End Class ADoor **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_Door_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
