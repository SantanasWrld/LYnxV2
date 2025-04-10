﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_JumpToAttack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_JumpToAttack.BTT_JumpToAttack_C.ExecuteUbergraph_BTT_JumpToAttack
// 0x0118 (0x0118 - 0x0000)
struct BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_KillableCharacter_C*                K2Node_DynamicCast_AsBP_Killable_Character;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_PredictActorLocation_Location;            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetEyesHeight_EyesHeight;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Insect_C*                           K2Node_DynamicCast_AsBP_Insect;                    // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack) == 0x000008, "Wrong alignment on BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack");
static_assert(sizeof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack) == 0x000118, "Wrong size on BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, EntryPoint) == 0x000000, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000008, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, K2Node_DynamicCast_AsBP_Killable_Character) == 0x000028, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::K2Node_DynamicCast_AsBP_Killable_Character' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_PredictActorLocation_Location) == 0x000038, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_PredictActorLocation_Location' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_GetEyesHeight_EyesHeight) == 0x000050, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_GetEyesHeight_EyesHeight' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_BreakVector_X) == 0x000058, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_BreakVector_Y) == 0x000060, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_BreakVector_Z) == 0x000068, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000088, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_FindLookAtRotation_ReturnValue) == 0x000090, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_MakeVector_ReturnValue) == 0x0000A8, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000C0, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, K2Node_Event_OwnerController) == 0x0000D8, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, K2Node_Event_ControlledPawn) == 0x0000E0, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x0000E8, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x000100, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, K2Node_DynamicCast_AsBP_Insect) == 0x000108, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::K2Node_DynamicCast_AsBP_Insect' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000111, "Member 'BTT_JumpToAttack_C_ExecuteUbergraph_BTT_JumpToAttack::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BTT_JumpToAttack.BTT_JumpToAttack_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_JumpToAttack_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_JumpToAttack_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_JumpToAttack_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_JumpToAttack_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_JumpToAttack_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_JumpToAttack_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_JumpToAttack_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_JumpToAttack_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_JumpToAttack_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

