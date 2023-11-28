// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ZombieAtaqueFerozDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAtaqueFerozDecorator() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieAtaqueFerozDecorator_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieAtaqueFerozDecorator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AZombieAtaqueFerozDecorator::StaticRegisterNativesAZombieAtaqueFerozDecorator()
	{
	}
	UClass* Z_Construct_UClass_AZombieAtaqueFerozDecorator_NoRegister()
	{
		return AZombieAtaqueFerozDecorator::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieAtaqueFerozDecorator.h" },
		{ "ModuleRelativePath", "ZombieAtaqueFerozDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAtaqueFerozDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::ClassParams = {
		&AZombieAtaqueFerozDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAtaqueFerozDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAtaqueFerozDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAtaqueFerozDecorator, 1617251522);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AZombieAtaqueFerozDecorator>()
	{
		return AZombieAtaqueFerozDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAtaqueFerozDecorator(Z_Construct_UClass_AZombieAtaqueFerozDecorator, &AZombieAtaqueFerozDecorator::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AZombieAtaqueFerozDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAtaqueFerozDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
