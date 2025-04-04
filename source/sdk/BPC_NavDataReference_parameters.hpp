﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_NavDataReference

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPC_NavDataReference.BPC_NavDataReference_C.ExecuteUbergraph_BPC_NavDataReference
// 0x0070 (0x0070 - 0x0000)
struct BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_DynamicCast_AsController;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterMovementComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAgentName_AgentName;                   // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ARecastNavMesh*                         CallFunc_FindNavData_NavData;                      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetAgentName_AgentRadius_ImplicitCast;    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference) == 0x000008, "Wrong alignment on BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference");
static_assert(sizeof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference) == 0x000070, "Wrong size on BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, EntryPoint) == 0x000000, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, K2Node_DynamicCast_AsController) == 0x000020, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::K2Node_DynamicCast_AsController' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_GetAgentName_AgentName) == 0x000050, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_GetAgentName_AgentName' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_FindNavData_NavData) == 0x000060, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_FindNavData_NavData' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference, CallFunc_GetAgentName_AgentRadius_ImplicitCast) == 0x000068, "Member 'BPC_NavDataReference_C_ExecuteUbergraph_BPC_NavDataReference::CallFunc_GetAgentName_AgentRadius_ImplicitCast' has a wrong offset!");

// Function BPC_NavDataReference.BPC_NavDataReference_C.FindNavData
// 0x0068 (0x0068 - 0x0000)
struct BPC_NavDataReference_C_FindNavData final
{
public:
	class FString                                 AgentName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ARecastNavMesh*                         NavData_0;                                         // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ARecastNavMesh*>                 CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARecastNavMesh*                         CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_NavDataReference_C_FindNavData) == 0x000008, "Wrong alignment on BPC_NavDataReference_C_FindNavData");
static_assert(sizeof(BPC_NavDataReference_C_FindNavData) == 0x000068, "Wrong size on BPC_NavDataReference_C_FindNavData");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, AgentName) == 0x000000, "Member 'BPC_NavDataReference_C_FindNavData::AgentName' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, NavData_0) == 0x000010, "Member 'BPC_NavDataReference_C_FindNavData::NavData_0' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPC_NavDataReference_C_FindNavData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BPC_NavDataReference_C_FindNavData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_Array_Get_Item) == 0x000040, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_GetObjectName_ReturnValue) == 0x000050, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_FindNavData, CallFunc_Contains_ReturnValue) == 0x000060, "Member 'BPC_NavDataReference_C_FindNavData::CallFunc_Contains_ReturnValue' has a wrong offset!");

// Function BPC_NavDataReference.BPC_NavDataReference_C.GetAgentName
// 0x0020 (0x0020 - 0x0000)
struct BPC_NavDataReference_C_GetAgentName final
{
public:
	double                                        AgentRadius;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 AgentName;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_NavDataReference_C_GetAgentName) == 0x000008, "Wrong alignment on BPC_NavDataReference_C_GetAgentName");
static_assert(sizeof(BPC_NavDataReference_C_GetAgentName) == 0x000020, "Wrong size on BPC_NavDataReference_C_GetAgentName");
static_assert(offsetof(BPC_NavDataReference_C_GetAgentName, AgentRadius) == 0x000000, "Member 'BPC_NavDataReference_C_GetAgentName::AgentRadius' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_GetAgentName, AgentName) == 0x000008, "Member 'BPC_NavDataReference_C_GetAgentName::AgentName' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_GetAgentName, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000018, "Member 'BPC_NavDataReference_C_GetAgentName::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_NavDataReference_C_GetAgentName, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000019, "Member 'BPC_NavDataReference_C_GetAgentName::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");

}

