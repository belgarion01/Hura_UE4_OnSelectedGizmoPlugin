// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GizmoShape.generated.h"


UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class VISUALITATIONTOOL_API UGizmoShape : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGizmoShape();

	UPROPERTY(EditAnywhere, Category="Gizmo Shape")
	bool Visible = true;
	
	virtual void DrawGizmo(FPrimitiveDrawInterface* PDI) const PURE_VIRTUAL(UGizmoShape::Draw, );
};
