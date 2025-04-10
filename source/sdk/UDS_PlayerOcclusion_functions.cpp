﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_PlayerOcclusion

#include "Basic.hpp"

#include "UDS_PlayerOcclusion_classes.hpp"
#include "UDS_PlayerOcclusion_parameters.hpp"


namespace SDK
{

// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ExecuteUbergraph_UDS_PlayerOcclusion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUDS_PlayerOcclusion_C::ExecuteUbergraph_UDS_PlayerOcclusion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "ExecuteUbergraph_UDS_PlayerOcclusion");

	Params::UDS_PlayerOcclusion_C_ExecuteUbergraph_UDS_PlayerOcclusion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Occlusion Location
// (Protected, BlueprintCallable, BlueprintEvent)

void UUDS_PlayerOcclusion_C::Get_Occlusion_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "Get Occlusion Location");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Starting Occlusion Profile
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUDS_PlayerOcclusion_C::Get_Starting_Occlusion_Profile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "Get Starting Occlusion Profile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUDS_PlayerOcclusion_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUDS_PlayerOcclusion_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "ReceiveTick");

	Params::UDS_PlayerOcclusion_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Current Occlusion Profile
// (Protected, BlueprintCallable, BlueprintEvent)

void UUDS_PlayerOcclusion_C::Update_Current_Occlusion_Profile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "Update Current Occlusion Profile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Target Occlusion Profile
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUDS_PlayerOcclusion_C::Update_Target_Occlusion_Profile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_PlayerOcclusion_C", "Update Target Occlusion Profile");

	UObject::ProcessEvent(Func, nullptr);
}

}

