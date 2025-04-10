﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResultTopPictures

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ResultTopPictures.BP_ResultTopPictures_C.ExecuteUbergraph_BP_ResultTopPictures
// 0x0098 (0x0098 - 0x0000)
struct BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_UPGameState_C*                      K2Node_DynamicCast_AsBP_UPGame_State;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ResultTopPicture_C*>         K2Node_CustomEvent_TopPictures;                    // 0x0068(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResultTopPicture_C*                 CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ResultTopPicture_C*                 CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures) == 0x000008, "Wrong alignment on BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures");
static_assert(sizeof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures) == 0x000098, "Wrong size on BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, EntryPoint) == 0x000000, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, K2Node_DynamicCast_AsBP_UPGame_State) == 0x000020, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::K2Node_DynamicCast_AsBP_UPGame_State' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Array_Length_ReturnValue_1) == 0x00003C, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000048, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Array_Length_ReturnValue_2) == 0x000060, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000064, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, K2Node_CustomEvent_TopPictures) == 0x000068, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::K2Node_CustomEvent_TopPictures' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, Temp_int_Array_Index_Variable_1) == 0x000078, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Array_Length_ReturnValue_3) == 0x000090, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures, CallFunc_Less_IntInt_ReturnValue_1) == 0x000094, "Member 'BP_ResultTopPictures_C_ExecuteUbergraph_BP_ResultTopPictures::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_ResultTopPictures.BP_ResultTopPictures_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ResultTopPictures_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ResultTopPictures_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ResultTopPictures_C_ReceiveTick");
static_assert(sizeof(BP_ResultTopPictures_C_ReceiveTick) == 0x000004, "Wrong size on BP_ResultTopPictures_C_ReceiveTick");
static_assert(offsetof(BP_ResultTopPictures_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ResultTopPictures_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ResultTopPictures.BP_ResultTopPictures_C.UpdateTopPictures
// 0x0010 (0x0010 - 0x0000)
struct BP_ResultTopPictures_C_UpdateTopPictures final
{
public:
	TArray<class ABP_ResultTopPicture_C*>         TopPictures;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ResultTopPictures_C_UpdateTopPictures) == 0x000008, "Wrong alignment on BP_ResultTopPictures_C_UpdateTopPictures");
static_assert(sizeof(BP_ResultTopPictures_C_UpdateTopPictures) == 0x000010, "Wrong size on BP_ResultTopPictures_C_UpdateTopPictures");
static_assert(offsetof(BP_ResultTopPictures_C_UpdateTopPictures, TopPictures) == 0x000000, "Member 'BP_ResultTopPictures_C_UpdateTopPictures::TopPictures' has a wrong offset!");

}

