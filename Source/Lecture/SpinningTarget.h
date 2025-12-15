// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpinningTarget.generated.h"

class UStaticMeshComponent;

UCLASS()
class LECTURE_API ASpinningTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpinningTarget();

protected:
	// Called when the game starts or when spawne
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UStaticMeshComponent* Mesh;
	FVector StartLocation;
	float RunTime = 0.f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
