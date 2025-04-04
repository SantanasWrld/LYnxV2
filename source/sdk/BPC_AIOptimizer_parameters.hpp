﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_AIOptimizer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPC_AIOptimizer.BPC_AIOptimizer_C.ShouldSleep
// 0x0028 (0x0028 - 0x0000)
struct BPC_AIOptimizer_C_ShouldSleep final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_UPPlayerCharacter_C*                CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AIOptimizer_C_ShouldSleep) == 0x000008, "Wrong alignment on BPC_AIOptimizer_C_ShouldSleep");
static_assert(sizeof(BPC_AIOptimizer_C_ShouldSleep) == 0x000028, "Wrong size on BPC_AIOptimizer_C_ShouldSleep");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, Result) == 0x000000, "Member 'BPC_AIOptimizer_C_ShouldSleep::Result' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BPC_AIOptimizer_C_ShouldSleep::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_Array_Get_Item) == 0x000008, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_Array_IsEmpty_ReturnValue) == 0x000014, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BPC_AIOptimizer_C_ShouldSleep::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_Less_IntInt_ReturnValue) == 0x00001E, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ShouldSleep, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BPC_AIOptimizer_C_ShouldSleep::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BPC_AIOptimizer.BPC_AIOptimizer_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BPC_AIOptimizer_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AIOptimizer_C_ReceiveTick) == 0x000004, "Wrong alignment on BPC_AIOptimizer_C_ReceiveTick");
static_assert(sizeof(BPC_AIOptimizer_C_ReceiveTick) == 0x000004, "Wrong size on BPC_AIOptimizer_C_ReceiveTick");
static_assert(offsetof(BPC_AIOptimizer_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BPC_AIOptimizer_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BPC_AIOptimizer.BPC_AIOptimizer_C.ExecuteUbergraph_BPC_AIOptimizer
// 0x0078 (0x0078 - 0x0000)
struct BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_InteriorVolume_C*                   CallFunc_GetInteriorVolume_InteriorVolume;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_DynamicCast_AsAIController;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UPGameInstance_C*                   K2Node_DynamicCast_AsBP_UPGame_Instance;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldSleep_Result;                       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_KillableCharacter_C*                K2Node_DynamicCast_AsBP_Killable_Character;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer) == 0x000008, "Wrong alignment on BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer");
static_assert(sizeof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer) == 0x000078, "Wrong size on BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, EntryPoint) == 0x000000, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_GetInteriorVolume_InteriorVolume) == 0x000020, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_GetInteriorVolume_InteriorVolume' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_DynamicCast_AsAIController) == 0x000030, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_DynamicCast_AsAIController' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_DynamicCast_AsBP_UPGame_Instance) == 0x000048, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_DynamicCast_AsBP_UPGame_Instance' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_ShouldSleep_Result) == 0x000051, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_ShouldSleep_Result' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000052, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_Event_DeltaSeconds) == 0x000054, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_K2_GetPawn_ReturnValue) == 0x000060, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_DynamicCast_AsBP_Killable_Character) == 0x000068, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_DynamicCast_AsBP_Killable_Character' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer, CallFunc_IsValid_ReturnValue_1) == 0x000071, "Member 'BPC_AIOptimizer_C_ExecuteUbergraph_BPC_AIOptimizer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

