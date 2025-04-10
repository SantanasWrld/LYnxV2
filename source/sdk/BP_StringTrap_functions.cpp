﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StringTrap

#include "Basic.hpp"

#include "BP_StringTrap_classes.hpp"
#include "BP_StringTrap_parameters.hpp"


namespace SDK
{

// Function BP_StringTrap.BP_StringTrap_C.BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_StringTrap_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_StringTrap_C::BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_StringTrap_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.DamageHangedTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::DamageHangedTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "DamageHangedTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.ExecuteUbergraph_BP_StringTrap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::ExecuteUbergraph_BP_StringTrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "ExecuteUbergraph_BP_StringTrap");

	Params::BP_StringTrap_C_ExecuteUbergraph_BP_StringTrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.GetInteractDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Distance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::GetInteractDistance(double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "GetInteractDistance");

	Params::BP_StringTrap_C_GetInteractDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}


// Function BP_StringTrap.BP_StringTrap_C.GetInteractDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::GetInteractDuration(double* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "GetInteractDuration");

	Params::BP_StringTrap_C_GetInteractDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}


// Function BP_StringTrap.BP_StringTrap_C.GetInteractNoise
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NoiseOnInteract                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 NoiseRange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::GetInteractNoise(bool* NoiseOnInteract, double* NoiseRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "GetInteractNoise");

	Params::BP_StringTrap_C_GetInteractNoise Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoiseOnInteract != nullptr)
		*NoiseOnInteract = Parms.NoiseOnInteract;

	if (NoiseRange != nullptr)
		*NoiseRange = Parms.NoiseRange;
}


// Function BP_StringTrap.BP_StringTrap_C.GetInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText*                            Text                                                   (Parm, OutParm)

void ABP_StringTrap_C::GetInteractText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "GetInteractText");

	Params::BP_StringTrap_C_GetInteractText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_StringTrap.BP_StringTrap_C.HangSFX
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::HangSFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "HangSFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.HasHarmed (All)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_Killable_C> HarmedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::HasHarmed__All_(TScriptInterface<class IBPI_Killable_C> HarmedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "HasHarmed (All)");

	Params::BP_StringTrap_C_HasHarmed__All_ Parms{};

	Parms.HarmedActor = HarmedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.HasHarmed (Server)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_Killable_C> HarmedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::HasHarmed__Server_(TScriptInterface<class IBPI_Killable_C> HarmedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "HasHarmed (Server)");

	Params::BP_StringTrap_C_HasHarmed__Server_ Parms{};

	Parms.HarmedActor = HarmedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.HasKilled (All)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_Killable_C> KilledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::HasKilled__All_(TScriptInterface<class IBPI_Killable_C> KilledActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "HasKilled (All)");

	Params::BP_StringTrap_C_HasKilled__All_ Parms{};

	Parms.KilledActor = KilledActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.HasKilled (Server)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_Killable_C> KilledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::HasKilled__Server_(TScriptInterface<class IBPI_Killable_C> KilledActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "HasKilled (Server)");

	Params::BP_StringTrap_C_HasKilled__Server_ Parms{};

	Parms.KilledActor = KilledActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_UPPlayerCharacter_C*          Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::Interact(class ABP_UPPlayerCharacter_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "Interact");

	Params::BP_StringTrap_C_Interact Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StringTrap.BP_StringTrap_C.InteractionStarted
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::InteractionStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "InteractionStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.InteractionStopped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::InteractionStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "InteractionStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.IsTriggerActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_KillableCharacter_C**         Character                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StringTrap_C::IsTriggerActor(class AActor* Actor, bool* Result, class ABP_KillableCharacter_C** Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "IsTriggerActor");

	Params::BP_StringTrap_C_IsTriggerActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Character != nullptr)
		*Character = Parms.Character;
}


// Function BP_StringTrap.BP_StringTrap_C.OnRep_HangedTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::OnRep_HangedTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "OnRep_HangedTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.OnRep_IsBroken
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::OnRep_IsBroken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "OnRep_IsBroken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.OnRep_IsTriggered
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::OnRep_IsTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "OnRep_IsTriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.OnRep_TopLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::OnRep_TopLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "OnRep_TopLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StringTrap_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StringTrap.BP_StringTrap_C.UpdateInteractionCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_StringTrap_C::UpdateInteractionCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StringTrap_C", "UpdateInteractionCollision");

	UObject::ProcessEvent(Func, nullptr);
}

}

