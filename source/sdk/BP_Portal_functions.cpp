﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Portal

#include "Basic.hpp"

#include "BP_Portal_classes.hpp"
#include "BP_Portal_parameters.hpp"


namespace SDK
{

// Function BP_Portal.BP_Portal_C.CloseEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Portal_C::CloseEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "CloseEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Portal.BP_Portal_C.CreatePlayerStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerStart**                    PlayerSart                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::CreatePlayerStart(class APlayerStart** PlayerSart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "CreatePlayerStart");

	Params::BP_Portal_C_CreatePlayerStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerSart != nullptr)
		*PlayerSart = Parms.PlayerSart;
}


// Function BP_Portal.BP_Portal_C.ExecuteUbergraph_BP_Portal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::ExecuteUbergraph_BP_Portal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "ExecuteUbergraph_BP_Portal");

	Params::BP_Portal_C_ExecuteUbergraph_BP_Portal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Portal.BP_Portal_C.GetInteractDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Distance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::GetInteractDistance(double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "GetInteractDistance");

	Params::BP_Portal_C_GetInteractDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}


// Function BP_Portal.BP_Portal_C.GetInteractDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::GetInteractDuration(double* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "GetInteractDuration");

	Params::BP_Portal_C_GetInteractDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}


// Function BP_Portal.BP_Portal_C.GetInteractNoise
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NoiseOnInteract                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 NoiseRange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::GetInteractNoise(bool* NoiseOnInteract, double* NoiseRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "GetInteractNoise");

	Params::BP_Portal_C_GetInteractNoise Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoiseOnInteract != nullptr)
		*NoiseOnInteract = Parms.NoiseOnInteract;

	if (NoiseRange != nullptr)
		*NoiseRange = Parms.NoiseRange;
}


// Function BP_Portal.BP_Portal_C.GetInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText*                            Text                                                   (Parm, OutParm)

void ABP_Portal_C::GetInteractText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "GetInteractText");

	Params::BP_Portal_C_GetInteractText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_Portal.BP_Portal_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsExteriorPortal_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Portal_C*                     LinkedPortal_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::Init(bool IsExteriorPortal_0, class ABP_Portal_C* LinkedPortal_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "Init");

	Params::BP_Portal_C_Init Parms{};

	Parms.IsExteriorPortal_0 = IsExteriorPortal_0;
	Parms.LinkedPortal_0 = LinkedPortal_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Portal.BP_Portal_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_UPPlayerCharacter_C*          Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Portal_C::Interact(class ABP_UPPlayerCharacter_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "Interact");

	Params::BP_Portal_C_Interact Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Portal.BP_Portal_C.InteractionStarted
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Portal_C::InteractionStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "InteractionStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Portal.BP_Portal_C.InteractionStopped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Portal_C::InteractionStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "InteractionStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Portal.BP_Portal_C.OpenEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Portal_C::OpenEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "OpenEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Portal.BP_Portal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Portal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Portal.BP_Portal_C.RenderInteriorCubemap
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Portal_C::RenderInteriorCubemap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "RenderInteriorCubemap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Portal.BP_Portal_C.StopOpenEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Portal_C::StopOpenEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Portal_C", "StopOpenEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}

