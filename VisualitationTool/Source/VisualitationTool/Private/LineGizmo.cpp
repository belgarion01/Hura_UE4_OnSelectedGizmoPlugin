// Fill out your copyright notice in the Description page of Project Settings.


#include "LineGizmo.h"

void ULineGizmo::DrawGizmo(FPrimitiveDrawInterface* PDI) const
{
	if (Points.Num() <= 0 || (!UseOwnerAsStart && Points.Num() <= 1)) return;

	FVector Start;
	FVector End;

	if (UseOwnerAsStart)
	{
		Start = GetOwner()->GetActorLocation();
		
		if (!Points[0]) return;
		
		End = Points[0]->GetActorLocation();

		if(DotLine)
		{
			DrawDashedLine(PDI, Start, End, Color, FMath::Clamp(DashSize, dashSizeClampMin, dashSizeClampMax), SDPG_Foreground);
		}
		else
		{
			PDI->DrawLine(Start, End, Color, SDPG_Foreground, Thickness);
		}
		
	}

	for (int i = 0; i < Points.Num() - 1; i++)
	{
		if (!Points[i] || !Points[i + 1]) continue;
		
		Start = Points[i]->GetActorLocation();
		End = Points[i + 1]->GetActorLocation();
		
		if (DotLine)
		{
			DrawDashedLine(PDI, Start, End, Color, FMath::Clamp(DashSize, dashSizeClampMin, dashSizeClampMax), SDPG_Foreground);
		}
		else
		{
			PDI->DrawLine(Start, End, Color, SDPG_Foreground, Thickness);
		}
	}
}