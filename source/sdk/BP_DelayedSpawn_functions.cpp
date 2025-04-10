﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DelayedSpawn

#include "Basic.hpp"

#include "BP_DelayedSpawn_classes.hpp"
#include "BP_DelayedSpawn_parameters.hpp"


namespace SDK
{

// Function BP_DelayedSpawn.BP_DelayedSpawn_C.ExecuteUbergraph_BP_DelayedSpawn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DelayedSpawn_C::ExecuteUbergraph_BP_DelayedSpawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DelayedSpawn_C", "ExecuteUbergraph_BP_DelayedSpawn");

	Params::BP_DelayedSpawn_C_ExecuteUbergraph_BP_DelayedSpawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DelayedSpawn.BP_DelayedSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DelayedSpawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DelayedSpawn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

