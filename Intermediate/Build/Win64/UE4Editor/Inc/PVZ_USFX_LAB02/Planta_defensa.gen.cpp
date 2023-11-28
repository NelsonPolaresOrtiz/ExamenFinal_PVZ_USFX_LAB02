// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Planta_defensa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_defensa() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_defensa_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_defensa();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void APlanta_defensa::StaticRegisterNativesAPlanta_defensa()
	{
	}
	UClass* Z_Construct_UClass_APlanta_defensa_NoRegister()
	{
		return APlanta_defensa::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_defensa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_defensa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_defensa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Planta_defensa.h" },
		{ "ModuleRelativePath", "Planta_defensa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_defensa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_defensa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_defensa_Statics::ClassParams = {
		&APlanta_defensa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlanta_defensa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_defensa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_defensa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_defensa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_defensa, 911607409);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlanta_defensa>()
	{
		return APlanta_defensa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_defensa(Z_Construct_UClass_APlanta_defensa, &APlanta_defensa::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlanta_defensa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_defensa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
