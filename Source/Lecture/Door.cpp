// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	SetRootComponent(DoorMesh);
	DoorMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	RotClosed = GetActorRotation();
	RotTarget = RotClosed + FRotator(0.f, 90.f, 0.f);
}

void ADoor::OpenDoor() {
	Opened = true;
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Opened) {
		return;
	}

	FRotator RotCurrent = GetActorRotation();
	FRotator NewRot = FMath::RInterpConstantTo(RotCurrent, RotTarget, DeltaTime, 100.f);
	SetActorRotation(NewRot);

	if (NewRot.Equals(RotTarget, 0.5f)) {
		SetActorRotation(RotTarget);
		Opened = false;
	}
}

