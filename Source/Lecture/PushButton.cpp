// Fill out your copyright notice in the Description page of Project Settings.


#include "PushButton.h"
#include "Components/StaticMeshComponent.h"
#include "Door.h"

// Sets default values
APushButton::APushButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));
	SetRootComponent(ButtonMesh);
	ButtonMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ButtonMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	ButtonMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void APushButton::Activate() {
	if (Pressed) {
		return;
	}
	Pressed = true;

	if (LinkedDoor) {
		LinkedDoor->OpenDoor();
	}
}

// Called when the game starts or when spawned
void APushButton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APushButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

