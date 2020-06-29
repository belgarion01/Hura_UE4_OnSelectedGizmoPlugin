// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VISUALITATIONTOOL_ConnectionGizmo_generated_h
#error "ConnectionGizmo.generated.h already included, missing '#pragma once' in ConnectionGizmo.h"
#endif
#define VISUALITATIONTOOL_ConnectionGizmo_generated_h

#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_SPARSE_DATA
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_RPC_WRAPPERS
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnectionGizmo(); \
	friend struct Z_Construct_UClass_UConnectionGizmo_Statics; \
public: \
	DECLARE_CLASS(UConnectionGizmo, UGizmoShape, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VisualitationTool"), NO_API) \
	DECLARE_SERIALIZER(UConnectionGizmo)


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConnectionGizmo(); \
	friend struct Z_Construct_UClass_UConnectionGizmo_Statics; \
public: \
	DECLARE_CLASS(UConnectionGizmo, UGizmoShape, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VisualitationTool"), NO_API) \
	DECLARE_SERIALIZER(UConnectionGizmo)


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnectionGizmo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectionGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnectionGizmo(UConnectionGizmo&&); \
	NO_API UConnectionGizmo(const UConnectionGizmo&); \
public:


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnectionGizmo() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnectionGizmo(UConnectionGizmo&&); \
	NO_API UConnectionGizmo(const UConnectionGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectionGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConnectionGizmo)


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConnectedActors() { return STRUCT_OFFSET(UConnectionGizmo, ConnectedActors); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(UConnectionGizmo, Color); } \
	FORCEINLINE static uint32 __PPO__Thickness() { return STRUCT_OFFSET(UConnectionGizmo, Thickness); } \
	FORCEINLINE static uint32 __PPO__DotLine() { return STRUCT_OFFSET(UConnectionGizmo, DotLine); } \
	FORCEINLINE static uint32 __PPO__DashSize() { return STRUCT_OFFSET(UConnectionGizmo, DashSize); }


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_12_PROLOG
#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_SPARSE_DATA \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_RPC_WRAPPERS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_INCLASS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_SPARSE_DATA \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VISUALITATIONTOOL_API UClass* StaticClass<class UConnectionGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VisualitationTool_Source_VisualitationTool_Public_ConnectionGizmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
