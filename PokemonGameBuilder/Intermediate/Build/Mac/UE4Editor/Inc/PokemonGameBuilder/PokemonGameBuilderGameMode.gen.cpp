// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PokemonGameBuilder/PokemonGameBuilderGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonGameBuilderGameMode() {}
// Cross Module References
	POKEMONGAMEBUILDER_API UClass* Z_Construct_UClass_APokemonGameBuilderGameMode_NoRegister();
	POKEMONGAMEBUILDER_API UClass* Z_Construct_UClass_APokemonGameBuilderGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PokemonGameBuilder();
// End Cross Module References
	void APokemonGameBuilderGameMode::StaticRegisterNativesAPokemonGameBuilderGameMode()
	{
	}
	UClass* Z_Construct_UClass_APokemonGameBuilderGameMode_NoRegister()
	{
		return APokemonGameBuilderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APokemonGameBuilderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PokemonGameBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PokemonGameBuilderGameMode.h" },
		{ "ModuleRelativePath", "PokemonGameBuilderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokemonGameBuilderGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::ClassParams = {
		&APokemonGameBuilderGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APokemonGameBuilderGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APokemonGameBuilderGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APokemonGameBuilderGameMode, 2710508808);
	template<> POKEMONGAMEBUILDER_API UClass* StaticClass<APokemonGameBuilderGameMode>()
	{
		return APokemonGameBuilderGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APokemonGameBuilderGameMode(Z_Construct_UClass_APokemonGameBuilderGameMode, &APokemonGameBuilderGameMode::StaticClass, TEXT("/Script/PokemonGameBuilder"), TEXT("APokemonGameBuilderGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APokemonGameBuilderGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
