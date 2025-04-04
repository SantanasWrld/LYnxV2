﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Portal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Portal.BP_Portal_C.CreatePlayerStart
// 0x0080 (0x0080 - 0x0000)
struct BP_Portal_C_CreatePlayerStart final
{
public:
	class APlayerStart*                           PlayerSart;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_CreatePlayerStart) == 0x000010, "Wrong alignment on BP_Portal_C_CreatePlayerStart");
static_assert(sizeof(BP_Portal_C_CreatePlayerStart) == 0x000080, "Wrong size on BP_Portal_C_CreatePlayerStart");
static_assert(offsetof(BP_Portal_C_CreatePlayerStart, PlayerSart) == 0x000000, "Member 'BP_Portal_C_CreatePlayerStart::PlayerSart' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_CreatePlayerStart, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'BP_Portal_C_CreatePlayerStart::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_CreatePlayerStart, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'BP_Portal_C_CreatePlayerStart::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_CreatePlayerStart, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'BP_Portal_C_CreatePlayerStart::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.ExecuteUbergraph_BP_Portal
// 0x0068 (0x0068 - 0x0000)
struct BP_Portal_C_ExecuteUbergraph_BP_Portal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UPPlayerCharacter_C*                K2Node_Event_Player;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Interior_CubemapCapture_C*          CallFunc_GetActorOfClass_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsExteriorPortal;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Portal_C*                           K2Node_CustomEvent_LinkedPortal;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_ExecuteUbergraph_BP_Portal) == 0x000008, "Wrong alignment on BP_Portal_C_ExecuteUbergraph_BP_Portal");
static_assert(sizeof(BP_Portal_C_ExecuteUbergraph_BP_Portal) == 0x000068, "Wrong size on BP_Portal_C_ExecuteUbergraph_BP_Portal");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, EntryPoint) == 0x000000, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, K2Node_Event_Player) == 0x000008, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::K2Node_Event_Player' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000018, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, CallFunc_GetActorOfClass_ReturnValue) == 0x000048, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, K2Node_CustomEvent_IsExteriorPortal) == 0x000050, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::K2Node_CustomEvent_IsExteriorPortal' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, K2Node_CustomEvent_LinkedPortal) == 0x000058, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::K2Node_CustomEvent_LinkedPortal' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_ExecuteUbergraph_BP_Portal, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'BP_Portal_C_ExecuteUbergraph_BP_Portal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.GetInteractDistance
// 0x0008 (0x0008 - 0x0000)
struct BP_Portal_C_GetInteractDistance final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_GetInteractDistance) == 0x000008, "Wrong alignment on BP_Portal_C_GetInteractDistance");
static_assert(sizeof(BP_Portal_C_GetInteractDistance) == 0x000008, "Wrong size on BP_Portal_C_GetInteractDistance");
static_assert(offsetof(BP_Portal_C_GetInteractDistance, Distance) == 0x000000, "Member 'BP_Portal_C_GetInteractDistance::Distance' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.GetInteractDuration
// 0x0008 (0x0008 - 0x0000)
struct BP_Portal_C_GetInteractDuration final
{
public:
	double                                        Duration;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_GetInteractDuration) == 0x000008, "Wrong alignment on BP_Portal_C_GetInteractDuration");
static_assert(sizeof(BP_Portal_C_GetInteractDuration) == 0x000008, "Wrong size on BP_Portal_C_GetInteractDuration");
static_assert(offsetof(BP_Portal_C_GetInteractDuration, Duration) == 0x000000, "Member 'BP_Portal_C_GetInteractDuration::Duration' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.GetInteractNoise
// 0x0010 (0x0010 - 0x0000)
struct BP_Portal_C_GetInteractNoise final
{
public:
	bool                                          NoiseOnInteract;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NoiseRange;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_GetInteractNoise) == 0x000008, "Wrong alignment on BP_Portal_C_GetInteractNoise");
static_assert(sizeof(BP_Portal_C_GetInteractNoise) == 0x000010, "Wrong size on BP_Portal_C_GetInteractNoise");
static_assert(offsetof(BP_Portal_C_GetInteractNoise, NoiseOnInteract) == 0x000000, "Member 'BP_Portal_C_GetInteractNoise::NoiseOnInteract' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_GetInteractNoise, NoiseRange) == 0x000008, "Member 'BP_Portal_C_GetInteractNoise::NoiseRange' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.GetInteractText
// 0x0018 (0x0018 - 0x0000)
struct BP_Portal_C_GetInteractText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_Portal_C_GetInteractText) == 0x000008, "Wrong alignment on BP_Portal_C_GetInteractText");
static_assert(sizeof(BP_Portal_C_GetInteractText) == 0x000018, "Wrong size on BP_Portal_C_GetInteractText");
static_assert(offsetof(BP_Portal_C_GetInteractText, Text) == 0x000000, "Member 'BP_Portal_C_GetInteractText::Text' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.Init
// 0x0010 (0x0010 - 0x0000)
struct BP_Portal_C_Init final
{
public:
	bool                                          IsExteriorPortal_0;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Portal_C*                           LinkedPortal_0;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_Init) == 0x000008, "Wrong alignment on BP_Portal_C_Init");
static_assert(sizeof(BP_Portal_C_Init) == 0x000010, "Wrong size on BP_Portal_C_Init");
static_assert(offsetof(BP_Portal_C_Init, IsExteriorPortal_0) == 0x000000, "Member 'BP_Portal_C_Init::IsExteriorPortal_0' has a wrong offset!");
static_assert(offsetof(BP_Portal_C_Init, LinkedPortal_0) == 0x000008, "Member 'BP_Portal_C_Init::LinkedPortal_0' has a wrong offset!");

// Function BP_Portal.BP_Portal_C.Interact
// 0x0008 (0x0008 - 0x0000)
struct BP_Portal_C_Interact final
{
public:
	class ABP_UPPlayerCharacter_C*                Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Portal_C_Interact) == 0x000008, "Wrong alignment on BP_Portal_C_Interact");
static_assert(sizeof(BP_Portal_C_Interact) == 0x000008, "Wrong size on BP_Portal_C_Interact");
static_assert(offsetof(BP_Portal_C_Interact, Player) == 0x000000, "Member 'BP_Portal_C_Interact::Player' has a wrong offset!");

}

