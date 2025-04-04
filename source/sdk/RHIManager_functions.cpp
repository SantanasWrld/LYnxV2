﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RHIManager

#include "Basic.hpp"

#include "RHIManager_classes.hpp"
#include "RHIManager_parameters.hpp"


namespace SDK
{

// Function RHIManager.RHIManagerBPLibrary.GetCurrentGraphicsRHI
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EGraphicsRHI                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGraphicsRHI URHIManagerBPLibrary::GetCurrentGraphicsRHI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RHIManagerBPLibrary", "GetCurrentGraphicsRHI");

	Params::RHIManagerBPLibrary_GetCurrentGraphicsRHI Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RHIManager.RHIManagerBPLibrary.RHIManagerSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Param                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URHIManagerBPLibrary::RHIManagerSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RHIManagerBPLibrary", "RHIManagerSampleFunction");

	Params::RHIManagerBPLibrary_RHIManagerSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RHIManager.RHIManagerBPLibrary.SetGraphicsRHI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGraphicsRHI                            GraphicsRHI                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URHIManagerBPLibrary::SetGraphicsRHI(EGraphicsRHI GraphicsRHI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RHIManagerBPLibrary", "SetGraphicsRHI");

	Params::RHIManagerBPLibrary_SetGraphicsRHI Parms{};

	Parms.GraphicsRHI = GraphicsRHI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

