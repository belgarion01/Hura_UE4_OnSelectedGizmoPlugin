// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/CapsuleGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleGizmo() {}
// Cross Module References
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UCapsuleGizmo_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UCapsuleGizmo();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VISUALITATIONTOOL_API UEnum* Z_Construct_UEnum_VisualitationTool_EAlignementFacing();
// End Cross Module References
	void UCapsuleGizmo::StaticRegisterNativesUCapsuleGizmo()
	{
	}
	UClass* Z_Construct_UClass_UCapsuleGizmo_NoRegister()
	{
		return UCapsuleGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UCapsuleGizmo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Facing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapsuleGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoShape,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsuleGizmo.h" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, Thickness), METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_NumSide_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ClampMin", "5" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_NumSide = { "NumSide", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, NumSide), METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_NumSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_NumSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, Radius), METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, Height), METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Facing_MetaData[] = {
		{ "Category", "CapsuleGizmo" },
		{ "ModuleRelativePath", "Public/CapsuleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Facing = { "Facing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleGizmo, Facing), Z_Construct_UEnum_VisualitationTool_EAlignementFacing, METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Facing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Facing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCapsuleGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_NumSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleGizmo_Statics::NewProp_Facing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapsuleGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapsuleGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCapsuleGizmo_Statics::ClassParams = {
		&UCapsuleGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCapsuleGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCapsuleGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCapsuleGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCapsuleGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCapsuleGizmo, 319824883);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<UCapsuleGizmo>()
	{
		return UCapsuleGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapsuleGizmo(Z_Construct_UClass_UCapsuleGizmo, &UCapsuleGizmo::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("UCapsuleGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapsuleGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
