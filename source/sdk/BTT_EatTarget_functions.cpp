﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_EatTarget

#include "Basic.hpp"

#include "BTT_EatTarget_classes.hpp"
#include "BTT_EatTarget_parameters.hpp"


namespace SDK
{

// Function BTT_EatTarget.BTT_EatTarget_C.CalculateFutureTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_EatTarget_C::CalculateFutureTargetLocation(class AActor* Target, double Time, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_EatTarget_C", "CalculateFutureTargetLocation");

	Params::BTT_EatTarget_C_CalculateFutureTargetLocation Parms{};

	Parms.Target = Target;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BTT_EatTarget.BTT_EatTarget_C.ExecuteUbergraph_BTT_EatTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_EatTarget_C::ExecuteUbergraph_BTT_EatTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_EatTarget_C", "ExecuteUbergraph_BTT_EatTarget");

	Params::BTT_EatTarget_C_ExecuteUbergraph_BTT_EatTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_EatTarget.BTT_EatTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_EatTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_EatTarget_C", "ReceiveExecuteAI");

	Params::BTT_EatTarget_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

