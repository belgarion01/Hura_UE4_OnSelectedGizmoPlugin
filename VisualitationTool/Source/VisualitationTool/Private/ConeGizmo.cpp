// Fill out your copyright notice in the Description page of Project Settings.


#include "ConeGizmo.h"

void UConeGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	TArray<FVector> vertex;
	FTransform tranform = FTransform(RotationDirection.Rotation(), GetOwner()->GetActorLocation() + Offset, FVector::OneVector);

	if(SphereCap)
	{
		DrawWireSphereCappedCone(PDI, tranform, Length, Angle, NumSide, ArcFrequency, CapSegments, Color, SDPG_Foreground);
	}
	else
	{
		DrawWireCone(PDI, vertex, tranform, Length, Angle, NumSide, Color, SDPG_Foreground, Thickness);
	}

}
