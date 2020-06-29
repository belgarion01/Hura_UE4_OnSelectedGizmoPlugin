// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "ArcGizmo.generated.h"

/**
 * 
 */


UENUM()
enum EAlignementFacing
{
	X,
	Y,
	Z
};

UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UArcGizmo : public UGizmoShape
{
	GENERATED_BODY()

	

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:

	UPROPERTY(EditAnywhere)
		TEnumAsByte<EAlignementFacing> Facing;

	UPROPERTY(EditAnywhere)
		float MinAngle = 0.f;

	UPROPERTY(EditAnywhere)
		float MaxAngle = 90.f;

	UPROPERTY(EditAnywhere)
		float Radius = 5.f;

	UPROPERTY(EditAnywhere)
		int Sections = 10;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Red;

	UPROPERTY(EditAnywhere)
		FVector Offset = FVector::ZeroVector;
};
