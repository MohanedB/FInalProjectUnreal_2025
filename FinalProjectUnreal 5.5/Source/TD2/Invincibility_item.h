#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Invincibility_item.generated.h"

UCLASS()
class TD2_API AInvincibility_item : public AItem
{
	GENERATED_BODY()

public:
	virtual void OnCollected() override;
};