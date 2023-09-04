// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/MyPlant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlant() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AMyPlant_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AMyPlant();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AMyPlant::StaticRegisterNativesAMyPlant()
	{
	}
	UClass* Z_Construct_UClass_AMyPlant_NoRegister()
	{
		return AMyPlant::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyPlant.h" },
		{ "ModuleRelativePath", "MyPlant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlant_Statics::ClassParams = {
		&AMyPlant::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlant, 2375880556);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AMyPlant>()
	{
		return AMyPlant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlant(Z_Construct_UClass_AMyPlant, &AMyPlant::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AMyPlant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
