// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Crece_planta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrece_planta() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACrece_planta_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACrece_planta();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_Ataque();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ACrece_planta::StaticRegisterNativesACrece_planta()
	{
	}
	UClass* Z_Construct_UClass_ACrece_planta_NoRegister()
	{
		return ACrece_planta::StaticClass();
	}
	struct Z_Construct_UClass_ACrece_planta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrece_planta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlanta_Ataque,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrece_planta_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Crece_planta.h" },
		{ "ModuleRelativePath", "Crece_planta.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrece_planta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrece_planta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrece_planta_Statics::ClassParams = {
		&ACrece_planta::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrece_planta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrece_planta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrece_planta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrece_planta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrece_planta, 1192614675);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ACrece_planta>()
	{
		return ACrece_planta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrece_planta(Z_Construct_UClass_ACrece_planta, &ACrece_planta::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ACrece_planta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrece_planta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
