// Fill out your copyright notice in the Description page of Project Settings.


#include "ConnectionGizmo.h"

void UConnectionGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	if (ConnectedActors.Num() <= 0) return;
	
	for(int i = 0; i < ConnectedActors.Num(); i++)
	{
		if (!ConnectedActors[i]) continue;
		
		if(DotLine)
		{
			DrawDashedLine(PDI, GetOwner()->GetActorLocation(), ConnectedActors[i]->GetActorLocation(), Color, FMath::Clamp(DashSize, dashSizeClampMin, dashSizeClampMax), SDPG_Foreground);
		}
		else
		{
			PDI->DrawLine(GetOwner()->GetActorLocation(), ConnectedActors[i]->GetActorLocation(), Color, SDPG_Foreground, Thickness);
		}
	}
}
