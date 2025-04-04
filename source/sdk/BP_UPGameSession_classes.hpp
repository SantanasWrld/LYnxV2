﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UPGameSession

#include "Basic.hpp"

#include "E_Spawnable_structs.hpp"
#include "S_SpawnableVariants_structs.hpp"
#include "S_SpawnWave_structs.hpp"
#include "E_SpawnContext_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "S_SpawnRules_structs.hpp"
#include "S_VariantsProbabilities_structs.hpp"
#include "S_RareSpawn_structs.hpp"
#include "E_ScoringActorVariant_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UPGameSession.BP_UPGameSession_C
// 0x0198 (0x0430 - 0x0298)
class ABP_UPGameSession_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        SessionDuration;                                   // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SessionTimer;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          AllPlayersDead;                                    // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SessionEnded;                                      // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA[0x6];                                      // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimeRemaining;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Difficulty;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_SpawnRules>                  SpawnRules;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_SpawnWave>                   SpawnWaves;                                        // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_RareSpawn>                   RareSpawns;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_Spawnable, struct FS_VariantsProbabilities> VariantsProbabilities;                        // 0x0300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_Spawnable, class UClass*>              Spawnables;                                        // 0x0350(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_Spawnable, struct FS_SpawnableVariants> SpawnableVariants;                                // 0x03A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxSpawnerTries;                                   // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Spawner_C*>                  Spawners;                                          // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         WaveIndex;                                         // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          SpawnRandomStream;                                 // 0x040C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_414[0x4];                                      // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class ABP_UPGameSession_C* GameSession)> OnSessionEnded;           // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_UPGameInstance_C*                   GameInstance;                                      // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyCustomAmountModifier(int32 InMin, int32 InMax, TArray<E_Spawnable>& Spawnables_0, double* Min, double* Max);
	void ApplyCustomTimeModifier(double InMin, double InMax, E_Spawnable Spawnable, double* Min, double* Max);
	void CheckDeadPlayers();
	void EndSession();
	void ExecuteUbergraph_BP_UPGameSession(int32 EntryPoint);
	void GetInteractNoise(bool* NoiseOnInteract, double* NoiseRange);
	int32 GetRandomCount(double Min, double Max);
	void GetRandomSpawnable(const TArray<E_Spawnable>& Spawnables_0, E_Spawnable* Spawnable);
	void GetRandomSpawnables(const TArray<E_Spawnable>& Options, int32 Count, TArray<E_Spawnable>* Spawnables_0);
	void GetRandomSpawner(const TArray<class ABP_Spawner_C*>& Spawners_0, class ABP_Spawner_C** Spawner);
	void GetRandomTime(double Min, double Max, double* Value);
	void GetSpawnableClass(E_Spawnable Spawnable, class UClass** Class_0);
	void GetSpawner(E_SpawnContext SpawnContext, E_Spawnable Spawnable, class ABP_Spawner_C** Spawner);
	void GetSpawnRules(int32 Difficulty_0, TArray<struct FS_SpawnWave>* SpawnWaves_0, TArray<struct FS_RareSpawn>* RareSpawns_0, TMap<E_Spawnable, struct FS_VariantsProbabilities>* Variants);
	void GetVariant(const struct FS_SpawnableVariants& Variants, const struct FS_VariantsProbabilities& Probabilities, class UClass** Class_0);
	void GetVariants(E_Spawnable Spawnable, bool* HasVariants, struct FS_SpawnableVariants* Variants);
	void HasSessionStarted(bool* Started);
	void InitPlayerEvents();
	void InitSessionWidget();
	void IsReadyToStart(bool* IsReady);
	void IsSpawnerUsable(class ABP_Spawner_C* Spawner, E_SpawnContext SpawnContext, E_Spawnable Spawnable, bool* IsUsable);
	void KillAllPlayers();
	void PlayerKilled(class ABP_KillableCharacter_C* KilledCharacter, class AActor* Killer);
	void PlayerSpawned(class ABP_UPPlayerCharacter_C* Player);
	void PrepareRareSpawns();
	void ReceiveBeginPlay();
	void SelectRareSpawnable(const TMap<E_Spawnable, int32>& Spawnables_0, E_Spawnable* Spawnable);
	void SessionEnded__All_();
	void SetSpawnRules(int32 Difficulty_0, TArray<struct FS_SpawnWave>& SpawnWaves_0, TArray<struct FS_RareSpawn>& RareSpawns_0, const TMap<E_Spawnable, struct FS_VariantsProbabilities>& Variants);
	void ShouldSpawn(int32 SpawnChance, bool* Result);
	void SpawnActor(E_SpawnContext SpawnContext, E_Spawnable Spawnable);
	void SpawnNextWave();
	void SpawnSpawnable(E_Spawnable Spawnable, class ABP_Spawner_C* Spawner, double VerticalOffset, class AActor** Actor);
	void SpawnWave(const struct FS_SpawnWave& Wave);
	void StartSession();
	void StartSpawning();
	void TrySpawn(E_SpawnContext Context, E_Spawnable Spawnable, class AActor** Actor);
	void TrySpawnOnSpawner(E_Spawnable Spawnable, class ABP_Spawner_C* Spawner, int32 MaxTries, class AActor** Actor);
	void UpdateDifficulty();
	void UpdateTimeRemaining();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UPGameSession_C">();
	}
	static class ABP_UPGameSession_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UPGameSession_C>();
	}
};
static_assert(alignof(ABP_UPGameSession_C) == 0x000008, "Wrong alignment on ABP_UPGameSession_C");
static_assert(sizeof(ABP_UPGameSession_C) == 0x000430, "Wrong size on ABP_UPGameSession_C");
static_assert(offsetof(ABP_UPGameSession_C, UberGraphFrame) == 0x000298, "Member 'ABP_UPGameSession_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_UPGameSession_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SessionDuration) == 0x0002A8, "Member 'ABP_UPGameSession_C::SessionDuration' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SessionTimer) == 0x0002B0, "Member 'ABP_UPGameSession_C::SessionTimer' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, AllPlayersDead) == 0x0002B8, "Member 'ABP_UPGameSession_C::AllPlayersDead' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SessionEnded) == 0x0002B9, "Member 'ABP_UPGameSession_C::SessionEnded' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, TimeRemaining) == 0x0002C0, "Member 'ABP_UPGameSession_C::TimeRemaining' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, Difficulty) == 0x0002C8, "Member 'ABP_UPGameSession_C::Difficulty' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SpawnRules) == 0x0002D0, "Member 'ABP_UPGameSession_C::SpawnRules' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SpawnWaves) == 0x0002E0, "Member 'ABP_UPGameSession_C::SpawnWaves' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, RareSpawns) == 0x0002F0, "Member 'ABP_UPGameSession_C::RareSpawns' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, VariantsProbabilities) == 0x000300, "Member 'ABP_UPGameSession_C::VariantsProbabilities' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, Spawnables) == 0x000350, "Member 'ABP_UPGameSession_C::Spawnables' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SpawnableVariants) == 0x0003A0, "Member 'ABP_UPGameSession_C::SpawnableVariants' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, MaxSpawnerTries) == 0x0003F0, "Member 'ABP_UPGameSession_C::MaxSpawnerTries' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, Spawners) == 0x0003F8, "Member 'ABP_UPGameSession_C::Spawners' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, WaveIndex) == 0x000408, "Member 'ABP_UPGameSession_C::WaveIndex' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, SpawnRandomStream) == 0x00040C, "Member 'ABP_UPGameSession_C::SpawnRandomStream' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, OnSessionEnded) == 0x000418, "Member 'ABP_UPGameSession_C::OnSessionEnded' has a wrong offset!");
static_assert(offsetof(ABP_UPGameSession_C, GameInstance) == 0x000428, "Member 'ABP_UPGameSession_C::GameInstance' has a wrong offset!");

}

