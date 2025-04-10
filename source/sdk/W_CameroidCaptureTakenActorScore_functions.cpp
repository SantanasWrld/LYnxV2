﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CameroidCaptureTakenActorScore

#include "Basic.hpp"

#include "W_CameroidCaptureTakenActorScore_classes.hpp"
#include "W_CameroidCaptureTakenActorScore_parameters.hpp"


namespace SDK
{

// Function W_CameroidCaptureTakenActorScore.W_CameroidCaptureTakenActorScore_C.ExecuteUbergraph_W_CameroidCaptureTakenActorScore
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CameroidCaptureTakenActorScore_C::ExecuteUbergraph_W_CameroidCaptureTakenActorScore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CameroidCaptureTakenActorScore_C", "ExecuteUbergraph_W_CameroidCaptureTakenActorScore");

	Params::W_CameroidCaptureTakenActorScore_C_ExecuteUbergraph_W_CameroidCaptureTakenActorScore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CameroidCaptureTakenActorScore.W_CameroidCaptureTakenActorScore_C.PlayAppearAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlaybackSpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CameroidCaptureTakenActorScore_C::PlayAppearAnim(float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CameroidCaptureTakenActorScore_C", "PlayAppearAnim");

	Params::W_CameroidCaptureTakenActorScore_C_PlayAppearAnim Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CameroidCaptureTakenActorScore.W_CameroidCaptureTakenActorScore_C.SetActorScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FS_CameroidActorScore&     ActorScore_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CameroidCaptureTakenActorScore_C::SetActorScore(const struct FS_CameroidActorScore& ActorScore_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CameroidCaptureTakenActorScore_C", "SetActorScore");

	Params::W_CameroidCaptureTakenActorScore_C_SetActorScore Parms{};

	Parms.ActorScore_0 = std::move(ActorScore_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CameroidCaptureTakenActorScore.W_CameroidCaptureTakenActorScore_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CameroidCaptureTakenActorScore_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CameroidCaptureTakenActorScore_C", "Tick");

	Params::W_CameroidCaptureTakenActorScore_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

