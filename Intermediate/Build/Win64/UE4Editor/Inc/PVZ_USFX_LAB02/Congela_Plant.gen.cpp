// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Congela_Plant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCongela_Plant() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACongela_Plant_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACongela_Plant();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_Ataque();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ACongela_Plant::StaticRegisterNativesACongela_Plant()
	{
	}
	UClass* Z_Construct_UClass_ACongela_Plant_NoRegister()
	{
		return ACongela_Plant::StaticClass();
	}
	struct Z_Construct_UClass_ACongela_Plant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACongela_Plant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlanta_Ataque,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACongela_Plant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Congela_Plant.h" },
		{ "ModuleRelativePath", "Congela_Plant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACongela_Plant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACongela_Plant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACongela_Plant_Statics::ClassParams = {
		&ACongela_Plant::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACongela_Plant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACongela_Plant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACongela_Plant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACongela_Plant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACongela_Plant, 2765209462);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ACongela_Plant>()
	{
		return ACongela_Plant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACongela_Plant(Z_Construct_UClass_ACongela_Plant, &ACongela_Plant::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ACongela_Plant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACongela_Plant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
