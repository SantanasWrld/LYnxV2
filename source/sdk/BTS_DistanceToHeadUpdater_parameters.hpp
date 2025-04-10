﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_DistanceToHeadUpdater

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTS_DistanceToHeadUpdater.BTS_DistanceToHeadUpdater_C.ExecuteUbergraph_BTS_DistanceToHeadUpdater
// 0x0080 (0x0080 - 0x0000)
struct BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_KillableCharacter_C*                K2Node_DynamicCast_AsBP_Killable_Character;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater) == 0x000008, "Wrong alignment on BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater");
static_assert(sizeof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater) == 0x000080, "Wrong size on BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, EntryPoint) == 0x000000, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000008, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, K2Node_Event_OwnerController) == 0x000010, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, K2Node_DynamicCast_AsBP_Killable_Character) == 0x000028, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::K2Node_DynamicCast_AsBP_Killable_Character' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, CallFunc_GetSocketLocation_ReturnValue) == 0x000058, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, CallFunc_Vector_Distance_ReturnValue) == 0x000070, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater, CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast) == 0x000078, "Member 'BTS_DistanceToHeadUpdater_C_ExecuteUbergraph_BTS_DistanceToHeadUpdater::CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast' has a wrong offset!");

// Function BTS_DistanceToHeadUpdater.BTS_DistanceToHeadUpdater_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_DistanceToHeadUpdater_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_DistanceToHeadUpdater_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_DistanceToHeadUpdater_C_ReceiveTickAI");
static_assert(sizeof(BTS_DistanceToHeadUpdater_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_DistanceToHeadUpdater_C_ReceiveTickAI");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_DistanceToHeadUpdater_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_DistanceToHeadUpdater_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_DistanceToHeadUpdater_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_DistanceToHeadUpdater_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

