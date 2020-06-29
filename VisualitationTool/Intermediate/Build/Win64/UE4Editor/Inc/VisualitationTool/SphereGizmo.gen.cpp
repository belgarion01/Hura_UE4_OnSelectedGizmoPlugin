// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/SphereGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereGizmo() {}
// Cross Module References
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_USphereGizmo_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_USphereGizmo();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USphereGizmo::StaticRegisterNativesUSphereGizmo()
	{
	}
	UClass* Z_Construct_UClass_USphereGizmo_NoRegister()
	{
		return USphereGizmo::StaticClass();
	}
	struct Z_Construct_UClass_USphereGizmo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSides_MetaData[];
#endif
		static void NewProp_AutoSides_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoSides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomActorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomActorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOwnerLocation_MetaData[];
#endif
		static void NewProp_UseOwnerLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOwnerLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoShape,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "SphereGizmo.h" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereGizmo, Thickness), METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_NumSide_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "EditCondition", "!AutoSides" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_NumSide = { "NumSide", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereGizmo, NumSide), METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_NumSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_NumSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	void Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides_SetBit(void* Obj)
	{
		((USphereGizmo*)Obj)->AutoSides = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides = { "AutoSides", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USphereGizmo), &Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides_SetBit, METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereGizmo, Radius), METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereGizmo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereGizmo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_CustomActorLocation_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "EditCondition", "!UseOwnerLocation" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_CustomActorLocation = { "CustomActorLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereGizmo, CustomActorLocation), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_CustomActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_CustomActorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation_MetaData[] = {
		{ "Category", "SphereGizmo" },
		{ "ModuleRelativePath", "Public/SphereGizmo.h" },
	};
#endif
	void Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation_SetBit(void* Obj)
	{
		((USphereGizmo*)Obj)->UseOwnerLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation = { "UseOwnerLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USphereGizmo), &Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_NumSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_AutoSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_CustomActorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereGizmo_Statics::NewProp_UseOwnerLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USphereGizmo_Statics::ClassParams = {
		&USphereGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USphereGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USphereGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USphereGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USphereGizmo, 1956919215);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<USphereGizmo>()
	{
		return USphereGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USphereGizmo(Z_Construct_UClass_USphereGizmo, &USphereGizmo::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("USphereGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
