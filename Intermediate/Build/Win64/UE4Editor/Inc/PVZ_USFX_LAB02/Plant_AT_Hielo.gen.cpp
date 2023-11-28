// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Plant_AT_Hielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlant_AT_Hielo() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant_AT_Hielo_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant_AT_Hielo();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_Ataque();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void APlant_AT_Hielo::StaticRegisterNativesAPlant_AT_Hielo()
	{
	}
	UClass* Z_Construct_UClass_APlant_AT_Hielo_NoRegister()
	{
		return APlant_AT_Hielo::StaticClass();
	}
	struct Z_Construct_UClass_APlant_AT_Hielo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlant_AT_Hielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlanta_Ataque,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlant_AT_Hielo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Plant_AT_Hielo.h" },
		{ "ModuleRelativePath", "Plant_AT_Hielo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlant_AT_Hielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlant_AT_Hielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlant_AT_Hielo_Statics::ClassParams = {
		&APlant_AT_Hielo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlant_AT_Hielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlant_AT_Hielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlant_AT_Hielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlant_AT_Hielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlant_AT_Hielo, 3571552146);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlant_AT_Hielo>()
	{
		return APlant_AT_Hielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlant_AT_Hielo(Z_Construct_UClass_APlant_AT_Hielo, &APlant_AT_Hielo::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlant_AT_Hielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlant_AT_Hielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
