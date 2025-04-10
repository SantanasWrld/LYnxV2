﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Inventory

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "S_InventoryItem_structs.hpp"


namespace SDK::Params
{

// Function W_Inventory.W_Inventory_C.CreateItemWidgets
// 0x0028 (0x0028 - 0x0000)
struct W_Inventory_C_CreateItemWidgets final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_InventoryItem_C*                     CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_CreateItemWidgets) == 0x000008, "Wrong alignment on W_Inventory_C_CreateItemWidgets");
static_assert(sizeof(W_Inventory_C_CreateItemWidgets) == 0x000028, "Wrong size on W_Inventory_C_CreateItemWidgets");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, Count) == 0x000000, "Member 'W_Inventory_C_CreateItemWidgets::Count' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, Temp_int_Variable) == 0x000004, "Member 'W_Inventory_C_CreateItemWidgets::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'W_Inventory_C_CreateItemWidgets::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_Inventory_C_CreateItemWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'W_Inventory_C_CreateItemWidgets::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, CallFunc_Create_ReturnValue) == 0x000018, "Member 'W_Inventory_C_CreateItemWidgets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_CreateItemWidgets, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000020, "Member 'W_Inventory_C_CreateItemWidgets::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function W_Inventory.W_Inventory_C.DeleteItemWidgets
// 0x0028 (0x0028 - 0x0000)
struct W_Inventory_C_DeleteItemWidgets final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_InventoryItem_C*                     _Widget;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_InventoryItem_C*                     CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_DeleteItemWidgets) == 0x000008, "Wrong alignment on W_Inventory_C_DeleteItemWidgets");
static_assert(sizeof(W_Inventory_C_DeleteItemWidgets) == 0x000028, "Wrong size on W_Inventory_C_DeleteItemWidgets");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, Count) == 0x000000, "Member 'W_Inventory_C_DeleteItemWidgets::Count' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, _Widget) == 0x000008, "Member 'W_Inventory_C_DeleteItemWidgets::_Widget' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, Temp_int_Variable) == 0x000010, "Member 'W_Inventory_C_DeleteItemWidgets::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'W_Inventory_C_DeleteItemWidgets::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'W_Inventory_C_DeleteItemWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, CallFunc_Array_RemoveItem_ReturnValue) == 0x00001C, "Member 'W_Inventory_C_DeleteItemWidgets::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_DeleteItemWidgets, CallFunc_Array_Get_Item) == 0x000020, "Member 'W_Inventory_C_DeleteItemWidgets::CallFunc_Array_Get_Item' has a wrong offset!");

// Function W_Inventory.W_Inventory_C.ExecuteUbergraph_W_Inventory
// 0x0190 (0x0190 - 0x0000)
struct W_Inventory_C_ExecuteUbergraph_W_Inventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UPPlayerController_C*               K2Node_DynamicCast_AsBP_UPPlayer_Controller;       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_InputKey_C*>                  K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ABP_InventoryItem_C*                    K2Node_CustomEvent_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_InputKey_C*                          CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UInputAction*>                   CallFunc_Map_Keys_Keys;                            // 0x0098(0x0010)(ReferenceParm)
	class UInputAction*                           CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x00B8(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UPPlayerCharacter_C*                K2Node_DynamicCast_AsBP_UPPlayer_Character;        // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_InventoryItem_C*                     CallFunc_Array_Get_Item_2;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_InventoryItem                       CallFunc_GetInventoryItem_ItemInfo;                // 0x0110(0x0068)(HasGetValueTypeHash)
	class ABP_InventoryItem_C*                    CallFunc_GetInventoryItem_Item;                    // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_ExecuteUbergraph_W_Inventory) == 0x000008, "Wrong alignment on W_Inventory_C_ExecuteUbergraph_W_Inventory");
static_assert(sizeof(W_Inventory_C_ExecuteUbergraph_W_Inventory) == 0x000190, "Wrong size on W_Inventory_C_ExecuteUbergraph_W_Inventory");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, EntryPoint) == 0x000000, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_Event_MyGeometry) == 0x000010, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_Event_InDeltaTime) == 0x000048, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_IsValid_ReturnValue_1) == 0x000055, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_DynamicCast_AsBP_UPPlayer_Controller) == 0x000068, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_DynamicCast_AsBP_UPPlayer_Controller' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000074, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_MakeArray_Array) == 0x000078, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_CustomEvent_Item) == 0x000088, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_Get_Item) == 0x000090, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Map_Keys_Keys) == 0x000098, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000B0, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Map_Find_Value) == 0x0000B8, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Map_Find_ReturnValue) == 0x0000D0, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_Length_ReturnValue_1) == 0x0000D4, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D8, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_K2_GetPawn_ReturnValue) == 0x0000E0, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, Temp_int_Array_Index_Variable_1) == 0x0000E8, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_DynamicCast_AsBP_UPPlayer_Character) == 0x0000F0, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_DynamicCast_AsBP_UPPlayer_Character' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_Get_Item_2) == 0x000100, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000108, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_GetInventoryItem_ItemInfo) == 0x000110, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_GetInventoryItem_ItemInfo' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_GetInventoryItem_Item) == 0x000178, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_GetInventoryItem_Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Array_Length_ReturnValue_2) == 0x000180, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Subtract_IntInt_ReturnValue) == 0x000184, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Greater_IntInt_ReturnValue) == 0x000188, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_ExecuteUbergraph_W_Inventory, CallFunc_Multiply_IntInt_ReturnValue) == 0x00018C, "Member 'W_Inventory_C_ExecuteUbergraph_W_Inventory::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

