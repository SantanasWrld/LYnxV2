﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AttachToTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AttachToTarget.BTT_AttachToTarget_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTT_AttachToTarget_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Target_Key;                                        // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_AttachToTarget(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AttachToTarget_C">();
	}
	static class UBTT_AttachToTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AttachToTarget_C>();
	}
};
static_assert(alignof(UBTT_AttachToTarget_C) == 0x000008, "Wrong alignment on UBTT_AttachToTarget_C");
static_assert(sizeof(UBTT_AttachToTarget_C) == 0x0000D8, "Wrong size on UBTT_AttachToTarget_C");
static_assert(offsetof(UBTT_AttachToTarget_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_AttachToTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AttachToTarget_C, Target_Key) == 0x0000B0, "Member 'UBTT_AttachToTarget_C::Target_Key' has a wrong offset!");

}

