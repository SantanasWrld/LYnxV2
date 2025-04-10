﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Squeeble_GetHidePoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_Squeeble_GetHidePoint.BTT_Squeeble_GetHidePoint_C
// 0x0038 (0x00E0 - 0x00A8)
class UBTT_Squeeble_GetHidePoint_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 HidePointKey;                                      // 0x00B0(0x0028)(Edit, BlueprintVisible)
	double                                        MinDistance;                                       // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_Squeeble_GetHidePoint(int32 EntryPoint);
	void GetRandomHidePoint(TArray<struct FVector>& HidePoints, const struct FVector& SqueebleLocation, double MinDistance_0, struct FVector* HidePoint, bool* Found);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_Squeeble_GetHidePoint_C">();
	}
	static class UBTT_Squeeble_GetHidePoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_Squeeble_GetHidePoint_C>();
	}
};
static_assert(alignof(UBTT_Squeeble_GetHidePoint_C) == 0x000008, "Wrong alignment on UBTT_Squeeble_GetHidePoint_C");
static_assert(sizeof(UBTT_Squeeble_GetHidePoint_C) == 0x0000E0, "Wrong size on UBTT_Squeeble_GetHidePoint_C");
static_assert(offsetof(UBTT_Squeeble_GetHidePoint_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_Squeeble_GetHidePoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_Squeeble_GetHidePoint_C, HidePointKey) == 0x0000B0, "Member 'UBTT_Squeeble_GetHidePoint_C::HidePointKey' has a wrong offset!");
static_assert(offsetof(UBTT_Squeeble_GetHidePoint_C, MinDistance) == 0x0000D8, "Member 'UBTT_Squeeble_GetHidePoint_C::MinDistance' has a wrong offset!");

}

