// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

UCLASS()
class NAZIZOMBIES_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ACharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category= Mesh)
		class USkeletalMeshComponent* mesh1P;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category= Mesh)
		class USkeletalMeshComponent* FP_Gun;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category= Mesh)
		class USceneComponent* FP_MuzzleLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Camera, meta =  ( AllowPrivateAccess = "true"));
		class UCameraComponent* FirstPersonCameraComponent;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Camera)
		float BaseTurnRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Camera)
		float BaseLookUpRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Gameplay)
		FVector GunOffset;
	UPROPERTY(EditDefaultsOnly, Category= Projectile)
		TSubclassOf<class ANaziZombiesProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Gameplay)
		class USoundBase* FireSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Gameplay)
		class UAnimMontage* FireAnimation;

protected:
	void OnFire();
	void MoveForward(float Val);
	void MoveRight(float Val);
	void TurnRate(float Rate);
	void LookUpRate(float Rate);
public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const {return mesh1P;}
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const {return FirstPersonCameraComponent;}
};
