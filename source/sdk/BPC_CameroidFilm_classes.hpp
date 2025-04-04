﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_CameroidFilm

#include "Basic.hpp"

#include "S_CameroidCapture_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_CameroidFilm.BPC_CameroidFilm_C
// 0x0018 (0x00B8 - 0x00A0)
class UBPC_CameroidFilm_C final : public UActorComponent
{
public:
	int32                                         Capacity;                                          // 0x00A0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_CameroidCapture>             Captures;                                          // 0x00A8(0x0010)(Edit, BlueprintVisible, Net)

public:
	void ClearCaptures();
	void CreateSave(class USaveGame** Save);
	void GetCapturesLeft(int32* CapturesLeft);
	void IsEmpty(bool* Empty);
	void LoadSave(class USaveGame* Save);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_CameroidFilm_C">();
	}
	static class UBPC_CameroidFilm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_CameroidFilm_C>();
	}
};
static_assert(alignof(UBPC_CameroidFilm_C) == 0x000008, "Wrong alignment on UBPC_CameroidFilm_C");
static_assert(sizeof(UBPC_CameroidFilm_C) == 0x0000B8, "Wrong size on UBPC_CameroidFilm_C");
static_assert(offsetof(UBPC_CameroidFilm_C, Capacity) == 0x0000A0, "Member 'UBPC_CameroidFilm_C::Capacity' has a wrong offset!");
static_assert(offsetof(UBPC_CameroidFilm_C, Captures) == 0x0000A8, "Member 'UBPC_CameroidFilm_C::Captures' has a wrong offset!");

}

