﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Batogon_FlyTo

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_Batogon_FlyTo.BTT_Batogon_FlyTo_C.ExecuteUbergraph_BTT_Batogon_FlyTo
// 0x0078 (0x0078 - 0x0000)
struct BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_Result;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_CustomEvent_AIController;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult Result, class AAIController* AIController)> K2Node_CreateDelegate_OutputDelegate; // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABPC_Batogon_C*                         K2Node_DynamicCast_AsBPC_Batogon;                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAITask_MoveTo*                         CallFunc_AIMoveTo_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo) == 0x000008, "Wrong alignment on BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo");
static_assert(sizeof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo) == 0x000078, "Wrong size on BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, EntryPoint) == 0x000000, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_CustomEvent_Result) == 0x000004, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_CustomEvent_AIController) == 0x000008, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_CustomEvent_AIController' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_Event_OwnerController) == 0x000030, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_Event_ControlledPawn) == 0x000038, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_DynamicCast_AsBPC_Batogon) == 0x000040, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_DynamicCast_AsBPC_Batogon' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000050, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, CallFunc_AIMoveTo_ReturnValue) == 0x000068, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::CallFunc_AIMoveTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BTT_Batogon_FlyTo_C_ExecuteUbergraph_BTT_Batogon_FlyTo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BTT_Batogon_FlyTo.BTT_Batogon_FlyTo_C.OnMoveFinished_F776E1B041248B221EFD71907C363714
// 0x0010 (0x0010 - 0x0000)
struct BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714 final
{
public:
	EPathFollowingResult                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          AIController;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714) == 0x000008, "Wrong alignment on BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714");
static_assert(sizeof(BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714) == 0x000010, "Wrong size on BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714");
static_assert(offsetof(BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714, Result) == 0x000000, "Member 'BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714::Result' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714, AIController) == 0x000008, "Member 'BTT_Batogon_FlyTo_C_OnMoveFinished_F776E1B041248B221EFD71907C363714::AIController' has a wrong offset!");

// Function BTT_Batogon_FlyTo.BTT_Batogon_FlyTo_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_Batogon_FlyTo_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Batogon_FlyTo_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_Batogon_FlyTo_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_Batogon_FlyTo_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_Batogon_FlyTo_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_Batogon_FlyTo_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Batogon_FlyTo_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_Batogon_FlyTo_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

