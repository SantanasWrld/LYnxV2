﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NavigationPoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_NavigationPoint.BP_NavigationPoint_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct BP_NavigationPoint_C_UserConstructionScript final
{
public:
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationPoint_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_NavigationPoint_C_UserConstructionScript");
static_assert(sizeof(BP_NavigationPoint_C_UserConstructionScript) == 0x000028, "Wrong size on BP_NavigationPoint_C_UserConstructionScript");
static_assert(offsetof(BP_NavigationPoint_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_NavigationPoint_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationPoint_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'BP_NavigationPoint_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationPoint_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BP_NavigationPoint_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_NavigationPoint.BP_NavigationPoint_C.ExecuteUbergraph_BP_NavigationPoint
// 0x0028 (0x0028 - 0x0000)
struct BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_InteriorVolume_C*                   CallFunc_GetInteriorVolume_InteriorVolume;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint) == 0x000008, "Wrong alignment on BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint");
static_assert(sizeof(BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint) == 0x000028, "Wrong size on BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint");
static_assert(offsetof(BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint, EntryPoint) == 0x000000, "Member 'BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint, CallFunc_GetInteriorVolume_InteriorVolume) == 0x000020, "Member 'BP_NavigationPoint_C_ExecuteUbergraph_BP_NavigationPoint::CallFunc_GetInteriorVolume_InteriorVolume' has a wrong offset!");

}

