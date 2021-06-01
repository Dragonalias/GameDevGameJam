// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameDevGameJam.h"
#include "GASGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEVGAMEJAM_API UGASGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
	UGASGameplayAbility() {};

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;
};
