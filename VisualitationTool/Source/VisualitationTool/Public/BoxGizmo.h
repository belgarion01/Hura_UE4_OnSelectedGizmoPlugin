// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "BoxGizmo.generated.h"

/**
 * 
 */
UCLASS(meta =(BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UBoxGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:
	UPROPERTY(EditAnywhere)
		FVector Extent = FVector::OneVector;

	UPROPERTY(EditAnywhere)
		float Size = 50.f;

	UPROPERTY(EditAnywhere)
		FVector CenterOffset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Blue;

	UPROPERTY(EditAnywhere)
		float Thickness = 1.f;
};
