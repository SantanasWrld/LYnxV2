﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_Squeeble_Hiding

#include "Basic.hpp"

#include "BTS_Squeeble_Hiding_classes.hpp"
#include "BTS_Squeeble_Hiding_parameters.hpp"


namespace SDK
{

// Function BTS_Squeeble_Hiding.BTS_Squeeble_Hiding_C.ExecuteUbergraph_BTS_Squeeble_Hiding
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_Squeeble_Hiding_C::ExecuteUbergraph_BTS_Squeeble_Hiding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_Squeeble_Hiding_C", "ExecuteUbergraph_BTS_Squeeble_Hiding");

	Params::BTS_Squeeble_Hiding_C_ExecuteUbergraph_BTS_Squeeble_Hiding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_Squeeble_Hiding.BTS_Squeeble_Hiding_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_Squeeble_Hiding_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_Squeeble_Hiding_C", "ReceiveActivationAI");

	Params::BTS_Squeeble_Hiding_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_Squeeble_Hiding.BTS_Squeeble_Hiding_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_Squeeble_Hiding_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_Squeeble_Hiding_C", "ReceiveDeactivationAI");

	Params::BTS_Squeeble_Hiding_C_ReceiveDeactivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

