// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "ConeGizmo.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UConeGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:

	UPROPERTY(EditAnywhere)
		FVector Offset = FVector::ZeroVector;
	
	UPROPERTY(EditAnywhere)
		FVector RotationDirection = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
		float Length = 50.f;

	UPROPERTY(EditAnywhere, meta = (UIMin = 0.f, UIMax = 90.f, ClampMin = 0.f, ClampMax = 90.f))
		float Angle = 25.f;

	// NumSide below 4 crashes
	UPROPERTY(EditAnywhere, meta = (ClampMin = 4))
		int NumSide = 10;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Blue;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "!SphereCap"))
		float Thickness = 1.f;

	UPROPERTY(EditAnywhere)
		bool SphereCap = false;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 1, EditCondition = "SphereCap"))
		int ArcFrequency = 5;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 1, EditCondition = "SphereCap"))
		int CapSegments = 5;
};
