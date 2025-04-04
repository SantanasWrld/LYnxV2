﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Tormentor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Tormentor.ABP_Tormentor_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Tormentor_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Tormentor_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Tormentor_C_AnimGraph");
static_assert(sizeof(ABP_Tormentor_C_AnimGraph) == 0x000010, "Wrong size on ABP_Tormentor_C_AnimGraph");
static_assert(offsetof(ABP_Tormentor_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_Tormentor_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_Tormentor.ABP_Tormentor_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Tormentor_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Tormentor_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Tormentor_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Tormentor_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Tormentor_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Tormentor_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Tormentor_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Tormentor.ABP_Tormentor_C.ExecuteUbergraph_ABP_Tormentor
// 0x0088 (0x0088 - 0x0000)
struct ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Tormentor_C*                        K2Node_DynamicCast_AsBP_Tormentor;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_RightSpeed_ImplicitCast;        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ForwardSpeed_ImplicitCast;      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor) == 0x000008, "Wrong alignment on ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor");
static_assert(sizeof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor) == 0x000088, "Wrong size on ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, EntryPoint) == 0x000000, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, K2Node_DynamicCast_AsBP_Tormentor) == 0x000010, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::K2Node_DynamicCast_AsBP_Tormentor' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_GetActorRightVector_ReturnValue) == 0x000020, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_GetActorForwardVector_ReturnValue) == 0x000038, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_GetVelocity_ReturnValue) == 0x000050, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_Dot_VectorVector_ReturnValue) == 0x000068, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000070, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_Not_PreBool_ReturnValue) == 0x000078, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_BooleanAND_ReturnValue) == 0x000079, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, CallFunc_IsValid_ReturnValue_2) == 0x00007A, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, K2Node_VariableSet_RightSpeed_ImplicitCast) == 0x00007C, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::K2Node_VariableSet_RightSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor, K2Node_VariableSet_ForwardSpeed_ImplicitCast) == 0x000080, "Member 'ABP_Tormentor_C_ExecuteUbergraph_ABP_Tormentor::K2Node_VariableSet_ForwardSpeed_ImplicitCast' has a wrong offset!");

}

