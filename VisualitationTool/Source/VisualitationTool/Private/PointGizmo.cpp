// Fill out your copyright notice in the Description page of Project Settings.


#include "PointGizmo.h"

void UPointGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	FVector position = UseOwnerLocation || !TargetActor ? GetOwner()->GetActorLocation() : TargetActor->GetActorLocation();
	position += Offset;
	
	PDI->DrawPoint(position, Color, Size, SDPG_Foreground);
}
