﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PickupBearTrap

#include "Basic.hpp"

#include "BP_PickupItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PickupBearTrap.BP_PickupBearTrap_C
// 0x0010 (0x02F0 - 0x02E0)
class ABP_PickupBearTrap_C final : public ABP_PickupItem_C
{
public:
	class UStaticMeshComponent*                   FirstHalf;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SecondHalf;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PickupBearTrap_C">();
	}
	static class ABP_PickupBearTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PickupBearTrap_C>();
	}
};
static_assert(alignof(ABP_PickupBearTrap_C) == 0x000008, "Wrong alignment on ABP_PickupBearTrap_C");
static_assert(sizeof(ABP_PickupBearTrap_C) == 0x0002F0, "Wrong size on ABP_PickupBearTrap_C");
static_assert(offsetof(ABP_PickupBearTrap_C, FirstHalf) == 0x0002E0, "Member 'ABP_PickupBearTrap_C::FirstHalf' has a wrong offset!");
static_assert(offsetof(ABP_PickupBearTrap_C, SecondHalf) == 0x0002E8, "Member 'ABP_PickupBearTrap_C::SecondHalf' has a wrong offset!");

}

