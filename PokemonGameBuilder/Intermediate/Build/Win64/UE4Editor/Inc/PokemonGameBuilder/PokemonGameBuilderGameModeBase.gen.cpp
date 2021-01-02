// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PokemonGameBuilder/PokemonGameBuilderGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonGameBuilderGameModeBase() {}
// Cross Module References
	POKEMONGAMEBUILDER_API UClass* Z_Construct_UClass_APokemonGameBuilderGameModeBase_NoRegister();
	POKEMONGAMEBUILDER_API UClass* Z_Construct_UClass_APokemonGameBuilderGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PokemonGameBuilder();
// End Cross Module References
	void APokemonGameBuilderGameModeBase::StaticRegisterNativesAPokemonGameBuilderGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APokemonGameBuilderGameModeBase_NoRegister()
	{
		return APokemonGameBuilderGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PokemonGameBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PokemonGameBuilderGameModeBase.h" },
		{ "ModuleRelativePath", "PokemonGameBuilderGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokemonGameBuilderGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::ClassParams = {
		&APokemonGameBuilderGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APokemonGameBuilderGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APokemonGameBuilderGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APokemonGameBuilderGameModeBase, 3268801559);
	template<> POKEMONGAMEBUILDER_API UClass* StaticClass<APokemonGameBuilderGameModeBase>()
	{
		return APokemonGameBuilderGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APokemonGameBuilderGameModeBase(Z_Construct_UClass_APokemonGameBuilderGameModeBase, &APokemonGameBuilderGameModeBase::StaticClass, TEXT("/Script/PokemonGameBuilder"), TEXT("APokemonGameBuilderGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APokemonGameBuilderGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
