// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "SphereGizmo.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API USphereGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;

protected:
	
	UPROPERTY(EditAnywhere)
		bool UseOwnerLocation = true;
	
	UPROPERTY(EditAnywhere, meta = (EditCondition = "!UseOwnerLocation"))
		AActor* CustomActorLocation = nullptr;

	UPROPERTY(EditAnywhere)
		FVector Offset = FVector::ZeroVector;
	
	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Red;
	
	UPROPERTY(EditAnywhere)
		float Radius = 10.f;

	UPROPERTY(EditAnywhere)
		bool AutoSides = true;
	
	UPROPERTY(EditAnywhere, meta = (EditCondition = "!AutoSides"))
		int NumSide = 10;
	
	UPROPERTY(EditAnywhere)
		float Thickness = 1.f;
};
