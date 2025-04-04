﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Scoring

#include "Basic.hpp"

#include "E_ScoringTag_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ScoringCategory_structs.hpp"
#include "S_ScoringActorGroup_structs.hpp"
#include "E_ScoringActorState_structs.hpp"
#include "E_ScoringActorVariant_structs.hpp"
#include "E_ScoringActor_structs.hpp"
#include "S_ScoringCategory_structs.hpp"
#include "E_ScoringActorGroup_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Scoring.BP_Scoring_C
// 0x0140 (0x03D8 - 0x0298)
class ABP_Scoring_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<E_ScoringActorState, double>             ScoringStatesMultipliers;                          // 0x02A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_ScoringActorVariant, double>           VariantsScoreMultiplier;                           // 0x02F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_ScoringActor, int32>                   ScoringActorPoints;                                // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ScoringMaxDistance;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ScoringActorGroup>           ScoringActorGroups;                                // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SaveSlotName;                                      // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FS_ScoringCategory>             ScoringCategories;                                 // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NextCaptureID;                                     // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CanCreateCapture(class ABP_Cameroid_C* Cameroid, bool* Result);
	void ComputeActorScore(class ABP_Cameroid_C* Cameroid, class AActor* Actor, const struct FVector& CaptureLocation, const struct FRotator& CaptureRotation, double HorizontalHalfFov, double VerticalHalfFov, double HorizontalFov, bool Debug, bool* IsScoring, class UBPC_ScoringComponent_C** Scoring, double* RelativeScore);
	void ComputeActorScores(class ABP_Cameroid_C* Cameroid, const struct FVector& CaptureLocation, const struct FRotator& CaptureRotation, double HorizontalFov, bool Debug, TArray<struct FS_CameroidActorScore>* ActorsScores);
	void ComputeAngleScore(TArray<struct FVector>& Points, TArray<bool>& PointsVisibility, const struct FVector& CaptureLocation, double HorizontalFov, double* AngleScore);
	void ComputeCaptureScore(TArray<struct FS_CameroidActorScore>& ActorsScores, TArray<E_ScoringTag>& Tags_0, const struct FS_ScoringCategory& Category, int32* Score);
	void ComputeDirectionScore(class UBPC_ScoringComponent_C* Scoring, const struct FRotator& CaptureRotation, double* Score);
	void ComputeVisibilityScore(class ABP_Cameroid_C* Cameroid, class UBPC_ScoringComponent_C* Scoring, class AActor* ScoringActor, const struct FVector& CaptureLocation, const struct FRotator& CaptureRotation, double HorizontalHalfFov, double VerticalHalfFov, bool Debug, double* VisibilityScore, TArray<struct FVector>* SamplePoints, TArray<bool>* PointsVisibility);
	void ContainsActor(TArray<struct FS_CameroidActorScore>& ActorsScores, E_ScoringActor Actor, E_ScoringActorState State, TSet<int32>& IgnoredActors, bool* Result);
	void ContainsActorGroup(TArray<struct FS_CameroidActorScore>& ActorsScores, E_ScoringActorGroup Group, E_ScoringActorState State, TSet<int32>& IgnoredActors, bool* Result);
	void ContainsCombo(const struct FS_ScoringCombo& Combo, TArray<struct FS_CameroidActorScore>& ActorsScores, TArray<E_ScoringTag>& Tags_0, bool* Result);
	void ContainsComboItem(const struct FS_ScoringComboItem& Item, TArray<struct FS_CameroidActorScore>& ActorsScores, TArray<E_ScoringTag>& Tags_0, TSet<int32>& IgnoredActors, bool* Result);
	void ContainsTag(TArray<E_ScoringTag>& Tags_0, E_ScoringTag Tag, bool* Result);
	void CreateActorScore(class UBPC_ScoringComponent_C* Scoring, double RelativeScore, struct FS_CameroidActorScore* ActorScore);
	void CreateCapture(int32 CaptureId, class ABP_Cameroid_C* Cameroid, const struct FVector& CaptureLocation, const struct FRotator& CaptureRotation, double HorizontalFov, bool Debug, struct FS_CameroidCapture* Capture);
	void CreateSave(class UBP_ScoringSave_C** ScoringSave);
	void ExecuteUbergraph_BP_Scoring(int32 EntryPoint);
	void FindCategory(E_ScoringCategory ECategory, struct FS_ScoringCategory* Category);
	void GetActiveScoringComponent(class AActor* Actor, class UBPC_ScoringComponent_C** Scoring);
	void GetGroups(E_ScoringActor Actor, TArray<E_ScoringActorGroup>* Groups);
	void GetNewCaptureID(int32* CaptureId);
	void GetPointsVisibility(class ABP_Cameroid_C* Cameroid, class AActor* Actor, TArray<struct FVector>& Points, const struct FVector& CaptureLocation, const struct FRotator& CaptureRotation, double HorizontalHalfFov, double VerticalHalfFov, bool Debug, TArray<bool>* PointsVisbility, int32* VisiblePointsCount);
	void GetPointVisibility(class ABP_Cameroid_C* Cameroid, class AActor* Actor, const struct FVector& Point, const struct FVector& CaptureLocation, const struct FRotator& CaptureRotation, double HorizontalHalfFov, double VerticalHalfFov, bool Debug, bool* IsVisible);
	void GetSamplePoints(const struct FVector& Origin, const struct FVector& BoxExtent, double BoundsScale, bool Debug, TArray<struct FVector>* SamplePoints);
	void GetScoringActorGroup(E_ScoringActorGroup GroupEnum, struct FS_ScoringActorGroup* Group);
	void GetScoringCategory(TArray<struct FS_CameroidActorScore>& ActorsScores, TArray<E_ScoringTag>& Tags_0, struct FS_ScoringCategory* Category);
	void GetScoringTags(class ABP_Cameroid_C* Cameroid, TArray<E_ScoringTag>* Tags_0);
	void GetStateMultiplier(E_ScoringActorState State, double* StateMultiplier);
	void GetVariantMultiplier(E_ScoringActorVariant Variant, double* VariantMultiplier);
	void IsStateCompatible(E_ScoringActorState WantedState, E_ScoringActorState ActorState, bool* Result);
	void IsValidScoringActor(class ABP_Cameroid_C* Cameroid, class AActor* Actor, bool* IsValid, class UBPC_ScoringComponent_C** ScoringComponent);
	void LoadFromDisk();
	void LoadSave(class UObject* SaveObject);
	void MakeCapture(int32 CaptureId, class ABP_Cameroid_C* Cameroid, TArray<struct FS_CameroidActorScore>& ActorsScores, TArray<E_ScoringTag>& Tags_0, E_ScoringCategory ScoringCategory, int32 Score, struct FS_CameroidCapture* Capture);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SaveToDisk();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Scoring_C">();
	}
	static class ABP_Scoring_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Scoring_C>();
	}
};
static_assert(alignof(ABP_Scoring_C) == 0x000008, "Wrong alignment on ABP_Scoring_C");
static_assert(sizeof(ABP_Scoring_C) == 0x0003D8, "Wrong size on ABP_Scoring_C");
static_assert(offsetof(ABP_Scoring_C, UberGraphFrame) == 0x000298, "Member 'ABP_Scoring_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Scoring_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, ScoringStatesMultipliers) == 0x0002A8, "Member 'ABP_Scoring_C::ScoringStatesMultipliers' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, VariantsScoreMultiplier) == 0x0002F8, "Member 'ABP_Scoring_C::VariantsScoreMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, ScoringActorPoints) == 0x000348, "Member 'ABP_Scoring_C::ScoringActorPoints' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, ScoringMaxDistance) == 0x000398, "Member 'ABP_Scoring_C::ScoringMaxDistance' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, ScoringActorGroups) == 0x0003A0, "Member 'ABP_Scoring_C::ScoringActorGroups' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, SaveSlotName) == 0x0003B0, "Member 'ABP_Scoring_C::SaveSlotName' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, ScoringCategories) == 0x0003C0, "Member 'ABP_Scoring_C::ScoringCategories' has a wrong offset!");
static_assert(offsetof(ABP_Scoring_C, NextCaptureID) == 0x0003D0, "Member 'ABP_Scoring_C::NextCaptureID' has a wrong offset!");

}

