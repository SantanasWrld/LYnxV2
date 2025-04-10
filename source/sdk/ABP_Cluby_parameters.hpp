﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Cluby

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Cluby.ABP_Cluby_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Cluby_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Cluby_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Cluby_C_AnimGraph");
static_assert(sizeof(ABP_Cluby_C_AnimGraph) == 0x000010, "Wrong size on ABP_Cluby_C_AnimGraph");
static_assert(offsetof(ABP_Cluby_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_Cluby_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_Cluby.ABP_Cluby_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Cluby_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Cluby_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Cluby_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Cluby_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Cluby_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Cluby_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Cluby_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Cluby.ABP_Cluby_C.ExecuteUbergraph_ABP_Cluby
// 0x0048 (0x0048 - 0x0000)
struct ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Cluby_C*                            K2Node_DynamicCast_AsBP_Cluby;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby) == 0x000008, "Wrong alignment on ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby");
static_assert(sizeof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby) == 0x000048, "Wrong size on ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, EntryPoint) == 0x000000, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, K2Node_DynamicCast_AsBP_Cluby) == 0x000010, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::K2Node_DynamicCast_AsBP_Cluby' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, K2Node_Event_DeltaTimeX) == 0x00001C, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, CallFunc_GetVelocity_ReturnValue) == 0x000028, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby, CallFunc_VSize_ReturnValue) == 0x000040, "Member 'ABP_Cluby_C_ExecuteUbergraph_ABP_Cluby::CallFunc_VSize_ReturnValue' has a wrong offset!");

}

