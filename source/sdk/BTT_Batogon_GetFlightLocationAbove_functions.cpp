﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Batogon_GetFlightLocationAbove

#include "Basic.hpp"

#include "BTT_Batogon_GetFlightLocationAbove_classes.hpp"
#include "BTT_Batogon_GetFlightLocationAbove_parameters.hpp"


namespace SDK
{

// Function BTT_Batogon_GetFlightLocationAbove.BTT_Batogon_GetFlightLocationAbove_C.ExecuteUbergraph_BTT_Batogon_GetFlightLocationAbove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_Batogon_GetFlightLocationAbove_C::ExecuteUbergraph_BTT_Batogon_GetFlightLocationAbove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_Batogon_GetFlightLocationAbove_C", "ExecuteUbergraph_BTT_Batogon_GetFlightLocationAbove");

	Params::BTT_Batogon_GetFlightLocationAbove_C_ExecuteUbergraph_BTT_Batogon_GetFlightLocationAbove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_Batogon_GetFlightLocationAbove.BTT_Batogon_GetFlightLocationAbove_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_Batogon_GetFlightLocationAbove_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_Batogon_GetFlightLocationAbove_C", "ReceiveExecuteAI");

	Params::BTT_Batogon_GetFlightLocationAbove_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

