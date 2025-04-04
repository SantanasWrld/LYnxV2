﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_OnlineSession

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_OnlineSession.S_OnlineSession
// 0x0028 (0x0028 - 0x0000)
struct FS_OnlineSession final
{
public:
	int64                                         Id_2_23A7B3FB40AC9E3F14ADC0808940E8BF;             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name_5_B72B000542730C1CC68A2EB1B6BC1989;           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Players_8_3DE6F13A400075D767D8A2ADDD9352F4;        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPlayers_10_42BC6C6F48B2268FB75C859E11A6007F;    // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CustomGame_12_EBA93D234BA11E2B3AD8D8B72D9EAE76;    // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_OnlineSession) == 0x000008, "Wrong alignment on FS_OnlineSession");
static_assert(sizeof(FS_OnlineSession) == 0x000028, "Wrong size on FS_OnlineSession");
static_assert(offsetof(FS_OnlineSession, Id_2_23A7B3FB40AC9E3F14ADC0808940E8BF) == 0x000000, "Member 'FS_OnlineSession::Id_2_23A7B3FB40AC9E3F14ADC0808940E8BF' has a wrong offset!");
static_assert(offsetof(FS_OnlineSession, Name_5_B72B000542730C1CC68A2EB1B6BC1989) == 0x000008, "Member 'FS_OnlineSession::Name_5_B72B000542730C1CC68A2EB1B6BC1989' has a wrong offset!");
static_assert(offsetof(FS_OnlineSession, Players_8_3DE6F13A400075D767D8A2ADDD9352F4) == 0x000018, "Member 'FS_OnlineSession::Players_8_3DE6F13A400075D767D8A2ADDD9352F4' has a wrong offset!");
static_assert(offsetof(FS_OnlineSession, MaxPlayers_10_42BC6C6F48B2268FB75C859E11A6007F) == 0x00001C, "Member 'FS_OnlineSession::MaxPlayers_10_42BC6C6F48B2268FB75C859E11A6007F' has a wrong offset!");
static_assert(offsetof(FS_OnlineSession, CustomGame_12_EBA93D234BA11E2B3AD8D8B72D9EAE76) == 0x000020, "Member 'FS_OnlineSession::CustomGame_12_EBA93D234BA11E2B3AD8D8B72D9EAE76' has a wrong offset!");

}

