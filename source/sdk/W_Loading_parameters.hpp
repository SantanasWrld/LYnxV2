﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loading

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Loading.W_Loading_C.ExecuteUbergraph_W_Loading
// 0x0198 (0x0198 - 0x0000)
struct W_Loading_C_ExecuteUbergraph_W_Loading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0008(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDangerForDifficulty_Danger;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_MapName;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Difficulty;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrentPoints;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Objective;                      // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RemainingDays;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CardsLeft;                      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0100(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0150(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Loading_C_ExecuteUbergraph_W_Loading) == 0x000008, "Wrong alignment on W_Loading_C_ExecuteUbergraph_W_Loading");
static_assert(sizeof(W_Loading_C_ExecuteUbergraph_W_Loading) == 0x000198, "Wrong size on W_Loading_C_ExecuteUbergraph_W_Loading");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, EntryPoint) == 0x000000, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Map_Find_Value) == 0x000008, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Map_Find_Value_1) == 0x000028, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Map_Find_ReturnValue_1) == 0x000030, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_GetDangerForDifficulty_Danger) == 0x000038, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_GetDangerForDifficulty_Danger' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_CustomEvent_MapName) == 0x000040, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_CustomEvent_MapName' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_CustomEvent_Difficulty) == 0x000050, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_CustomEvent_Difficulty' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_CustomEvent_CurrentPoints) == 0x000054, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_CustomEvent_CurrentPoints' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_CustomEvent_Objective) == 0x000058, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_CustomEvent_Objective' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_CustomEvent_RemainingDays) == 0x00005C, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_CustomEvent_RemainingDays' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_CustomEvent_CardsLeft) == 0x000074, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_CustomEvent_CardsLeft' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_MakeArray_Array) == 0x000080, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Array_Get_Item) == 0x000090, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Less_IntInt_ReturnValue_1) == 0x00009C, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000A0, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000A8, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_MakeStruct_FormatArgumentData) == 0x0000B0, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, K2Node_MakeArray_Array_1) == 0x000150, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_Format_ReturnValue) == 0x000160, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_PlayAnimation_ReturnValue) == 0x000178, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000180, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_PlayAnimation_ReturnValue_1) == 0x000188, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000190, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Loading_C_ExecuteUbergraph_W_Loading, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000194, "Member 'W_Loading_C_ExecuteUbergraph_W_Loading::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function W_Loading.W_Loading_C.Get Difficulty Bar Percent
// 0x0004 (0x0004 - 0x0000)
struct W_Loading_C_Get_Difficulty_Bar_Percent final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Loading_C_Get_Difficulty_Bar_Percent) == 0x000004, "Wrong alignment on W_Loading_C_Get_Difficulty_Bar_Percent");
static_assert(sizeof(W_Loading_C_Get_Difficulty_Bar_Percent) == 0x000004, "Wrong size on W_Loading_C_Get_Difficulty_Bar_Percent");
static_assert(offsetof(W_Loading_C_Get_Difficulty_Bar_Percent, ReturnValue) == 0x000000, "Member 'W_Loading_C_Get_Difficulty_Bar_Percent::ReturnValue' has a wrong offset!");

// Function W_Loading.W_Loading_C.InitLoading
// 0x0020 (0x0020 - 0x0000)
struct W_Loading_C_InitLoading final
{
public:
	class FString                                 MapName_0;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Difficulty_0;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPoints_0;                                   // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Objective_0;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RemainingDays_0;                                   // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Loading_C_InitLoading) == 0x000008, "Wrong alignment on W_Loading_C_InitLoading");
static_assert(sizeof(W_Loading_C_InitLoading) == 0x000020, "Wrong size on W_Loading_C_InitLoading");
static_assert(offsetof(W_Loading_C_InitLoading, MapName_0) == 0x000000, "Member 'W_Loading_C_InitLoading::MapName_0' has a wrong offset!");
static_assert(offsetof(W_Loading_C_InitLoading, Difficulty_0) == 0x000010, "Member 'W_Loading_C_InitLoading::Difficulty_0' has a wrong offset!");
static_assert(offsetof(W_Loading_C_InitLoading, CurrentPoints_0) == 0x000014, "Member 'W_Loading_C_InitLoading::CurrentPoints_0' has a wrong offset!");
static_assert(offsetof(W_Loading_C_InitLoading, Objective_0) == 0x000018, "Member 'W_Loading_C_InitLoading::Objective_0' has a wrong offset!");
static_assert(offsetof(W_Loading_C_InitLoading, RemainingDays_0) == 0x00001C, "Member 'W_Loading_C_InitLoading::RemainingDays_0' has a wrong offset!");

// Function W_Loading.W_Loading_C.SetPressCards
// 0x0004 (0x0004 - 0x0000)
struct W_Loading_C_SetPressCards final
{
public:
	int32                                         CardsLeft;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Loading_C_SetPressCards) == 0x000004, "Wrong alignment on W_Loading_C_SetPressCards");
static_assert(sizeof(W_Loading_C_SetPressCards) == 0x000004, "Wrong size on W_Loading_C_SetPressCards");
static_assert(offsetof(W_Loading_C_SetPressCards, CardsLeft) == 0x000000, "Member 'W_Loading_C_SetPressCards::CardsLeft' has a wrong offset!");

}

