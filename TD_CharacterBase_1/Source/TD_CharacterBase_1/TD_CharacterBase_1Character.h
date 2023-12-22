// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TD_CharacterBase_1Character.generated.h"

UCLASS(Blueprintable)
class ATD_CharacterBase_1Character : public ACharacter
{
	GENERATED_BODY()

public:
	ATD_CharacterBase_1Character();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	void Dash();
	void DashTimer();
	void Teleport(FVector Destination);

	//variable used to save the pawn's current position
	FVector Current;
	FVector Destination;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UPROPERTY(EditAnywhere)
	float DashDistance;

	UPROPERTY(EditAnywhere)
	float DashDuration;

	UPROPERTY(EditAnywhere)
	float DashTimeDelay;

	//Other variables to aid dash
	FVector DashEnd;
	bool Dashed;
	bool Dashing;
	float TimeElapsed = 0;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

