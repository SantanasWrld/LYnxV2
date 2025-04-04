﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Objectives

#include "Basic.hpp"

#include "W_Objectives_classes.hpp"
#include "W_Objectives_parameters.hpp"


namespace SDK
{

// Function W_Objectives.W_Objectives_C.DisplaySessionObjective
// (BlueprintCallable, BlueprintEvent)

void UW_Objectives_C::DisplaySessionObjective()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Objectives_C", "DisplaySessionObjective");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Objectives.W_Objectives_C.ExecuteUbergraph_W_Objectives
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Objectives_C::ExecuteUbergraph_W_Objectives(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Objectives_C", "ExecuteUbergraph_W_Objectives");

	Params::W_Objectives_C_ExecuteUbergraph_W_Objectives Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Objectives.W_Objectives_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Objectives_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Objectives_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Objectives.W_Objectives_C.ResultsUpdate
// (BlueprintCallable, BlueprintEvent)

void UW_Objectives_C::ResultsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Objectives_C", "ResultsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Objectives.W_Objectives_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Objectives_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Objectives_C", "Tick");

	Params::W_Objectives_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Objectives.W_Objectives_C.TryGetTV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResultTV_C**                  ResultTV_0                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Objectives_C::TryGetTV(bool* IsValid, class ABP_ResultTV_C** ResultTV_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Objectives_C", "TryGetTV");

	Params::W_Objectives_C_TryGetTV Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (ResultTV_0 != nullptr)
		*ResultTV_0 = Parms.ResultTV_0;
}

}

