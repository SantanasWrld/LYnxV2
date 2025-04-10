﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CurrentSession

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_CurrentSession.W_CurrentSession_C.BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'W_CurrentSession_C_BndEvt__W_CurrentSession_FriendsOnlyCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function W_CurrentSession.W_CurrentSession_C.ExecuteUbergraph_W_CurrentSession
// 0x0148 (0x0148 - 0x0000)
struct W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_UPPlayerState_C*>            CallFunc_GetPlayerStates_PlayerStates;             // 0x0010(0x0010)(ReferenceParm)
	int64                                         K2Node_CustomEvent_SteamId;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_UPPlayerState_C*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_UPGameState_C*                      K2Node_DynamicCast_AsBP_UPGame_State;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UPGameInstance_C*                   K2Node_DynamicCast_AsBP_UPGame_Instance;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_SessionMember_C*                     CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInLobby_InLobby;                        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0090(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_IsInSession_InSession;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int64 SteamID)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0118(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UW_SessionMember_C*>             K2Node_MakeArray_Array_1;                          // 0x0130(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsCurrentSessionFull_IsFull;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession) == 0x000008, "Wrong alignment on W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession");
static_assert(sizeof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession) == 0x000148, "Wrong size on W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, EntryPoint) == 0x000000, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_GetPlayerStates_PlayerStates) == 0x000010, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_GetPlayerStates_PlayerStates' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_CustomEvent_SteamId) == 0x000020, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_CustomEvent_SteamId' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000030, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_GetGameState_ReturnValue) == 0x000038, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_DynamicCast_AsBP_UPGame_State) == 0x000040, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_DynamicCast_AsBP_UPGame_State' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, Temp_byte_Variable) == 0x000049, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_GetGameInstance_ReturnValue) == 0x000050, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_DynamicCast_AsBP_UPGame_Instance) == 0x000058, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_DynamicCast_AsBP_UPGame_Instance' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, Temp_byte_Variable_1) == 0x000061, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, Temp_bool_Variable) == 0x000062, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_IsInLobby_InLobby) == 0x000070, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_IsInLobby_InLobby' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_MakeStruct_FormatArgumentData) == 0x000090, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_IsInSession_InSession) == 0x0000E0, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_IsInSession_InSession' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_MakeArray_Array) == 0x0000E8, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_Less_IntInt_ReturnValue) == 0x000114, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_CreateDelegate_OutputDelegate) == 0x000118, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_ComponentBoundEvent_bIsChecked) == 0x000128, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_MakeArray_Array_1) == 0x000130, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, CallFunc_IsCurrentSessionFull_IsFull) == 0x000140, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::CallFunc_IsCurrentSessionFull_IsFull' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession, K2Node_Select_Default) == 0x000141, "Member 'W_CurrentSession_C_ExecuteUbergraph_W_CurrentSession::K2Node_Select_Default' has a wrong offset!");

// Function W_CurrentSession.W_CurrentSession_C.FocusCurrentSession
// 0x0018 (0x0018 - 0x0000)
struct W_CurrentSession_C_FocusCurrentSession final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_FocusFirstMember_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_FocusCurrentSession) == 0x000008, "Wrong alignment on W_CurrentSession_C_FocusCurrentSession");
static_assert(sizeof(W_CurrentSession_C_FocusCurrentSession) == 0x000018, "Wrong size on W_CurrentSession_C_FocusCurrentSession");
static_assert(offsetof(W_CurrentSession_C_FocusCurrentSession, ReturnValue) == 0x000000, "Member 'W_CurrentSession_C_FocusCurrentSession::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusCurrentSession, CallFunc_FocusFirstMember_ReturnValue) == 0x000008, "Member 'W_CurrentSession_C_FocusCurrentSession::CallFunc_FocusFirstMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusCurrentSession, CallFunc_IsVisible_ReturnValue) == 0x000010, "Member 'W_CurrentSession_C_FocusCurrentSession::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function W_CurrentSession.W_CurrentSession_C.FocusFirstMember
// 0x0010 (0x0010 - 0x0000)
struct W_CurrentSession_C_FocusFirstMember final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_FocusSessionMember_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_FocusFirstMember) == 0x000008, "Wrong alignment on W_CurrentSession_C_FocusFirstMember");
static_assert(sizeof(W_CurrentSession_C_FocusFirstMember) == 0x000010, "Wrong size on W_CurrentSession_C_FocusFirstMember");
static_assert(offsetof(W_CurrentSession_C_FocusFirstMember, ReturnValue) == 0x000000, "Member 'W_CurrentSession_C_FocusFirstMember::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusFirstMember, CallFunc_FocusSessionMember_ReturnValue) == 0x000008, "Member 'W_CurrentSession_C_FocusFirstMember::CallFunc_FocusSessionMember_ReturnValue' has a wrong offset!");

// Function W_CurrentSession.W_CurrentSession_C.FocusMainMenu
// 0x0028 (0x0028 - 0x0000)
struct W_CurrentSession_C_FocusMainMenu final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_UPPlayerController_C*               K2Node_DynamicCast_AsBP_UPPlayer_Controller;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_FocusMainMenu) == 0x000008, "Wrong alignment on W_CurrentSession_C_FocusMainMenu");
static_assert(sizeof(W_CurrentSession_C_FocusMainMenu) == 0x000028, "Wrong size on W_CurrentSession_C_FocusMainMenu");
static_assert(offsetof(W_CurrentSession_C_FocusMainMenu, Navigation_0) == 0x000000, "Member 'W_CurrentSession_C_FocusMainMenu::Navigation_0' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusMainMenu, ReturnValue) == 0x000008, "Member 'W_CurrentSession_C_FocusMainMenu::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusMainMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'W_CurrentSession_C_FocusMainMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusMainMenu, K2Node_DynamicCast_AsBP_UPPlayer_Controller) == 0x000018, "Member 'W_CurrentSession_C_FocusMainMenu::K2Node_DynamicCast_AsBP_UPPlayer_Controller' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_FocusMainMenu, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'W_CurrentSession_C_FocusMainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function W_CurrentSession.W_CurrentSession_C.GetPlayerStates
// 0x0050 (0x0050 - 0x0000)
struct W_CurrentSession_C_GetPlayerStates final
{
public:
	TArray<class ABP_UPPlayerState_C*>            PlayerStates;                                      // 0x0000(0x0010)(Parm, OutParm)
	TArray<class ABP_UPPlayerState_C*>            _PlayerStates;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_UPPlayerState_C*                    K2Node_DynamicCast_AsBP_UPPlayer_State;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayerStates_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_GetPlayerStates) == 0x000008, "Wrong alignment on W_CurrentSession_C_GetPlayerStates");
