// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VISUALITATIONTOOL_PointGizmo_generated_h
#error "PointGizmo.generated.h already included, missing '#pragma once' in PointGizmo.h"
#endif
#define VISUALITATIONTOOL_PointGizmo_generated_h

#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_SPARSE_DATA
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_RPC_WRAPPERS
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointGizmo(); \
	friend struct Z_Construct_UClass_UPointGizmo_Statics; \
public: \
	DECLARE_CLASS(UPointGizmo, UGizmoShape, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VisualitationTool"), NO_API) \
	DECLARE_SERIALIZER(UPointGizmo)


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPointGizmo(); \
	friend struct Z_Construct_UClass_UPointGizmo_Statics; \
public: \
	DECLARE_CLASS(UPointGizmo, UGizmoShape, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VisualitationTool"), NO_API) \
	DECLARE_SERIALIZER(UPointGizmo)


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointGizmo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointGizmo(UPointGizmo&&); \
	NO_API UPointGizmo(const UPointGizmo&); \
public:


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointGizmo() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointGizmo(UPointGizmo&&); \
	NO_API UPointGizmo(const UPointGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointGizmo)


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UseOwnerLocation() { return STRUCT_OFFSET(UPointGizmo, UseOwnerLocation); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UPointGizmo, TargetActor); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UPointGizmo, Offset); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(UPointGizmo, Color); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(UPointGizmo, Size); }


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_12_PROLOG
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_SPARSE_DATA \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_RPC_WRAPPERS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_INCLASS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_SPARSE_DATA \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VISUALITATIONTOOL_API UClass* StaticClass<class UPointGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_PointGizmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
