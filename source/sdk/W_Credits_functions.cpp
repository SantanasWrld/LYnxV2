﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Credits

#include "Basic.hpp"

#include "W_Credits_classes.hpp"
#include "W_Credits_parameters.hpp"


namespace SDK
{

// Function W_Credits.W_Credits_C.BndEvt__W_Credits_BackTo_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_Credits_C::BndEvt__W_Credits_BackTo_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "BndEvt__W_Credits_BackTo_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Credits.W_Credits_C.BndEvt__W_Credits_BlackBackground_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_Credits_C::BndEvt__W_Credits_BlackBackground_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "BndEvt__W_Credits_BlackBackground_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Credits.W_Credits_C.ExecuteUbergraph_W_Credits
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Credits_C::ExecuteUbergraph_W_Credits(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "ExecuteUbergraph_W_Credits");

	Params::W_Credits_C_ExecuteUbergraph_W_Credits Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Credits.W_Credits_C.MainMenuDisplayed
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Credits_C::MainMenuDisplayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "MainMenuDisplayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Credits.W_Credits_C.TabDisplayed
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Credits_C::TabDisplayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "TabDisplayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Credits.W_Credits_C.TabFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Credits_C::TabFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "TabFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Credits.W_Credits_C.TabHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Credits_C::TabHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "TabHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Credits.W_Credits_C.TabInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MainMenu_C*                    MainMenu_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Credits_C::TabInit(class UW_MainMenu_C* MainMenu_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Credits_C", "TabInit");

	Params::W_Credits_C_TabInit Parms{};

	Parms.MainMenu_0 = MainMenu_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