// Function W_Inventory.W_Inventory_C.GetInventoryItem
// 0x00F8 (0x00F8 - 0x0000)
struct W_Inventory_C_GetInventoryItem final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_InventoryItem                       ItemInfo;                                          // 0x0008(0x0068)(Parm, OutParm, HasGetValueTypeHash)
	class ABP_InventoryItem_C*                    Item;                                              // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UObject*                          Temp_object_Variable;                              // 0x0078(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InventoryItem_C*                    CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InventoryItem                       CallFunc_GetInventoryItemInfo_ItemInfo;            // 0x0090(0x0068)(HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_GetInventoryItem) == 0x000008, "Wrong alignment on W_Inventory_C_GetInventoryItem");
static_assert(sizeof(W_Inventory_C_GetInventoryItem) == 0x0000F8, "Wrong size on W_Inventory_C_GetInventoryItem");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, Index_0) == 0x000000, "Member 'W_Inventory_C_GetInventoryItem::Index_0' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, ItemInfo) == 0x000008, "Member 'W_Inventory_C_GetInventoryItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, Item) == 0x000070, "Member 'W_Inventory_C_GetInventoryItem::Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, Temp_object_Variable) == 0x000078, "Member 'W_Inventory_C_GetInventoryItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000080, "Member 'W_Inventory_C_GetInventoryItem::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, CallFunc_Array_Get_Item) == 0x000088, "Member 'W_Inventory_C_GetInventoryItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetInventoryItem, CallFunc_GetInventoryItemInfo_ItemInfo) == 0x000090, "Member 'W_Inventory_C_GetInventoryItem::CallFunc_GetInventoryItemInfo_ItemInfo' has a wrong offset!");

// Function W_Inventory.W_Inventory_C.GetItemInfo
// 0x01B8 (0x01B8 - 0x0000)
struct W_Inventory_C_GetItemInfo final
{
public:
	class ABP_InventoryItem_C*                    Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   InfoText;                                          // 0x0008(0x0018)(Parm, OutParm)
	TArray<class FString>                         _Infos;                                            // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInputAction*>                   CallFunc_Map_Keys_Keys;                            // 0x0038(0x0010)(ReferenceParm)
	class UInputAction*                           CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0058(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetInputKey_Key;                          // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetInputKey_Icon;                         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0110(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0160(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_GetItemInfo) == 0x000008, "Wrong alignment on W_Inventory_C_GetItemInfo");
static_assert(sizeof(W_Inventory_C_GetItemInfo) == 0x0001B8, "Wrong size on W_Inventory_C_GetItemInfo");
static_assert(offsetof(W_Inventory_C_GetItemInfo, Item) == 0x000000, "Member 'W_Inventory_C_GetItemInfo::Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, InfoText) == 0x000008, "Member 'W_Inventory_C_GetItemInfo::InfoText' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, _Infos) == 0x000020, "Member 'W_Inventory_C_GetItemInfo::_Infos' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, Temp_int_Array_Index_Variable) == 0x000030, "Member 'W_Inventory_C_GetItemInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Map_Keys_Keys) == 0x000038, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Array_Get_Item) == 0x000048, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Map_Find_Value) == 0x000058, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'W_Inventory_C_GetItemInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'W_Inventory_C_GetItemInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0000CC, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_GetInputKey_Key) == 0x0000D0, "Member 'W_Inventory_C_GetItemInfo::CallFunc_GetInputKey_Key' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_GetInputKey_Icon) == 0x0000E0, "Member 'W_Inventory_C_GetItemInfo::CallFunc_GetInputKey_Icon' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_JoinStringArray_ReturnValue) == 0x000100, "Member 'W_Inventory_C_GetItemInfo::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, K2Node_MakeStruct_FormatArgumentData_1) == 0x000110, "Member 'W_Inventory_C_GetItemInfo::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000160, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, K2Node_MakeArray_Array) == 0x000178, "Member 'W_Inventory_C_GetItemInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Format_ReturnValue) == 0x000188, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_GetItemInfo, CallFunc_Array_Add_ReturnValue) == 0x0001B0, "Member 'W_Inventory_C_GetItemInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function W_Inventory.W_Inventory_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_Inventory_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_Tick) == 0x000004, "Wrong alignment on W_Inventory_C_Tick");
static_assert(sizeof(W_Inventory_C_Tick) == 0x00003C, "Wrong size on W_Inventory_C_Tick");
static_assert(offsetof(W_Inventory_C_Tick, MyGeometry) == 0x000000, "Member 'W_Inventory_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Inventory_C_Tick, InDeltaTime) == 0x000038, "Member 'W_Inventory_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_Inventory.W_Inventory_C.UpdateInputActions
// 0x0008 (0x0008 - 0x0000)
struct W_Inventory_C_UpdateInputActions final
{
public:
	class ABP_InventoryItem_C*                    Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Inventory_C_UpdateInputActions) == 0x000008, "Wrong alignment on W_Inventory_C_UpdateInputActions");
static_assert(sizeof(W_Inventory_C_UpdateInputActions) == 0x000008, "Wrong size on W_Inventory_C_UpdateInputActions");
static_assert(offsetof(W_Inventory_C_UpdateInputActions, Item) == 0x000000, "Member 'W_Inventory_C_UpdateInputActions::Item' has a wrong offset!");

}

