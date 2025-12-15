// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PushButton.generated.h"

class UStaticMeshComponent;
class ADoor;

UCLASS()
class LECTURE_API APushButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APushButton();
	UFUNCTION(BlueprintCallable, Category = "Button")
	void Activate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* ButtonMesh;
	UPROPERTY(EditAnywhere, Category = "Button")
	ADoor* LinkedDoor = nullptr;
	bool Pressed = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
