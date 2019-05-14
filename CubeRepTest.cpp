// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeRepTest.h"

// Sets default values for this component's properties
UCubeRepTest::UCubeRepTest()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicated(true);
	// ...
}


// Called when the game starts
void UCubeRepTest::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCubeRepTest::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CallTheServerMyDude();
}

void UCubeRepTest::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UCubeRepTest::CallTheServerMyDude_Implementation()
{
	int32 aaa = 5;
}

bool UCubeRepTest::CallTheServerMyDude_Validate()
{
	return true;
}

