﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BatogonFlightTarget

#include "Basic.hpp"

#include "BP_BatogonFlightTarget_classes.hpp"
#include "BP_BatogonFlightTarget_parameters.hpp"


namespace SDK
{

// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.ExecuteUbergraph_BP_BatogonFlightTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BatogonFlightTarget_C::ExecuteUbergraph_BP_BatogonFlightTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "ExecuteUbergraph_BP_BatogonFlightTarget");

	Params::BP_BatogonFlightTarget_C_ExecuteUbergraph_BP_BatogonFlightTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.GetFlyLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector*                         FlyLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BatogonFlightTarget_C::GetFlyLocation(const struct FHitResult& Hit, struct FVector* FlyLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "GetFlyLocation");

	Params::BP_BatogonFlightTarget_C_GetFlyLocation Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (FlyLocation != nullptr)
		*FlyLocation = std::move(Parms.FlyLocation);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.GetNavigationPointFlyLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NavigationPoint_C*            NavigationPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         FlyLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BatogonFlightTarget_C::GetNavigationPointFlyLocation(class ABP_NavigationPoint_C* NavigationPoint, struct FVector* FlyLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "GetNavigationPointFlyLocation");

	Params::BP_BatogonFlightTarget_C_GetNavigationPointFlyLocation Parms{};

	Parms.NavigationPoint = NavigationPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (FlyLocation != nullptr)
		*FlyLocation = std::move(Parms.FlyLocation);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.GetRandomDestination
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                         Destination                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BatogonFlightTarget_C::GetRandomDestination(struct FVector* Destination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "GetRandomDestination");

	Params::BP_BatogonFlightTarget_C_GetRandomDestination Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Destination != nullptr)
		*Destination = std::move(Parms.Destination);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.IsFlyLocationAccessible
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   FlyLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_BatogonFlightTarget_C::IsFlyLocationAccessible(const struct FVector& FlyLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "IsFlyLocationAccessible");

	Params::BP_BatogonFlightTarget_C_IsFlyLocationAccessible Parms{};

	Parms.FlyLocation = std::move(FlyLocation);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BatogonFlightTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BatogonFlightTarget_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "ReceiveTick");

	Params::BP_BatogonFlightTarget_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.SetRandomDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_BatogonFlightTarget_C::SetRandomDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "SetRandomDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BatogonFlightTarget.BP_BatogonFlightTarget_C.SnapToFlyHeight
// (BlueprintCallable, BlueprintEvent)

void ABP_BatogonFlightTarget_C::SnapToFlyHeight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BatogonFlightTarget_C", "SnapToFlyHeight");

	UObject::ProcessEvent(Func, nullptr);
}

}

