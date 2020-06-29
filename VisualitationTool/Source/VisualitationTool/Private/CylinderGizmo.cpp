// Fill out your copyright notice in the Description page of Project Settings.


#include "CylinderGizmo.h"

void UCylinderGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	FVector XAlignement;
	FVector YAlignement;
	FVector ZAlignement;

	switch (Facing)
	{
	case EAlignementFacing::X:
		XAlignement = FVector(0.f, 0.f, 1.f);
		YAlignement = FVector(0.f, 1.f, 0.f);
		ZAlignement = FVector(1.f, 0.f, 0.f);
		break;

	case EAlignementFacing::Z:
		XAlignement = FVector(1.f, 0.f, 0.f);
		YAlignement = FVector(0.f, 1.f, 0.f);
		ZAlignement = FVector(0.f, 0.f, 1.f);
		break;

	case EAlignementFacing::Y:
		XAlignement = FVector(1.f, 0.f, 0.f);
		YAlignement = FVector(0.f, 0.f, 1.f);
		ZAlignement = FVector(0.f, 1.f, 0.f);
		break;
	}
	
	DrawWireCylinder(PDI, GetOwner()->GetActorLocation() + Offset, XAlignement, YAlignement, ZAlignement, Color, Radius, Height, NumSide, SDPG_Foreground, Thickness);
}
