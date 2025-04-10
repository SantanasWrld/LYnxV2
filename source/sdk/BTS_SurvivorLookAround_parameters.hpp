﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_SurvivorLookAround

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTS_SurvivorLookAround.BTS_SurvivorLookAround_C.ExecuteUbergraph_BTS_SurvivorLookAround
// 0x0048 (0x0048 - 0x0000)
struct BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Survivor_Exterior_C*                K2Node_DynamicCast_AsBP_Survivor_Exterior;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Survivor_Exterior_C*                K2Node_DynamicCast_AsBP_Survivor_Exterior_1;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround) == 0x000008, "Wrong alignment on BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround");
static_assert(sizeof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround) == 0x000048, "Wrong size on BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, EntryPoint) == 0x000000, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_Event_OwnerController) == 0x000008, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_DynamicCast_AsBP_Survivor_Exterior) == 0x000018, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_DynamicCast_AsBP_Survivor_Exterior' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_Event_OwnerController_1) == 0x000028, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_Event_ControlledPawn_1) == 0x000030, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_DynamicCast_AsBP_Survivor_Exterior_1) == 0x000038, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_DynamicCast_AsBP_Survivor_Exterior_1' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BTS_SurvivorLookAround_C_ExecuteUbergraph_BTS_SurvivorLookAround::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BTS_SurvivorLookAround.BTS_SurvivorLookAround_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_SurvivorLookAround_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_SurvivorLookAround_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_SurvivorLookAround_C_ReceiveActivationAI");
static_assert(sizeof(BTS_SurvivorLookAround_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_SurvivorLookAround_C_ReceiveActivationAI");
static_assert(offsetof(BTS_SurvivorLookAround_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_SurvivorLookAround_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTS_SurvivorLookAround_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_SurvivorLookAround.BTS_SurvivorLookAround_C.ReceiveDeactivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_SurvivorLookAround_C_ReceiveDeactivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_SurvivorLookAround_C_ReceiveDeactivationAI) == 0x000008, "Wrong alignment on BTS_SurvivorLookAround_C_ReceiveDeactivationAI");
static_assert(sizeof(BTS_SurvivorLookAround_C_ReceiveDeactivationAI) == 0x000010, "Wrong size on BTS_SurvivorLookAround_C_ReceiveDeactivationAI");
static_assert(offsetof(BTS_SurvivorLookAround_C_ReceiveDeactivationAI, OwnerController) == 0x000000, "Member 'BTS_SurvivorLookAround_C_ReceiveDeactivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_SurvivorLookAround_C_ReceiveDeactivationAI, ControlledPawn) == 0x000008, "Member 'BTS_SurvivorLookAround_C_ReceiveDeactivationAI::ControlledPawn' has a wrong offset!");

}

