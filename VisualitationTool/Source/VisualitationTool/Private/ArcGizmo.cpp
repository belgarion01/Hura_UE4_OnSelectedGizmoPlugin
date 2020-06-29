// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcGizmo.h"

void UArcGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	FVector XPlane;
	FVector YPlane;

	switch(Facing)
	{
	case EAlignementFacing::X:
		XPlane = FVector::RightVector;
		YPlane = FVector::UpVector;
		break;
		
	case EAlignementFacing::Z:
		XPlane = FVector::RightVector;
		YPlane = FVector::ForwardVector;
		break;
		
	case EAlignementFacing::Y:
		XPlane = FVector::ForwardVector;
		YPlane = FVector::UpVector;
		break;
	}
	
	DrawArc(PDI, GetOwner()->GetActorLocation() + Offset, XPlane, YPlane, MinAngle, MaxAngle, Radius, Sections, Color, SDPG_Foreground);
}
