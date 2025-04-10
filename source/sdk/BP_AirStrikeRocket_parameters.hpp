﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AirStrikeRocket

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AirStrikeRocket.BP_AirStrikeRocket_C.ExecuteUbergraph_BP_AirStrikeRocket
// 0x0260 (0x0260 - 0x0000)
struct BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0098(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0x4];                                      // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x0258(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket) == 0x000008, "Wrong alignment on BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket");
static_assert(sizeof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket) == 0x000260, "Wrong size on BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, EntryPoint) == 0x000000, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, Temp_object_Variable) == 0x000008, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_GetActorForwardVector_ReturnValue) == 0x000030, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000048, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000060, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, K2Node_Event_EndPlayReason) == 0x000078, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_Add_VectorVector_ReturnValue) == 0x000080, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_LineTraceSingle_OutHit) == 0x000098, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_LineTraceSingle_ReturnValue) == 0x000180, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_IsValid_ReturnValue) == 0x000181, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_bBlockingHit) == 0x000182, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_bInitialOverlap) == 0x000183, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_Time) == 0x000184, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_Distance) == 0x000188, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_Location) == 0x000190, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A8, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_Normal) == 0x0001C0, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_ImpactNormal) == 0x0001D8, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_PhysMat) == 0x0001F0, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_HitActor) == 0x0001F8, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_HitComponent) == 0x000200, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_HitBoneName) == 0x000208, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_BoneName) == 0x000210, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_HitItem) == 0x000218, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_ElementIndex) == 0x00021C, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_FaceIndex) == 0x000220, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_TraceStart) == 0x000228, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_BreakHitResult_TraceEnd) == 0x000240, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x000258, "Member 'BP_AirStrikeRocket_C_ExecuteUbergraph_BP_AirStrikeRocket::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");

// Function BP_AirStrikeRocket.BP_AirStrikeRocket_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_AirStrikeRocket_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AirStrikeRocket_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_AirStrikeRocket_C_ReceiveEndPlay");
static_assert(sizeof(BP_AirStrikeRocket_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_AirStrikeRocket_C_ReceiveEndPlay");
static_assert(offsetof(BP_AirStrikeRocket_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_AirStrikeRocket_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

