// Fill out your copyright notice in the Description page of Project Settings.


#include "Invincibility_item.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include <Kismet/GameplayStatics.h>

void AInvincibility_item::OnCollected()
{
	ATP_ThirdPersonCharacter* Player = Cast<ATP_ThirdPersonCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Player)
	{
		Player->ActivateInvincibility();
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT(" Invincibility Activated via Item!"));
	}
}