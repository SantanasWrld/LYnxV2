﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LimbItem

#include "Basic.hpp"

#include "BP_LimbItem_classes.hpp"
#include "BP_LimbItem_parameters.hpp"


namespace SDK
{

// Function BP_LimbItem.BP_LimbItem_C.ExecuteUbergraph_BP_LimbItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LimbItem_C::ExecuteUbergraph_BP_LimbItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "ExecuteUbergraph_BP_LimbItem");

	Params::BP_LimbItem_C_ExecuteUbergraph_BP_LimbItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LimbItem.BP_LimbItem_C.GetThrowImpulseVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_LimbItem_C::GetThrowImpulseVector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "GetThrowImpulseVector");

	Params::BP_LimbItem_C_GetThrowImpulseVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LimbItem.BP_LimbItem_C.GetThrowOriginLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_LimbItem_C::GetThrowOriginLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "GetThrowOriginLocation");

	Params::BP_LimbItem_C_GetThrowOriginLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LimbItem.BP_LimbItem_C.OnRep_IsInUse
// (BlueprintCallable, BlueprintEvent)

void ABP_LimbItem_C::OnRep_IsInUse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "OnRep_IsInUse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LimbItem.BP_LimbItem_C.OnRep_Limb
// (BlueprintCallable, BlueprintEvent)

void ABP_LimbItem_C::OnRep_Limb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "OnRep_Limb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LimbItem.BP_LimbItem_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LimbItem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "ReceiveEndPlay");

	Params::BP_LimbItem_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LimbItem.BP_LimbItem_C.SetLimb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Limb_C*                       Limb_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LimbItem_C::SetLimb(class ABP_Limb_C* Limb_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LimbItem_C", "SetLimb");

	Params::BP_LimbItem_C_SetLimb Parms{};

	Parms.Limb_0 = Limb_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

