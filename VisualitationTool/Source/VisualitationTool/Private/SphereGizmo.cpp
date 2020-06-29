// Fill out your copyright notice in the Description page of Project Settings.


#include "SphereGizmo.h"

void USphereGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	FVector location = UseOwnerLocation || !CustomActorLocation ? GetOwner()->GetActorLocation() : CustomActorLocation->GetActorLocation();
	location += Offset;

	if(AutoSides)
	{
		DrawWireSphereAutoSides(PDI, location, Color, Radius, SDPG_Foreground, Thickness);
	}
	else
	{
		DrawWireSphere(PDI, location, Color, Radius, NumSide, SDPG_Foreground, Thickness);
	}
}
