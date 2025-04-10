﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_BodyFearSource

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPC_BodyFearSource.BPC_BodyFearSource_C.GetFearSettings
// 0x0058 (0x0058 - 0x0000)
struct BPC_BodyFearSource_C_GetFearSettings final
{
public:
	class ABP_UPPlayerCharacter_C*                Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive_0;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FearPerSecond_0;                                   // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxFear_0;                                         // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckSight_0;                                      // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        JumpFear_0;                                        // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFearSettings_IsActive;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetFearSettings_FearPerSecond;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFearSettings_MaxFear;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFearSettings_CheckSight;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetFearSettings_JumpFear;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_BodyFearSource_C_GetFearSettings) == 0x000008, "Wrong alignment on BPC_BodyFearSource_C_GetFearSettings");
static_assert(sizeof(BPC_BodyFearSource_C_GetFearSettings) == 0x000058, "Wrong size on BPC_BodyFearSource_C_GetFearSettings");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, Player) == 0x000000, "Member 'BPC_BodyFearSource_C_GetFearSettings::Player' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, IsActive_0) == 0x000008, "Member 'BPC_BodyFearSource_C_GetFearSettings::IsActive_0' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, FearPerSecond_0) == 0x000010, "Member 'BPC_BodyFearSource_C_GetFearSettings::FearPerSecond_0' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, MaxFear_0) == 0x000018, "Member 'BPC_BodyFearSource_C_GetFearSettings::MaxFear_0' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, CheckSight_0) == 0x000020, "Member 'BPC_BodyFearSource_C_GetFearSettings::CheckSight_0' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, JumpFear_0) == 0x000028, "Member 'BPC_BodyFearSource_C_GetFearSettings::JumpFear_0' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, CallFunc_GetFearSettings_IsActive) == 0x000030, "Member 'BPC_BodyFearSource_C_GetFearSettings::CallFunc_GetFearSettings_IsActive' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, CallFunc_GetFearSettings_FearPerSecond) == 0x000038, "Member 'BPC_BodyFearSource_C_GetFearSettings::CallFunc_GetFearSettings_FearPerSecond' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, CallFunc_GetFearSettings_MaxFear) == 0x000040, "Member 'BPC_BodyFearSource_C_GetFearSettings::CallFunc_GetFearSettings_MaxFear' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, CallFunc_GetFearSettings_CheckSight) == 0x000048, "Member 'BPC_BodyFearSource_C_GetFearSettings::CallFunc_GetFearSettings_CheckSight' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_GetFearSettings, CallFunc_GetFearSettings_JumpFear) == 0x000050, "Member 'BPC_BodyFearSource_C_GetFearSettings::CallFunc_GetFearSettings_JumpFear' has a wrong offset!");

// Function BPC_BodyFearSource.BPC_BodyFearSource_C.Killed
// 0x0010 (0x0010 - 0x0000)
struct BPC_BodyFearSource_C_Killed final
{
public:
	class ABP_KillableCharacter_C*                KilledCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Killer;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_BodyFearSource_C_Killed) == 0x000008, "Wrong alignment on BPC_BodyFearSource_C_Killed");
static_assert(sizeof(BPC_BodyFearSource_C_Killed) == 0x000010, "Wrong size on BPC_BodyFearSource_C_Killed");
static_assert(offsetof(BPC_BodyFearSource_C_Killed, KilledCharacter) == 0x000000, "Member 'BPC_BodyFearSource_C_Killed::KilledCharacter' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_Killed, Killer) == 0x000008, "Member 'BPC_BodyFearSource_C_Killed::Killer' has a wrong offset!");

// Function BPC_BodyFearSource.BPC_BodyFearSource_C.ExecuteUbergraph_BPC_BodyFearSource
// 0x0040 (0x0040 - 0x0000)
struct BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ABP_KillableCharacter_C* KilledCharacter, class AActor* Killer)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_KillableCharacter_C*                K2Node_CustomEvent_KilledCharacter;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Killer;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_KillableCharacter_C*                K2Node_DynamicCast_AsBP_Killable_Character;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource) == 0x000008, "Wrong alignment on BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource");
static_assert(sizeof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource) == 0x000040, "Wrong size on BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, EntryPoint) == 0x000000, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, K2Node_CustomEvent_KilledCharacter) == 0x000020, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::K2Node_CustomEvent_KilledCharacter' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, K2Node_CustomEvent_Killer) == 0x000028, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::K2Node_CustomEvent_Killer' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, K2Node_DynamicCast_AsBP_Killable_Character) == 0x000030, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::K2Node_DynamicCast_AsBP_Killable_Character' has a wrong offset!");
static_assert(offsetof(BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BPC_BodyFearSource_C_ExecuteUbergraph_BPC_BodyFearSource::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

