// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnrealNetwork.h"

#include "CubeRepTest.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UCubeRepTest : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCubeRepTest();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	UPROPERTY(Replicated)
	int32 Ammo;

	UFUNCTION(Server, WithValidation, Reliable)
	void CallTheServerMyDude();
	void CallTheServerMyDude_Implementation();
	bool CallTheServerMyDude_Validate();

protected:

	// Called when the game starts
	virtual void BeginPlay() override;
		
};
