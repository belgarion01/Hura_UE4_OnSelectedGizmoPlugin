// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/ConeGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConeGizmo() {}
// Cross Module References
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UConeGizmo_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UConeGizmo();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UConeGizmo::StaticRegisterNativesUConeGizmo()
	{
	}
	UClass* Z_Construct_UClass_UConeGizmo_NoRegister()
	{
		return UConeGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UConeGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CapSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ArcFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCap_MetaData[];
#endif
		static void NewProp_SphereCap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SphereCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConeGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoShape,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ConeGizmo.h" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_CapSegments_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ClampMin", "1" },
		{ "EditCondition", "SphereCap" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_CapSegments = { "CapSegments", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, CapSegments), METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_CapSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_CapSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_ArcFrequency_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ClampMin", "1" },
		{ "EditCondition", "SphereCap" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_ArcFrequency = { "ArcFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, ArcFrequency), METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_ArcFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_ArcFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	void Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap_SetBit(void* Obj)
	{
		((UConeGizmo*)Obj)->SphereCap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap = { "SphereCap", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConeGizmo), &Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "EditCondition", "!SphereCap" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, Thickness), METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_NumSide_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ClampMin", "4" },
		{ "Comment", "// NumSide below 4 crashes\n" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
		{ "ToolTip", "NumSide below 4 crashes" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_NumSide = { "NumSide", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, NumSide), METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_NumSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_NumSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
		{ "UIMax", "90.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, Angle), METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, Length), METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_RotationDirection_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_RotationDirection = { "RotationDirection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, RotationDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_RotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_RotationDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeGizmo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "ConeGizmo" },
		{ "ModuleRelativePath", "Public/ConeGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConeGizmo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConeGizmo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConeGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_CapSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_ArcFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_SphereCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_NumSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_RotationDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeGizmo_Statics::NewProp_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConeGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConeGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConeGizmo_Statics::ClassParams = {
		&UConeGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConeGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConeGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConeGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConeGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConeGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConeGizmo, 3278529690);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<UConeGizmo>()
	{
		return UConeGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConeGizmo(Z_Construct_UClass_UConeGizmo, &UConeGizmo::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("UConeGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConeGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
