// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinningTarget.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASpinningTarget::ASpinningTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// make the target mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	Mesh->SetCollisionObjectType(ECC_WorldDynamic);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	Mesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ASpinningTarget::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

// Called every frame
void ASpinningTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Rotation
	AddActorLocalRotation(FRotator(0.f, 90.f * DeltaTime, 0.f));
	
	// Floating
	RunTime += DeltaTime;
	const float angularFreq = 2.f * PI * 1.5f;
	const float offset = 50.f * FMath::Sin(angularFreq * RunTime);

	FVector NewLoc = StartLocation;
	NewLoc.Z += offset;
	SetActorLocation(NewLoc);

}

