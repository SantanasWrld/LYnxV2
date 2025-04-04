﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shiny

#include "Basic.hpp"

#include "BP_Shiny_classes.hpp"
#include "BP_Shiny_parameters.hpp"


namespace SDK
{

// Function BP_Shiny.BP_Shiny_C.SetGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Glow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shiny_C::SetGlow(double Glow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "SetGlow");

	Params::BP_Shiny_C_SetGlow Parms{};

	Parms.Glow = Glow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shiny.BP_Shiny_C.GetDefaultScoringState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ScoringActorState*                    State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shiny_C::GetDefaultScoringState(E_ScoringActorState* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "GetDefaultScoringState");

	Params::BP_Shiny_C_GetDefaultScoringState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BP_Shiny.BP_Shiny_C.Timeline_Teleport__FinishedFunc
// (BlueprintEvent)

void ABP_Shiny_C::Timeline_Teleport__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "Timeline_Teleport__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.Timeline_Teleport__UpdateFunc
// (BlueprintEvent)

void ABP_Shiny_C::Timeline_Teleport__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "Timeline_Teleport__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_Shiny_C::Explode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "Explode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Shiny_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.OnRep_IsTeleporting
// (BlueprintCallable, BlueprintEvent)

void ABP_Shiny_C::OnRep_IsTeleporting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "OnRep_IsTeleporting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.OnRep_IsPreparingToExplode
// (BlueprintCallable, BlueprintEvent)

void ABP_Shiny_C::OnRep_IsPreparingToExplode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "OnRep_IsPreparingToExplode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.Killed (Server)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_KillableCharacter_C*          KilledCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Shiny_C::Killed__Server_(class ABP_KillableCharacter_C* KilledCharacter, class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "Killed (Server)");

	Params::BP_Shiny_C_Killed__Server_ Parms{};

	Parms.KilledCharacter = KilledCharacter;
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shiny.BP_Shiny_C.OnRep_HasExploded
// (BlueprintCallable, BlueprintEvent)

void ABP_Shiny_C::OnRep_HasExploded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "OnRep_HasExploded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.UpdateGlow
// (BlueprintCallable, BlueprintEvent)

void ABP_Shiny_C::UpdateGlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "UpdateGlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shiny.BP_Shiny_C.ExecuteUbergraph_BP_Shiny
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shiny_C::ExecuteUbergraph_BP_Shiny(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shiny_C", "ExecuteUbergraph_BP_Shiny");

	Params::BP_Shiny_C_ExecuteUbergraph_BP_Shiny Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

