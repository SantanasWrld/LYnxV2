﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ParasiteProjectile

#include "Basic.hpp"

#include "BP_PhysicalActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ParasiteProjectile.BP_ParasiteProjectile_C
// 0x0000 (0x0338 - 0x0338)
class ABP_ParasiteProjectile_C final : public ABP_PhysicalActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ParasiteProjectile_C">();
	}
	static class ABP_ParasiteProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ParasiteProjectile_C>();
	}
};
static_assert(alignof(ABP_ParasiteProjectile_C) == 0x000008, "Wrong alignment on ABP_ParasiteProjectile_C");
static_assert(sizeof(ABP_ParasiteProjectile_C) == 0x000338, "Wrong size on ABP_ParasiteProjectile_C");

}

