﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DamageWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_Dismemberment_structs.hpp"
#include "E_DeathType_structs.hpp"


namespace SDK::Params
{

// Function W_DamageWidget.W_DamageWidget_C.ExecuteUbergraph_W_DamageWidget
// 0x0080 (0x0080 - 0x0000)
struct W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Damage, bool Ragdoll, const struct FVector& SourceLocation, double Force, E_Dismemberment Dismemberment, E_DeathType DeathType, class AActor* Attacker)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Damage;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Ragdoll;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_SourceLocation;                 // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Force;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Dismemberment                               K2Node_CustomEvent_Dismemberment;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DeathType                                   K2Node_CustomEvent_DeathType;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Attacker;                       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UPPlayerCharacter_C*                K2Node_DynamicCast_AsBP_UPPlayer_Character;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget) == 0x000008, "Wrong alignment on W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget");
static_assert(sizeof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget) == 0x000080, "Wrong size on W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, EntryPoint) == 0x000000, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_Damage) == 0x000014, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_Ragdoll) == 0x000018, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_Ragdoll' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_SourceLocation) == 0x000020, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_SourceLocation' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_Force) == 0x000038, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_Force' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_Dismemberment) == 0x000040, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_Dismemberment' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_DeathType) == 0x000041, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_DeathType' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_CustomEvent_Attacker) == 0x000048, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_CustomEvent_Attacker' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, CallFunc_GetPlayerPawn_ReturnValue) == 0x000050, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_DynamicCast_AsBP_UPPlayer_Character) == 0x000060, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_DynamicCast_AsBP_UPPlayer_Character' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'W_DamageWidget_C_ExecuteUbergraph_W_DamageWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function W_DamageWidget.W_DamageWidget_C.PlayerHarmed
// 0x0038 (0x0038 - 0x0000)
struct W_DamageWidget_C_PlayerHarmed final
{
public:
	int32                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ragdoll;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SourceLocation;                                    // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Force;                                             // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Dismemberment                               Dismemberment;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DeathType                                   DeathType;                                         // 0x0029(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Attacker;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_DamageWidget_C_PlayerHarmed) == 0x000008, "Wrong alignment on W_DamageWidget_C_PlayerHarmed");
static_assert(sizeof(W_DamageWidget_C_PlayerHarmed) == 0x000038, "Wrong size on W_DamageWidget_C_PlayerHarmed");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, Damage) == 0x000000, "Member 'W_DamageWidget_C_PlayerHarmed::Damage' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, Ragdoll) == 0x000004, "Member 'W_DamageWidget_C_PlayerHarmed::Ragdoll' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, SourceLocation) == 0x000008, "Member 'W_DamageWidget_C_PlayerHarmed::SourceLocation' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, Force) == 0x000020, "Member 'W_DamageWidget_C_PlayerHarmed::Force' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, Dismemberment) == 0x000028, "Member 'W_DamageWidget_C_PlayerHarmed::Dismemberment' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, DeathType) == 0x000029, "Member 'W_DamageWidget_C_PlayerHarmed::DeathType' has a wrong offset!");
static_assert(offsetof(W_DamageWidget_C_PlayerHarmed, Attacker) == 0x000030, "Member 'W_DamageWidget_C_PlayerHarmed::Attacker' has a wrong offset!");

}

