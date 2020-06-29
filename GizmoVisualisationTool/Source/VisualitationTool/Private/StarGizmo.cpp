// Fill out your copyright notice in the Description page of Project Settings.


#include "StarGizmo.h"

void UStarGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	DrawWireStar(PDI, GetOwner()->GetActorLocation() + Offset, Size, Color, SDPG_Foreground);
}
