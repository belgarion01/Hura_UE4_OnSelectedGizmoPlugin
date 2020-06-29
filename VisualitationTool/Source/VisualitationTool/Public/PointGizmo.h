// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "PointGizmo.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UPointGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:
	UPROPERTY(EditAnywhere)
		bool UseOwnerLocation = true;

	UPROPERTY(EditAnywhere)
		AActor* TargetActor = nullptr;
	
	UPROPERTY(EditAnywhere)
		FVector Offset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Blue;

	UPROPERTY(EditAnywhere)
		float Size = 5.f;
};
