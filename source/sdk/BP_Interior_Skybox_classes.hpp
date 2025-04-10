﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interior_Skybox

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Interior_Skybox.BP_Interior_Skybox_C
// 0x0000 (0x02A8 - 0x02A8)
class ABP_Interior_Skybox_C final : public AStaticMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Interior_Skybox_C">();
	}
	static class ABP_Interior_Skybox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Interior_Skybox_C>();
	}
};
static_assert(alignof(ABP_Interior_Skybox_C) == 0x000008, "Wrong alignment on ABP_Interior_Skybox_C");
static_assert(sizeof(ABP_Interior_Skybox_C) == 0x0002A8, "Wrong size on ABP_Interior_Skybox_C");

}

