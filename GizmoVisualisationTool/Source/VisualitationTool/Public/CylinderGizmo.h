// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArcGizmo.h"
#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "CylinderGizmo.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UCylinderGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:
	
	UPROPERTY(EditAnywhere)
		TEnumAsByte<EAlignementFacing> Facing = EAlignementFacing::Z;

	UPROPERTY(EditAnywhere)
		FVector Offset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Blue;

	UPROPERTY(EditAnywhere)
		float Height = 50.f;

	UPROPERTY(EditAnywhere)
		float Radius = 30.f;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 5))
		int NumSide = 20;

	UPROPERTY(EditAnywhere)
		float Thickness = 1.f;
};
