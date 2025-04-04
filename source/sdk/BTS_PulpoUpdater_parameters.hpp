﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PulpoUpdater

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTS_PulpoUpdater.BTS_PulpoUpdater_C.ExecuteUbergraph_BTS_PulpoUpdater
// 0x0030 (0x0030 - 0x0000)
struct BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Pulpo_C*                            K2Node_DynamicCast_AsBP_Pulpo;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater) == 0x000008, "Wrong alignment on BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater");
static_assert(sizeof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater) == 0x000030, "Wrong size on BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, EntryPoint) == 0x000000, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, K2Node_Event_OwnerController) == 0x000008, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, K2Node_DynamicCast_AsBP_Pulpo) == 0x000020, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::K2Node_DynamicCast_AsBP_Pulpo' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater, CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast) == 0x00002C, "Member 'BTS_PulpoUpdater_C_ExecuteUbergraph_BTS_PulpoUpdater::CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast' has a wrong offset!");

// Function BTS_PulpoUpdater.BTS_PulpoUpdater_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_PulpoUpdater_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_PulpoUpdater_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_PulpoUpdater_C_ReceiveTickAI");
static_assert(sizeof(BTS_PulpoUpdater_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_PulpoUpdater_C_ReceiveTickAI");
static_assert(offsetof(BTS_PulpoUpdater_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_PulpoUpdater_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_PulpoUpdater_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_PulpoUpdater_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_PulpoUpdater_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

