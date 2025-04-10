﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_OpenSession

#include "Basic.hpp"

#include "W_OpenSession_classes.hpp"
#include "W_OpenSession_parameters.hpp"


namespace SDK
{

// Function W_OpenSession.W_OpenSession_C.BndEvt__W_OpenSession_JoinSessionBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_OpenSession_C::BndEvt__W_OpenSession_JoinSessionBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OpenSession_C", "BndEvt__W_OpenSession_JoinSessionBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_OpenSession.W_OpenSession_C.ExecuteUbergraph_W_OpenSession
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OpenSession_C::ExecuteUbergraph_W_OpenSession(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OpenSession_C", "ExecuteUbergraph_W_OpenSession");

	Params::W_OpenSession_C_ExecuteUbergraph_W_OpenSession Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_OpenSession.W_OpenSession_C.HasFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Focus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OpenSession_C::HasFocus(bool* Focus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OpenSession_C", "HasFocus");

	Params::W_OpenSession_C_HasFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}


// Function W_OpenSession.W_OpenSession_C.InitOpenSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UPGameInstance_C*             GameInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FS_OnlineSession&          Session                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_OpenSession_C::InitOpenSession(class UBP_UPGameInstance_C* GameInstance, const struct FS_OnlineSession& Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OpenSession_C", "InitOpenSession");

	Params::W_OpenSession_C_InitOpenSession Parms{};

	Parms.GameInstance = GameInstance;
	Parms.Session = std::move(Session);

	UObject::ProcessEvent(Func, &Parms);
}

}

