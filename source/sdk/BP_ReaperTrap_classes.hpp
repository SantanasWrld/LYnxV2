﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReaperTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ReaperTrap.BP_ReaperTrap_C
// 0x00E0 (0x0378 - 0x0298)
class ABP_ReaperTrap_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TargetDetector;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Attack_UpdateTargetLocation_E0B4691E4138EF3BB482BD8E75DDF567; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Attack_Height_E0B4691E4138EF3BB482BD8E75DDF567; // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Attack_Forward_E0B4691E4138EF3BB482BD8E75DDF567; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_Attack__Direction_E0B4691E4138EF3BB482BD8E75DDF567; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_Attack;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, bool>                     Affinities;                                        // 0x02D0(0x0050)(Edit, BlueprintVisible)
	double                                        MinAttackDelay;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxAttackDelay;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Reaper_C*                           Reaper;                                            // 0x0330(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_KillableCharacter_C*>        Targets;                                           // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_KillableCharacter_C*                CurrentTarget;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AttackTimerHandle;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttackTargetLocation;                              // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFlying;                                          // 0x0370(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_DragonTrap_TargetDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_DragonTrap_TargetDetector_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_ReaperTrap(int32 EntryPoint);
	void GetTarget(class ABP_KillableCharacter_C** Character);
	void OnRep_IsFlying();
	void ReceiveBeginPlay();
	void StartAttack();
	void TargetsUpdated();
	void Timeline_Attack__Catch__EventFunc();
	void Timeline_Attack__FinishedFunc();
	void Timeline_Attack__UpdateFunc();
	void UpdateTargetLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ReaperTrap_C">();
	}
	static class ABP_ReaperTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ReaperTrap_C>();
	}
};
static_assert(alignof(ABP_ReaperTrap_C) == 0x000008, "Wrong alignment on ABP_ReaperTrap_C");
static_assert(sizeof(ABP_ReaperTrap_C) == 0x000378, "Wrong size on ABP_ReaperTrap_C");
static_assert(offsetof(ABP_ReaperTrap_C, UberGraphFrame) == 0x000298, "Member 'ABP_ReaperTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Arrow) == 0x0002A0, "Member 'ABP_ReaperTrap_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, TargetDetector) == 0x0002A8, "Member 'ABP_ReaperTrap_C::TargetDetector' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ReaperTrap_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Timeline_Attack_UpdateTargetLocation_E0B4691E4138EF3BB482BD8E75DDF567) == 0x0002B8, "Member 'ABP_ReaperTrap_C::Timeline_Attack_UpdateTargetLocation_E0B4691E4138EF3BB482BD8E75DDF567' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Timeline_Attack_Height_E0B4691E4138EF3BB482BD8E75DDF567) == 0x0002BC, "Member 'ABP_ReaperTrap_C::Timeline_Attack_Height_E0B4691E4138EF3BB482BD8E75DDF567' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Timeline_Attack_Forward_E0B4691E4138EF3BB482BD8E75DDF567) == 0x0002C0, "Member 'ABP_ReaperTrap_C::Timeline_Attack_Forward_E0B4691E4138EF3BB482BD8E75DDF567' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Timeline_Attack__Direction_E0B4691E4138EF3BB482BD8E75DDF567) == 0x0002C4, "Member 'ABP_ReaperTrap_C::Timeline_Attack__Direction_E0B4691E4138EF3BB482BD8E75DDF567' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Timeline_Attack) == 0x0002C8, "Member 'ABP_ReaperTrap_C::Timeline_Attack' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Affinities) == 0x0002D0, "Member 'ABP_ReaperTrap_C::Affinities' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, MinAttackDelay) == 0x000320, "Member 'ABP_ReaperTrap_C::MinAttackDelay' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, MaxAttackDelay) == 0x000328, "Member 'ABP_ReaperTrap_C::MaxAttackDelay' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Reaper) == 0x000330, "Member 'ABP_ReaperTrap_C::Reaper' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, Targets) == 0x000338, "Member 'ABP_ReaperTrap_C::Targets' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, CurrentTarget) == 0x000348, "Member 'ABP_ReaperTrap_C::CurrentTarget' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, AttackTimerHandle) == 0x000350, "Member 'ABP_ReaperTrap_C::AttackTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, AttackTargetLocation) == 0x000358, "Member 'ABP_ReaperTrap_C::AttackTargetLocation' has a wrong offset!");
static_assert(offsetof(ABP_ReaperTrap_C, IsFlying) == 0x000370, "Member 'ABP_ReaperTrap_C::IsFlying' has a wrong offset!");

}

