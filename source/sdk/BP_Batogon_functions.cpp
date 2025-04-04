﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Batogon

#include "Basic.hpp"

#include "BP_Batogon_classes.hpp"
#include "BP_Batogon_parameters.hpp"


namespace SDK
{

// Function BP_Batogon.BP_Batogon_C.GetFlySound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue**                       FlySound                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Batogon_C::GetFlySound(bool* IsValid, class USoundCue** FlySound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "GetFlySound");

	Params::BP_Batogon_C_GetFlySound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (FlySound != nullptr)
		*FlySound = Parms.FlySound;
}


// Function BP_Batogon.BP_Batogon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Batogon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Batogon.BP_Batogon_C.OnRep_IsFlying
// (BlueprintCallable, BlueprintEvent)

void ABP_Batogon_C::OnRep_IsFlying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "OnRep_IsFlying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Batogon.BP_Batogon_C.OnRep_IsGrawling
// (BlueprintCallable, BlueprintEvent)

void ABP_Batogon_C::OnRep_IsGrawling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "OnRep_IsGrawling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Batogon.BP_Batogon_C.GetNavigationPoints
// (BlueprintCallable, BlueprintEvent)

void ABP_Batogon_C::GetNavigationPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "GetNavigationPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Batogon.BP_Batogon_C.UpdateFlyAudio
// (BlueprintCallable, BlueprintEvent)

void ABP_Batogon_C::UpdateFlyAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "UpdateFlyAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Batogon.BP_Batogon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Batogon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "ReceiveTick");

	Params::BP_Batogon_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Batogon.BP_Batogon_C.PlayWingbeatSound
// (BlueprintCallable, BlueprintEvent)

void ABP_Batogon_C::PlayWingbeatSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "PlayWingbeatSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Batogon.BP_Batogon_C.ExecuteUbergraph_BP_Batogon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Batogon_C::ExecuteUbergraph_BP_Batogon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Batogon_C", "ExecuteUbergraph_BP_Batogon");

	Params::BP_Batogon_C_ExecuteUbergraph_BP_Batogon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

