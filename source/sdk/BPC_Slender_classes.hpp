﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_Slender

#include "Basic.hpp"

#include "BPC_ParentEnemy_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_Slender.BPC_Slender_C
// 0x0000 (0x03E8 - 0x03E8)
class ABPC_Slender_C final : public ABPC_ParentEnemy_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_Slender_C">();
	}
	static class ABPC_Slender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPC_Slender_C>();
	}
};
static_assert(alignof(ABPC_Slender_C) == 0x000008, "Wrong alignment on ABPC_Slender_C");
static_assert(sizeof(ABPC_Slender_C) == 0x0003E8, "Wrong size on ABPC_Slender_C");

}

