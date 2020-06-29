// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "StarGizmo.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UStarGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:

	UPROPERTY(EditAnywhere)
		FVector Offset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
		float Size = 50.f;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Blue;
};
