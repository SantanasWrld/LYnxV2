﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shiny

#include "Basic.hpp"

#include "E_ScoringActorState_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Shiny.BP_Shiny_C.SetGlow
// 0x0010 (0x0010 - 0x0000)
struct BP_Shiny_C_SetGlow final
{
public:
	double                                        Glow;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Shiny_C_SetGlow) == 0x000008, "Wrong alignment on BP_Shiny_C_SetGlow");
static_assert(sizeof(BP_Shiny_C_SetGlow) == 0x000010, "Wrong size on BP_Shiny_C_SetGlow");
static_assert(offsetof(BP_Shiny_C_SetGlow, Glow) == 0x000000, "Member 'BP_Shiny_C_SetGlow::Glow' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_SetGlow, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000008, "Member 'BP_Shiny_C_SetGlow::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_Shiny.BP_Shiny_C.GetDefaultScoringState
// 0x0003 (0x0003 - 0x0000)
struct BP_Shiny_C_GetDefaultScoringState final
{
public:
	E_ScoringActorState                           State;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringActorState                           CallFunc_GetDefaultScoringState_State;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Shiny_C_GetDefaultScoringState) == 0x000001, "Wrong alignment on BP_Shiny_C_GetDefaultScoringState");
static_assert(sizeof(BP_Shiny_C_GetDefaultScoringState) == 0x000003, "Wrong size on BP_Shiny_C_GetDefaultScoringState");
static_assert(offsetof(BP_Shiny_C_GetDefaultScoringState, State) == 0x000000, "Member 'BP_Shiny_C_GetDefaultScoringState::State' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_GetDefaultScoringState, CallFunc_GetDefaultScoringState_State) == 0x000001, "Member 'BP_Shiny_C_GetDefaultScoringState::CallFunc_GetDefaultScoringState_State' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_GetDefaultScoringState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_Shiny_C_GetDefaultScoringState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_Shiny.BP_Shiny_C.Killed (Server)
// 0x0010 (0x0010 - 0x0000)
struct BP_Shiny_C_Killed__Server_ final
{
public:
	class ABP_KillableCharacter_C*                KilledCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Killer;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Shiny_C_Killed__Server_) == 0x000008, "Wrong alignment on BP_Shiny_C_Killed__Server_");
static_assert(sizeof(BP_Shiny_C_Killed__Server_) == 0x000010, "Wrong size on BP_Shiny_C_Killed__Server_");
static_assert(offsetof(BP_Shiny_C_Killed__Server_, KilledCharacter) == 0x000000, "Member 'BP_Shiny_C_Killed__Server_::KilledCharacter' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_Killed__Server_, Killer) == 0x000008, "Member 'BP_Shiny_C_Killed__Server_::Killer' has a wrong offset!");

// Function BP_Shiny.BP_Shiny_C.ExecuteUbergraph_BP_Shiny
// 0x02D0 (0x02D0 - 0x0000)
struct BP_Shiny_C_ExecuteUbergraph_BP_Shiny final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ShinyExplosion_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_KillableCharacter_C*                K2Node_Event_KilledCharacter;                      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Killer;                               // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x01D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAudioComponent*                        CallFunc_SetAudioAttachedEnabled_OutAudio;         // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SetAudioAttachedEnabled_OutAudio_1;       // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny) == 0x000010, "Wrong alignment on BP_Shiny_C_ExecuteUbergraph_BP_Shiny");
static_assert(sizeof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny) == 0x0002D0, "Wrong size on BP_Shiny_C_ExecuteUbergraph_BP_Shiny");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, EntryPoint) == 0x000000, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_BreakRotator_Roll) == 0x000020, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_BreakRotator_Pitch) == 0x000024, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_BreakRotator_Yaw) == 0x000028, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_MakeRotator_ReturnValue_1) == 0x000030, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000060, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_GetMaterial_ReturnValue) == 0x0000D0, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000D8, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, K2Node_Event_KilledCharacter) == 0x0000E0, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::K2Node_Event_KilledCharacter' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, K2Node_Event_Killer) == 0x0000E8, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::K2Node_Event_Killer' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000F0, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x0001D8, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_SetAudioAttachedEnabled_OutAudio) == 0x0002C0, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_SetAudioAttachedEnabled_OutAudio' has a wrong offset!");
static_assert(offsetof(BP_Shiny_C_ExecuteUbergraph_BP_Shiny, CallFunc_SetAudioAttachedEnabled_OutAudio_1) == 0x0002C8, "Member 'BP_Shiny_C_ExecuteUbergraph_BP_Shiny::CallFunc_SetAudioAttachedEnabled_OutAudio_1' has a wrong offset!");

}

