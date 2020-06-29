// Fill out your copyright notice in the Description page of Project Settings.


#include "Visualizer.h"
#include "GizmoShape.h"

void Visualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View,
                                   FPrimitiveDrawInterface* PDI)
{
	const UGizmoShape* gizmoShape = Cast<UGizmoShape>(Component);
	if (gizmoShape && gizmoShape->Visible) 
	{
		gizmoShape->DrawGizmo(PDI);
	}
}
