// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lecture/PushButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePushButton() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LECTURE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
LECTURE_API UClass* Z_Construct_UClass_APushButton();
LECTURE_API UClass* Z_Construct_UClass_APushButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lecture();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APushButton Function Activate ********************************************
struct Z_Construct_UFunction_APushButton_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "PushButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APushButton_Activate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APushButton, nullptr, "Activate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APushButton_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_APushButton_Activate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APushButton_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APushButton_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APushButton::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate();
	P_NATIVE_END;
}
// ********** End Class APushButton Function Activate **********************************************

// ********** Begin Class APushButton **************************************************************
void APushButton::StaticRegisterNativesAPushButton()
{
	UClass* Class = APushButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &APushButton::execActivate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APushButton;
UClass* APushButton::GetPrivateStaticClass()
{
	using TClass = APushButton;
	if (!Z_Registration_Info_UClass_APushButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PushButton"),
			Z_Registration_Info_UClass_APushButton.InnerSingleton,
			StaticRegisterNativesAPushButton,
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
	return Z_Registration_Info_UClass_APushButton.InnerSingleton;
}
UClass* Z_Construct_UClass_APushButton_NoRegister()
{
	return APushButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APushButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PushButton.h" },
		{ "ModuleRelativePath", "PushButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PushButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedDoor_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "PushButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedDoor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APushButton_Activate, "Activate" }, // 282403230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APushButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APushButton_Statics::NewProp_ButtonMesh = { "ButtonMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APushButton, ButtonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMesh_MetaData), NewProp_ButtonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APushButton_Statics::NewProp_LinkedDoor = { "LinkedDoor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APushButton, LinkedDoor), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedDoor_MetaData), NewProp_LinkedDoor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APushButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushButton_Statics::NewProp_ButtonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushButton_Statics::NewProp_LinkedDoor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APushButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APushButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APushButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APushButton_Statics::ClassParams = {
	&APushButton::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APushButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APushButton_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APushButton_Statics::Class_MetaDataParams), Z_Construct_UClass_APushButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APushButton()
{
	if (!Z_Registration_Info_UClass_APushButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APushButton.OuterSingleton, Z_Construct_UClass_APushButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APushButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APushButton);
APushButton::~APushButton() {}
// ********** End Class APushButton ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_PushButton_h__Script_Lecture_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APushButton, APushButton::StaticClass, TEXT("APushButton"), &Z_Registration_Info_UClass_APushButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APushButton), 166666582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_PushButton_h__Script_Lecture_1860413484(TEXT("/Script/Lecture"),
	Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_PushButton_h__Script_Lecture_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lilia_OneDrive_Documents_GitHub_UnrealProject_Source_Lecture_PushButton_h__Script_Lecture_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
