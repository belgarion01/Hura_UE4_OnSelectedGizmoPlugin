// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualitationTool/Public/ArcGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcGizmo() {}
// Cross Module References
	VISUALITATIONTOOL_API UEnum* Z_Construct_UEnum_VisualitationTool_EAlignementFacing();
	UPackage* Z_Construct_UPackage__Script_VisualitationTool();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UArcGizmo_NoRegister();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UArcGizmo();
	VISUALITATIONTOOL_API UClass* Z_Construct_UClass_UGizmoShape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EAlignementFacing_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VisualitationTool_EAlignementFacing, Z_Construct_UPackage__Script_VisualitationTool(), TEXT("EAlignementFacing"));
		}
		return Singleton;
	}
	template<> VISUALITATIONTOOL_API UEnum* StaticEnum<EAlignementFacing>()
	{
		return EAlignementFacing_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAlignementFacing(EAlignementFacing_StaticEnum, TEXT("/Script/VisualitationTool"), TEXT("EAlignementFacing"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VisualitationTool_EAlignementFacing_Hash() { return 3447493850U; }
	UEnum* Z_Construct_UEnum_VisualitationTool_EAlignementFacing()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VisualitationTool();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAlignementFacing"), 0, Get_Z_Construct_UEnum_VisualitationTool_EAlignementFacing_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "X", (int64)X },
				{ "Y", (int64)Y },
				{ "Z", (int64)Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "Public/ArcGizmo.h" },
				{ "X.Comment", "/**\n * \n */" },
				{ "X.Name", "X" },
				{ "Y.Comment", "/**\n * \n */" },
				{ "Y.Name", "Y" },
				{ "Z.Comment", "/**\n * \n */" },
				{ "Z.Name", "Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VisualitationTool,
				nullptr,
				"EAlignementFacing",
				"EAlignementFacing",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UArcGizmo::StaticRegisterNativesUArcGizmo()
	{
	}
	UClass* Z_Construct_UClass_UArcGizmo_NoRegister()
	{
		return UArcGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UArcGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Facing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArcGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoShape,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualitationTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "ArcGizmo.h" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_Sections_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, Sections), METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, Radius), METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, MaxAngle), METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_MinAngle_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, MinAngle), METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_MinAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_MinAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcGizmo_Statics::NewProp_Facing_MetaData[] = {
		{ "Category", "ArcGizmo" },
		{ "ModuleRelativePath", "Public/ArcGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArcGizmo_Statics::NewProp_Facing = { "Facing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcGizmo, Facing), Z_Construct_UEnum_VisualitationTool_EAlignementFacing, METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Facing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::NewProp_Facing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArcGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_MinAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcGizmo_Statics::NewProp_Facing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArcGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArcGizmo_Statics::ClassParams = {
		&UArcGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArcGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArcGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArcGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArcGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArcGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArcGizmo, 4076363436);
	template<> VISUALITATIONTOOL_API UClass* StaticClass<UArcGizmo>()
	{
		return UArcGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArcGizmo(Z_Construct_UClass_UArcGizmo, &UArcGizmo::StaticClass, TEXT("/Script/VisualitationTool"), TEXT("UArcGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArcGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
