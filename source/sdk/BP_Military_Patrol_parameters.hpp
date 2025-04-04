﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Military_Patrol

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Military_Patrol.BP_Military_Patrol_C.ExecuteUbergraph_BP_Military_Patrol
// 0x0160 (0x0160 - 0x0000)
struct BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Military_Captain_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Military_Soldier_C*                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Military_Soldier_C*                 CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol) == 0x000010, "Wrong alignment on BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol");
static_assert(sizeof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol) == 0x000160, "Wrong size on BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, EntryPoint) == 0x000000, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000070, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D0, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000D8, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E0, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000E8, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_K2_GetComponentToWorld_ReturnValue_2) == 0x0000F0, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_K2_GetComponentToWorld_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000150, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000158, "Member 'BP_Military_Patrol_C_ExecuteUbergraph_BP_Military_Patrol::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");

}