static_assert(sizeof(W_CurrentSession_C_GetPlayerStates) == 0x000050, "Wrong size on W_CurrentSession_C_GetPlayerStates");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, PlayerStates) == 0x000000, "Member 'W_CurrentSession_C_GetPlayerStates::PlayerStates' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, _PlayerStates) == 0x000010, "Member 'W_CurrentSession_C_GetPlayerStates::_PlayerStates' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, Temp_int_Variable) == 0x000020, "Member 'W_CurrentSession_C_GetPlayerStates::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, CallFunc_GetPlayerState_ReturnValue) == 0x000028, "Member 'W_CurrentSession_C_GetPlayerStates::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, K2Node_DynamicCast_AsBP_UPPlayer_State) == 0x000030, "Member 'W_CurrentSession_C_GetPlayerStates::K2Node_DynamicCast_AsBP_UPPlayer_State' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'W_CurrentSession_C_GetPlayerStates::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'W_CurrentSession_C_GetPlayerStates::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'W_CurrentSession_C_GetPlayerStates::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, CallFunc_GetNumPlayerStates_ReturnValue) == 0x000044, "Member 'W_CurrentSession_C_GetPlayerStates::CallFunc_GetNumPlayerStates_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CurrentSession_C_GetPlayerStates, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'W_CurrentSession_C_GetPlayerStates::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function W_CurrentSession.W_CurrentSession_C.PlayerJoinedOrLeft
// 0x0008 (0x0008 - 0x0000)
struct W_CurrentSession_C_PlayerJoinedOrLeft final
{
public:
	int64                                         SteamID;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CurrentSession_C_PlayerJoinedOrLeft) == 0x000008, "Wrong alignment on W_CurrentSession_C_PlayerJoinedOrLeft");
static_assert(sizeof(W_CurrentSession_C_PlayerJoinedOrLeft) == 0x000008, "Wrong size on W_CurrentSession_C_PlayerJoinedOrLeft");
static_assert(offsetof(W_CurrentSession_C_PlayerJoinedOrLeft, SteamID) == 0x000000, "Member 'W_CurrentSession_C_PlayerJoinedOrLeft::SteamID' has a wrong offset!");

}

