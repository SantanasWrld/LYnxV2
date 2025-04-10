﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Notification

#include "Basic.hpp"

#include "W_Notification_classes.hpp"
#include "W_Notification_parameters.hpp"


namespace SDK
{

// Function W_Notification.W_Notification_C.ExecuteUbergraph_W_Notification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Notification_C::ExecuteUbergraph_W_Notification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Notification_C", "ExecuteUbergraph_W_Notification");

	Params::W_Notification_C_ExecuteUbergraph_W_Notification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Notification.W_Notification_C.InitNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Notification                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Notification_C::InitNotification(const class FString& Notification, double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Notification_C", "InitNotification");

	Params::W_Notification_C_InitNotification Parms{};

	Parms.Notification = std::move(Notification);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

}

