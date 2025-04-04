﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ForceLook

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "BTT_AsyncTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_ForceLook.BTT_ForceLook_C
// 0x0030 (0x0100 - 0x00D0)
class UBTT_ForceLook_C final : public UBTT_AsyncTask_C
{
public:
	struct FBlackboardKeySelector                 TargetKey;                                         // 0x00D0(0x0028)(Edit, BlueprintVisible)
	class ABP_KillableCharacter_C*                Target;                                            // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbortTask(class AAIController* OwnerController, class APawn* ControlledPawn);
	void EndTask(class AAIController* OwnerController, class APawn* ControlledPawn);
	void UnfreezeTarget();
	void SetPlayerControlRotation(class APawn* ControlledPawn);
	void FreezeTarget();
	void TryStartTask(class AAIController* OwnerController, class APawn* ControlledPawn, bool* Success, bool* InstantFinish);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_ForceLook_C">();
	}
	static class UBTT_ForceLook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_ForceLook_C>();
	}
};
static_assert(alignof(UBTT_ForceLook_C) == 0x000008, "Wrong alignment on UBTT_ForceLook_C");
static_assert(sizeof(UBTT_ForceLook_C) == 0x000100, "Wrong size on UBTT_ForceLook_C");
static_assert(offsetof(UBTT_ForceLook_C, TargetKey) == 0x0000D0, "Member 'UBTT_ForceLook_C::TargetKey' has a wrong offset!");
static_assert(offsetof(UBTT_ForceLook_C, Target) == 0x0000F8, "Member 'UBTT_ForceLook_C::Target' has a wrong offset!");

}

