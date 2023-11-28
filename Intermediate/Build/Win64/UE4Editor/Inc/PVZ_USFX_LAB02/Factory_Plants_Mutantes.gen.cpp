// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Factory_Plants_Mutantes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_Plants_Mutantes() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AFactory_Plants_Mutantes_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AFactory_Plants_Mutantes();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AFactory_Plants();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AFactory_Plants_Mutantes::StaticRegisterNativesAFactory_Plants_Mutantes()
	{
	}
	UClass* Z_Construct_UClass_AFactory_Plants_Mutantes_NoRegister()
	{
		return AFactory_Plants_Mutantes::StaticClass();
	}
	struct Z_Construct_UClass_AFactory_Plants_Mutantes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFactory_Plants,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Factory_Plants_Mutantes.h" },
		{ "ModuleRelativePath", "Factory_Plants_Mutantes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactory_Plants_Mutantes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::ClassParams = {
		&AFactory_Plants_Mutantes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactory_Plants_Mutantes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactory_Plants_Mutantes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactory_Plants_Mutantes, 507139726);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AFactory_Plants_Mutantes>()
	{
		return AFactory_Plants_Mutantes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactory_Plants_Mutantes(Z_Construct_UClass_AFactory_Plants_Mutantes, &AFactory_Plants_Mutantes::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AFactory_Plants_Mutantes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactory_Plants_Mutantes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
