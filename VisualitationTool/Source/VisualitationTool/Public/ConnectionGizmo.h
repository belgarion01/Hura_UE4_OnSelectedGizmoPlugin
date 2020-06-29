// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GizmoShape.h"
#include "ConnectionGizmo.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UConnectionGizmo : public UGizmoShape
{
	GENERATED_BODY()

public:
	void DrawGizmo(FPrimitiveDrawInterface* PDI) const override;
	
protected:
	UPROPERTY(EditAnywhere)
		TArray<AActor*> ConnectedActors;

	UPROPERTY(EditAnywhere)
		FColor Color = FColor::Blue;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "!DotLine", Tooltip = "Dot Lines do not have a Thickness parameter"))
		float Thickness = 1.f;

	UPROPERTY(EditAnywhere)
		bool DotLine = false;

	// Unreal crashes when DashSize is close to 0
	const float dashSizeClampMin = 0.1f;
	const float dashSizeClampMax = 200.f;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "DotLine", ClampMin = 0.1f, ClampMax = 200.f))
		float DashSize = 1.f;
};
