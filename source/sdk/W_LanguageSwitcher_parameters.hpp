﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LanguageSwitcher

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_LanguageSwitcher.W_LanguageSwitcher_C.ExecuteUbergraph_W_LanguageSwitcher
// 0x0098 (0x0098 - 0x0000)
struct W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetLocalizedCultures_ReturnValue;         // 0x0010(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCultureDisplayName_ReturnValue;        // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& SelectedItem, ESelectInfo SelectionType)> K2Node_CreateDelegate_OutputDelegate; // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCultureDisplayName_ReturnValue_1;      // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetCurrentCulture_ReturnValue;            // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher) == 0x000008, "Wrong alignment on W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher");
static_assert(sizeof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher) == 0x000098, "Wrong size on W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, EntryPoint) == 0x000000, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_GetLocalizedCultures_ReturnValue) == 0x000010, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_GetLocalizedCultures_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_GetCurrentCulture_ReturnValue) == 0x000020, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_GetCultureDisplayName_ReturnValue) == 0x000030, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_GetCultureDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, K2Node_CustomEvent_SelectedItem) == 0x000050, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, K2Node_CustomEvent_SelectionType) == 0x000060, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::K2Node_CustomEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_Array_Get_Item) == 0x000068, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_GetSelectedIndex_ReturnValue) == 0x000078, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_GetCultureDisplayName_ReturnValue_1) == 0x000080, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_GetCultureDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher, CallFunc_SetCurrentCulture_ReturnValue) == 0x000095, "Member 'W_LanguageSwitcher_C_ExecuteUbergraph_W_LanguageSwitcher::CallFunc_SetCurrentCulture_ReturnValue' has a wrong offset!");

// Function W_LanguageSwitcher.W_LanguageSwitcher_C.LanguageSelected
// 0x0018 (0x0018 - 0x0000)
struct W_LanguageSwitcher_C_LanguageSelected final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LanguageSwitcher_C_LanguageSelected) == 0x000008, "Wrong alignment on W_LanguageSwitcher_C_LanguageSelected");
static_assert(sizeof(W_LanguageSwitcher_C_LanguageSelected) == 0x000018, "Wrong size on W_LanguageSwitcher_C_LanguageSelected");
static_assert(offsetof(W_LanguageSwitcher_C_LanguageSelected, SelectedItem) == 0x000000, "Member 'W_LanguageSwitcher_C_LanguageSelected::SelectedItem' has a wrong offset!");
static_assert(offsetof(W_LanguageSwitcher_C_LanguageSelected, SelectionType) == 0x000010, "Member 'W_LanguageSwitcher_C_LanguageSelected::SelectionType' has a wrong offset!");

}

