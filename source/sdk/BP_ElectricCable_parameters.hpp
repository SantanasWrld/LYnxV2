﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ElectricCable

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ElectricCable.BP_ElectricCable_C.BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_ElectricCable_C_BndEvt__StringTrap_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_ElectricCable.BP_ElectricCable_C.ExecuteUbergraph_BP_ElectricCable
// 0x06D0 (0x06D0 - 0x0000)
struct BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0030(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Killable_C>       K2Node_DynamicCast_AsBPI_Killable;                 // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_Dead;                              // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCloseToPlayers_CloseToPlayers;          // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x02D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x03D0(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x03E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C9[0x7];                                      // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x04D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EA[0x2];                                      // 0x04EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F4[0x4];                                      // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x04F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0510(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0528(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0540(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0558(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0560(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0568(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C[0x4];                                      // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0590(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x05A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x05C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x05E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast; // 0x06C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x06CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable) == 0x000008, "Wrong alignment on BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable");
static_assert(sizeof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable) == 0x0006D0, "Wrong size on BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, EntryPoint) == 0x000000, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000010, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_ComponentBoundEvent_OtherActor) == 0x000018, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_ComponentBoundEvent_OtherComp) == 0x000020, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000028, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_ComponentBoundEvent_bFromSweep) == 0x00002C, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_ComponentBoundEvent_SweepResult) == 0x000030, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_HasAuthority_ReturnValue) == 0x000118, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_DynamicCast_AsBPI_Killable) == 0x000120, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_DynamicCast_AsBPI_Killable' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_IsDead_Dead) == 0x000131, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_IsDead_Dead' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_IsCloseToPlayers_CloseToPlayers) == 0x000132, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_IsCloseToPlayers_CloseToPlayers' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_HasAuthority_ReturnValue_1) == 0x000133, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000138, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000150, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000238, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakVector_X) == 0x000240, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakVector_Y) == 0x000248, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakVector_Z) == 0x000250, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000258, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000260, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_MakeVector_ReturnValue) == 0x000268, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_MakeVector_ReturnValue_1) == 0x000280, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000298, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_MakeVector_ReturnValue_2) == 0x0002A0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0002B8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0002D0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_Add_VectorVector_ReturnValue) == 0x0003B8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, Temp_object_Variable) == 0x0003D0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_LineTraceSingle_OutHit) == 0x0003E0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_LineTraceSingle_ReturnValue) == 0x0004C8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x0004D0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_bBlockingHit) == 0x0004E8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_bInitialOverlap) == 0x0004E9, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_Time) == 0x0004EC, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_Distance) == 0x0004F0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_Location) == 0x0004F8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_ImpactPoint) == 0x000510, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_Normal) == 0x000528, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_ImpactNormal) == 0x000540, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_PhysMat) == 0x000558, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_HitActor) == 0x000560, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_HitComponent) == 0x000568, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_HitBoneName) == 0x000570, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_BoneName) == 0x000578, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_HitItem) == 0x000580, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_ElementIndex) == 0x000584, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_FaceIndex) == 0x000588, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_TraceStart) == 0x000590, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_BreakHitResult_TraceEnd) == 0x0005A8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0005C0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0005D8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0005E0, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast) == 0x0006C8, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable, CallFunc_Delay_Duration_ImplicitCast) == 0x0006CC, "Member 'BP_ElectricCable_C_ExecuteUbergraph_BP_ElectricCable::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

