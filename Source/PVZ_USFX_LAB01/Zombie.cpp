// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ZombieMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	if (MeshAsset.Succeeded())
	{
		ZombieMesh->SetStaticMesh(MeshAsset.Object);
	}
	RootComponent = ZombieMesh;
	SetActorLocation(FVector(400.0f, 200.0f, 100.0f));
	MoveSpeed = 100.0f;

}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation() + FVector(-MoveSpeed * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NewLocation);
	if (NewLocation.X <= 0.0f)
	{

	}
}

