﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResultTopPictures

#include "Basic.hpp"

#include "BP_ResultTopPictures_classes.hpp"
#include "BP_ResultTopPictures_parameters.hpp"


namespace SDK
{

// Function BP_ResultTopPictures.BP_ResultTopPictures_C.CheckTopCaptures
// (BlueprintCallable, BlueprintEvent)

void ABP_ResultTopPictures_C::CheckTopCaptures()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "CheckTopCaptures");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.ExecuteUbergraph_BP_ResultTopPictures
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResultTopPictures_C::ExecuteUbergraph_BP_ResultTopPictures(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "ExecuteUbergraph_BP_ResultTopPictures");

	Params::BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.HideAllTopPictures
// (BlueprintCallable, BlueprintEvent)

void ABP_ResultTopPictures_C::HideAllTopPictures()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "HideAllTopPictures");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ResultTopPictures_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResultTopPictures_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "ReceiveTick");

	Params::BP_ResultTopPictures_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.SetFullLayout
// (BlueprintCallable, BlueprintEvent)

void ABP_ResultTopPictures_C::SetFullLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "SetFullLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.SetSmallLayout
// (BlueprintCallable, BlueprintEvent)

void ABP_ResultTopPictures_C::SetSmallLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "SetSmallLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.UpdateLayout
// (BlueprintCallable, BlueprintEvent)

void ABP_ResultTopPictures_C::UpdateLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "UpdateLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ResultTopPictures.BP_ResultTopPictures_C.UpdateTopPictures
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class ABP_ResultTopPicture_C*>&TopPictures                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ResultTopPictures_C::UpdateTopPictures(const TArray<class ABP_ResultTopPicture_C*>& TopPictures)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ResultTopPictures_C", "UpdateTopPictures");

	Params::BP_ResultTopPictures_C_UpdateTopPictures Parms{};

	Parms.TopPictures = std::move(TopPictures);

	UObject::ProcessEvent(Func, &Parms);
}

}

