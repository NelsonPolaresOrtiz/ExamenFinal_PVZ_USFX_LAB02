// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Zombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AZombie::execSetZombieDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZombieDirection(Z_Param_Out_NewDirection);
		P_NATIVE_END;
	}
	void AZombie::StaticRegisterNativesAZombie()
	{
		UClass* Class = AZombie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetZombieDirection", &AZombie::execSetZombieDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombie_SetZombieDirection_Statics
	{
		struct Zombie_eventSetZombieDirection_Parms
		{
			FVector NewDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::NewProp_NewDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::NewProp_NewDirection = { "NewDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zombie_eventSetZombieDirection_Parms, NewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::NewProp_NewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::NewProp_NewDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::NewProp_NewDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zombie" },
		{ "Comment", "// Funci?n para cambiar la direcci?n del zombie\n" },
		{ "ModuleRelativePath", "Zombie.h" },
		{ "ToolTip", "Funci?n para cambiar la direcci?n del zombie" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, nullptr, "SetZombieDirection", nullptr, nullptr, sizeof(Zombie_eventSetZombieDirection_Parms), Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombie_SetZombieDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombie_SetZombieDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombie_NoRegister()
	{
		return AZombie::StaticClass();
	}
	struct Z_Construct_UClass_AZombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshZombie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshZombie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energia_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_energia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombie_SetZombieDirection, "SetZombieDirection" }, // 3695754675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Zombie.h" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::NewProp_MeshZombie_MetaData[] = {
		{ "Category", "Zombie" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_MeshZombie = { "MeshZombie", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie, MeshZombie), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombie_Statics::NewProp_MeshZombie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::NewProp_MeshZombie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AZombie_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::NewProp_energia_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_energia = { "energia", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie, energia), METADATA_PARAMS(Z_Construct_UClass_AZombie_Statics::NewProp_energia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::NewProp_energia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_MeshZombie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_energia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombie_Statics::ClassParams = {
		&AZombie::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombie, 1649726874);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AZombie>()
	{
		return AZombie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie(Z_Construct_UClass_AZombie, &AZombie::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
