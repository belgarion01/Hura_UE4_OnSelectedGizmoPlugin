// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/BoxGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxGizmo() {}
// Cross Module References
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UBoxGizmo_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UBoxGizmo();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UBoxGizmo::StaticRegisterNativesUBoxGizmo()
	{
	}
	UClass* Z_Construct_UClass_UBoxGizmo_NoRegister()
	{
		return UBoxGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UBoxGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoShape,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxGizmo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BoxGizmo.h" },
		{ "ModuleRelativePath", "Public/BoxGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "BoxGizmo" },
		{ "ModuleRelativePath", "Public/BoxGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxGizmo, Thickness), METADATA_PARAMS(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "BoxGizmo" },
		{ "ModuleRelativePath", "Public/BoxGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxGizmo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxGizmo_Statics::NewProp_CenterOffset_MetaData[] = {
		{ "Category", "BoxGizmo" },
		{ "ModuleRelativePath", "Public/BoxGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoxGizmo_Statics::NewProp_CenterOffset = { "CenterOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxGizmo, CenterOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_CenterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_CenterOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "BoxGizmo" },
		{ "ModuleRelativePath", "Public/BoxGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxGizmo, Size), METADATA_PARAMS(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "BoxGizmo" },
		{ "ModuleRelativePath", "Public/BoxGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxGizmo, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Extent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxGizmo_Statics::NewProp_CenterOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxGizmo_Statics::NewProp_Extent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoxGizmo_Statics::ClassParams = {
		&UBoxGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoxGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoxGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoxGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoxGizmo, 1291366718);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<UBoxGizmo>()
	{
		return UBoxGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxGizmo(Z_Construct_UClass_UBoxGizmo, &UBoxGizmo::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("UBoxGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
