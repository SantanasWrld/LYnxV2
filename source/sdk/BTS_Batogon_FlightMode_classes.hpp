﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_Batogon_FlightMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_Batogon_FlightMode.BTS_Batogon_FlightMode_C
// 0x0010 (0x00A8 - 0x0098)
class UBTS_Batogon_FlightMode_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DefaultSpeed;                                      // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTS_Batogon_FlightMode(int32 EntryPoint);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_Batogon_FlightMode_C">();
	}
	static class UBTS_Batogon_FlightMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_Batogon_FlightMode_C>();
	}
};
static_assert(alignof(UBTS_Batogon_FlightMode_C) == 0x000008, "Wrong alignment on UBTS_Batogon_FlightMode_C");
static_assert(sizeof(UBTS_Batogon_FlightMode_C) == 0x0000A8, "Wrong size on UBTS_Batogon_FlightMode_C");
static_assert(offsetof(UBTS_Batogon_FlightMode_C, UberGraphFrame) == 0x000098, "Member 'UBTS_Batogon_FlightMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTS_Batogon_FlightMode_C, DefaultSpeed) == 0x0000A0, "Member 'UBTS_Batogon_FlightMode_C::DefaultSpeed' has a wrong offset!");

}

