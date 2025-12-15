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
	Mesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ASpinningTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpinningTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

