﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_Weather_Settings

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UDS_Weather_Settings.UDS_Weather_Settings_C
// 0x0050 (0x0080 - 0x0030)
class UUDS_Weather_Settings_C final : public UPrimaryDataAsset
{
public:
	double                                        Cloud_Coverage;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rain;                                              // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Snow;                                              // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Lightning;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Wind_Intensity;                                    // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fog;                                               // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dust;                                              // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Material_Wetness;                                  // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Material_Snow_Coverage;                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Material_Dust_Coverage;                            // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UDS_Weather_Settings_C">();
	}
	static class UUDS_Weather_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUDS_Weather_Settings_C>();
	}
};
static_assert(alignof(UUDS_Weather_Settings_C) == 0x000008, "Wrong alignment on UUDS_Weather_Settings_C");
static_assert(sizeof(UUDS_Weather_Settings_C) == 0x000080, "Wrong size on UUDS_Weather_Settings_C");
static_assert(offsetof(UUDS_Weather_Settings_C, Cloud_Coverage) == 0x000030, "Member 'UUDS_Weather_Settings_C::Cloud_Coverage' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Rain) == 0x000038, "Member 'UUDS_Weather_Settings_C::Rain' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Snow) == 0x000040, "Member 'UUDS_Weather_Settings_C::Snow' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Lightning) == 0x000048, "Member 'UUDS_Weather_Settings_C::Lightning' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Wind_Intensity) == 0x000050, "Member 'UUDS_Weather_Settings_C::Wind_Intensity' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Fog) == 0x000058, "Member 'UUDS_Weather_Settings_C::Fog' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Dust) == 0x000060, "Member 'UUDS_Weather_Settings_C::Dust' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Material_Wetness) == 0x000068, "Member 'UUDS_Weather_Settings_C::Material_Wetness' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Material_Snow_Coverage) == 0x000070, "Member 'UUDS_Weather_Settings_C::Material_Snow_Coverage' has a wrong offset!");
static_assert(offsetof(UUDS_Weather_Settings_C, Material_Dust_Coverage) == 0x000078, "Member 'UUDS_Weather_Settings_C::Material_Dust_Coverage' has a wrong offset!");

}

