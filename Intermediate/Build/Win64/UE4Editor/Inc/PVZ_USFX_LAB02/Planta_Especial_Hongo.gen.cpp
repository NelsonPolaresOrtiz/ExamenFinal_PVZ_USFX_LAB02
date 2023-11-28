// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Planta_Especial_Hongo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_Especial_Hongo() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_Especial_Hongo_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_Especial_Hongo();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_defensa();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void APlanta_Especial_Hongo::StaticRegisterNativesAPlanta_Especial_Hongo()
	{
	}
	UClass* Z_Construct_UClass_APlanta_Especial_Hongo_NoRegister()
	{
		return APlanta_Especial_Hongo::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_Especial_Hongo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_Especial_Hongo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlanta_defensa,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_Especial_Hongo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Planta_Especial_Hongo.h" },
		{ "ModuleRelativePath", "Planta_Especial_Hongo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_Especial_Hongo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_Especial_Hongo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_Especial_Hongo_Statics::ClassParams = {
		&APlanta_Especial_Hongo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlanta_Especial_Hongo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_Especial_Hongo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_Especial_Hongo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_Especial_Hongo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_Especial_Hongo, 4005338723);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlanta_Especial_Hongo>()
	{
		return APlanta_Especial_Hongo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_Especial_Hongo(Z_Construct_UClass_APlanta_Especial_Hongo, &APlanta_Especial_Hongo::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlanta_Especial_Hongo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_Especial_Hongo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
