// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Memento/PuzzleInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleInteractionComponent() {}
// Cross Module References
	MEMENTO_API UClass* Z_Construct_UClass_UPuzzleInteractionComponent_NoRegister();
	MEMENTO_API UClass* Z_Construct_UClass_UPuzzleInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Memento();
// End Cross Module References
	void UPuzzleInteractionComponent::StaticRegisterNativesUPuzzleInteractionComponent()
	{
	}
	UClass* Z_Construct_UClass_UPuzzleInteractionComponent_NoRegister()
	{
		return UPuzzleInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Memento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PuzzleInteractionComponent.h" },
		{ "ModuleRelativePath", "PuzzleInteractionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleInteractionComponent_Statics::ClassParams = {
		&UPuzzleInteractionComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleInteractionComponent, 1513180260);
	template<> MEMENTO_API UClass* StaticClass<UPuzzleInteractionComponent>()
	{
		return UPuzzleInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleInteractionComponent(Z_Construct_UClass_UPuzzleInteractionComponent, &UPuzzleInteractionComponent::StaticClass, TEXT("/Script/Memento"), TEXT("UPuzzleInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif