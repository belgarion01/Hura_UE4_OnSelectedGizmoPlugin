// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/GizmoShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoShape() {}
// Cross Module References
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
// End Cross Module References
	void UGizmoShape::StaticRegisterNativesUGizmoShape()
	{
	}
	UClass* Z_Construct_UClass_UGizmoShape_NoRegister()
	{
		return UGizmoShape::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoShape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "GizmoShape.h" },
		{ "ModuleRelativePath", "Public/GizmoShape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible_MetaData[] = {
		{ "Category", "Gizmo Shape" },
		{ "ModuleRelativePath", "Public/GizmoShape.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((UGizmoShape*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGizmoShape), &Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoShape_Statics::NewProp_Visible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoShape_Statics::ClassParams = {
		&UGizmoShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoShape_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoShape, 1053824660);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<UGizmoShape>()
	{
		return UGizmoShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoShape(Z_Construct_UClass_UGizmoShape, &UGizmoShape::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("UGizmoShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
