// Copyright Epic Games, Inc. All Rights Reserved.

#include "VisualitationTool.h"



#include "GizmoShape.h"
#include "UnrealEd.h"
#include "Visualizer.h"

#define LOCTEXT_NAMESPACE "FVisualitationToolModule"

void FVisualitationToolModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Make a new instance of the visualizer

	if (GUnrealEd) 
	{
		TSharedPtr<FComponentVisualizer> visualizer = MakeShareable(new Visualizer());

		// Register it to our specific component class
		GUnrealEd->RegisterComponentVisualizer(UGizmoShape::StaticClass()->GetFName(), visualizer);
		visualizer->OnRegister();
	}
}

void FVisualitationToolModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (GUnrealEd)
	{
		GUnrealEd->UnregisterComponentVisualizer(UGizmoShape::StaticClass()->GetFName());
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FVisualitationToolModule, VisualitationTool)