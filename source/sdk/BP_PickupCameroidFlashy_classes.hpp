﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PickupCameroidFlashy

#include "Basic.hpp"

#include "BP_PickupCameroid_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PickupCameroidFlashy.BP_PickupCameroidFlashy_C
// 0x0008 (0x0300 - 0x02F8)
class ABP_PickupCameroidFlashy_C final : public ABP_PickupCameroid_C
{
public:
	class UStaticMeshComponent*                   Flash;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PickupCameroidFlashy_C">();
	}
	static class ABP_PickupCameroidFlashy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PickupCameroidFlashy_C>();
	}
};
static_assert(alignof(ABP_PickupCameroidFlashy_C) == 0x000008, "Wrong alignment on ABP_PickupCameroidFlashy_C");
static_assert(sizeof(ABP_PickupCameroidFlashy_C) == 0x000300, "Wrong size on ABP_PickupCameroidFlashy_C");
static_assert(offsetof(ABP_PickupCameroidFlashy_C, Flash) == 0x0002F8, "Member 'ABP_PickupCameroidFlashy_C::Flash' has a wrong offset!");

}

