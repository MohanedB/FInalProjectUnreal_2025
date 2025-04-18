// Fill out your copyright notice in the Description page of Project Settings.


#include "Item_Point.h"
#include "TP_ThirdPerson/TP_ThirdPersonGameMode.h"

void AItemPoint::OnCollected()
{
    if (UWorld* World = GetWorld())
    {
        if (ATP_ThirdPersonGameMode* GameMode = Cast<ATP_ThirdPersonGameMode>(World->GetAuthGameMode()))
        {
            GameMode->IncrementScore();
            SetActorHiddenInGame(true);
            SetActorEnableCollision(false);
        }
    }
}