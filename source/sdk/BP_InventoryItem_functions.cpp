﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InventoryItem

#include "Basic.hpp"

#include "BP_InventoryItem_classes.hpp"
#include "BP_InventoryItem_parameters.hpp"


namespace SDK
{

// Function BP_InventoryItem.BP_InventoryItem_C.CreateSaveObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame**                       Save                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InventoryItem_C::CreateSaveObject(class USaveGame** Save)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "CreateSaveObject");

	Params::BP_InventoryItem_C_CreateSaveObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Save != nullptr)
		*Save = Parms.Save;
}


// Function BP_InventoryItem.BP_InventoryItem_C.OnRep_IsInUse
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::OnRep_IsInUse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "OnRep_IsInUse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.OnRep_IsEquipped
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::OnRep_IsEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "OnRep_IsEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InventoryItem_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "ReceiveTick");

	Params::BP_InventoryItem_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InventoryItem.BP_InventoryItem_C.LoadSaveData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        Save                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InventoryItem_C::LoadSaveData(class USaveGame* Save)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "LoadSaveData");

	Params::BP_InventoryItem_C_LoadSaveData Parms{};

	Parms.Save = Save;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InventoryItem.BP_InventoryItem_C.LoadSaveObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame**                       Save                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InventoryItem_C::LoadSaveObject(class USaveGame** Save)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "LoadSaveObject");

	Params::BP_InventoryItem_C_LoadSaveObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Save != nullptr)
		*Save = Parms.Save;
}


// Function BP_InventoryItem.BP_InventoryItem_C.UpdateInputs
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::UpdateInputs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "UpdateInputs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.OnRep_IsInFocus
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::OnRep_IsInFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "OnRep_IsInFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.OnRep_Player
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::OnRep_Player()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "OnRep_Player");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InventoryItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InventoryItem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "ReceiveEndPlay");

	Params::BP_InventoryItem_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InventoryItem.BP_InventoryItem_C.CreateWidgetIfNeeded
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::CreateWidgetIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "CreateWidgetIfNeeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.SaveData
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::SaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "SaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.UpdateMainParentRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_InventoryItem_C::UpdateMainParentRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "UpdateMainParentRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InventoryItem.BP_InventoryItem_C.ExecuteUbergraph_BP_InventoryItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InventoryItem_C::ExecuteUbergraph_BP_InventoryItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryItem_C", "ExecuteUbergraph_BP_InventoryItem");

	Params::BP_InventoryItem_C_ExecuteUbergraph_BP_InventoryItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

