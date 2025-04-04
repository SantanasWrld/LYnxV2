﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_SurvivorInteriorSpeeds

#include "Basic.hpp"

#include "BTS_SurvivorInteriorSpeeds_classes.hpp"
#include "BTS_SurvivorInteriorSpeeds_parameters.hpp"


namespace SDK
{

// Function BTS_SurvivorInteriorSpeeds.BTS_SurvivorInteriorSpeeds_C.ExecuteUbergraph_BTS_SurvivorInteriorSpeeds
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_SurvivorInteriorSpeeds_C::ExecuteUbergraph_BTS_SurvivorInteriorSpeeds(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_SurvivorInteriorSpeeds_C", "ExecuteUbergraph_BTS_SurvivorInteriorSpeeds");

	Params::BTS_SurvivorInteriorSpeeds_C_ExecuteUbergraph_BTS_SurvivorInteriorSpeeds Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_SurvivorInteriorSpeeds.BTS_SurvivorInteriorSpeeds_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_SurvivorInteriorSpeeds_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_SurvivorInteriorSpeeds_C", "ReceiveActivationAI");

	Params::BTS_SurvivorInteriorSpeeds_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

