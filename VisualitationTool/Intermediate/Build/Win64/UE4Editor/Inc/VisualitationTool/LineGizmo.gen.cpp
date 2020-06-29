// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/LineGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineGizmo() {}
// Cross Module References
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_ULineGizmo_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_ULineGizmo();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULineGizmo::StaticRegisterNativesULineGizmo()
	{
	}
	UClass* Z_Construct_UClass_ULineGizmo_NoRegister()
	{
		return ULineGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ULineGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotLine_MetaData[];
#endif
		static void NewProp_DotLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DotLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOwnerAsStart_MetaData[];
#endif
		static void NewProp_UseOwnerAsStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOwnerAsStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoShape,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LineGizmo.h" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::NewProp_DashSize_MetaData[] = {
		{ "Category", "LineGizmo" },
		{ "ClampMax", "200.000000" },
		{ "ClampMin", "0.100000" },
		{ "EditCondition", "DotLine" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_DashSize = { "DashSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULineGizmo, DashSize), METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::NewProp_DashSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::NewProp_DashSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine_MetaData[] = {
		{ "Category", "LineGizmo" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
	};
#endif
	void Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine_SetBit(void* Obj)
	{
		((ULineGizmo*)Obj)->DotLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine = { "DotLine", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULineGizmo), &Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "LineGizmo" },
		{ "EditCondition", "!DotLine" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
		{ "Tooltip", "Dot Lines do not have a Thickness parameter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULineGizmo, Thickness), METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "LineGizmo" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULineGizmo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "LineGizmo" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULineGizmo, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart_MetaData[] = {
		{ "Category", "LineGizmo" },
		{ "ModuleRelativePath", "Public/LineGizmo.h" },
	};
#endif
	void Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart_SetBit(void* Obj)
	{
		((ULineGizmo*)Obj)->UseOwnerAsStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart = { "UseOwnerAsStart", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULineGizmo), &Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULineGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_DashSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_DotLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineGizmo_Statics::NewProp_UseOwnerAsStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULineGizmo_Statics::ClassParams = {
		&ULineGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULineGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULineGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULineGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULineGizmo, 3426735589);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<ULineGizmo>()
	{
		return ULineGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULineGizmo(Z_Construct_UClass_ULineGizmo, &ULineGizmo::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("ULineGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
