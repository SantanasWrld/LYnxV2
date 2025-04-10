﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DamageCameraShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DamageCameraShake.BP_DamageCameraShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UBP_DamageCameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DamageCameraShake_C">();
	}
	static class UBP_DamageCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DamageCameraShake_C>();
	}
};
static_assert(alignof(UBP_DamageCameraShake_C) == 0x000010, "Wrong alignment on UBP_DamageCameraShake_C");
static_assert(sizeof(UBP_DamageCameraShake_C) == 0x0001F0, "Wrong size on UBP_DamageCameraShake_C");

}

