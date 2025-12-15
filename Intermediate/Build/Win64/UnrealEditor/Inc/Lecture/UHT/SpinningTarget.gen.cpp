// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lecture/SpinningTarget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpinningTarget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LECTURE_API UClass* Z_Construct_UClass_ASpinningTarget();
LECTURE_API UClass* Z_Construct_UClass_ASpinningTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lecture();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpinningTarget **********************************************************
void ASpinningTarget::StaticRegisterNativesASpinningTarget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpinningTarget;
UClass* ASpinningTarget::GetPrivateStaticClass()
{
	using TClass = ASpinningTarget;
	if (!Z_Registration_Info_UClass_ASpinningTarget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpinningTarget"),
			Z_Registration_Info_UClass_ASpinningTarget.InnerSingleton,
			StaticRegisterNativesASpinningTarget,
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
	return Z_Registration_Info_UClass_ASpinningTarget.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpinningTarget_NoRegister()
{
	return ASpinningTarget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpinningTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpinningTarget.h" },
		{ "ModuleRelativePath", "SpinningTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpinningTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpinningTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpinningTarget_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpinningTarget, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpinningTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpinningTarget_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpinningTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpinningTarget_Statics::ClassParams = {
	&ASpinningTarget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpinningTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningTarget_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpinningTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpinningTarget()
{
	if (!Z_Registration_Info_UClass_ASpinningTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpinningTarget.OuterSingleton, Z_Construct_UClass_ASpinningTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpinningTarget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpinningTarget);
ASpinningTarget::~ASpinningTarget() {}
// ********** End Class ASpinningTarget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_SpinningTarget_h__Script_Lecture_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpinningTarget, ASpinningTarget::StaticClass, TEXT("ASpinningTarget"), &Z_Registration_Info_UClass_ASpinningTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpinningTarget), 2850540191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_SpinningTarget_h__Script_Lecture_3405273069(TEXT("/Script/Lecture"),
	Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_SpinningTarget_h__Script_Lecture_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_SpinningTarget_h__Script_Lecture_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
