// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxGizmo.h"

void UBoxGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	FVector center = GetOwner()->GetActorLocation() + CenterOffset;
	const FBox box = FBox(center+(-Extent / 2)*Size, center + (Extent / 2)*Size);

	DrawWireBox(PDI, box, Color, SDPG_Foreground, Thickness);
}
