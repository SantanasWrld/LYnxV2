﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weather_Effects_Interface

#include "Basic.hpp"

#include "Weather_Effects_Interface_classes.hpp"


namespace SDK
{

// Function Weather_Effects_Interface.Weather_Effects_Interface_C.Editor Update
// (Public, BlueprintCallable, BlueprintEvent)

void IWeather_Effects_Interface_C::Editor_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Weather_Effects_Interface_C", "Editor Update");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function Weather_Effects_Interface.Weather_Effects_Interface_C.Reset Emitters
// (Public, BlueprintCallable, BlueprintEvent)

void IWeather_Effects_Interface_C::Reset_Emitters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Weather_Effects_Interface_C", "Reset Emitters");

	AsUObject()->ProcessEvent(Func, nullptr);
}

}

