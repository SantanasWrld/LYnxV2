﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_ParentEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_ParentEnemy.BPC_ParentEnemy_C
// 0x0028 (0x03E8 - 0x03C0)
class ABPC_ParentEnemy_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPC_NavDataReference_C*                AINavDataReference;                                // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_AIOptimizer_C*                     AIOptimizer;                                       // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          BehaviorTree;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BPC_ParentEnemy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_ParentEnemy_C">();
	}
	static class ABPC_ParentEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPC_ParentEnemy_C>();
	}
};
static_assert(alignof(ABPC_ParentEnemy_C) == 0x000008, "Wrong alignment on ABPC_ParentEnemy_C");
static_assert(sizeof(ABPC_ParentEnemy_C) == 0x0003E8, "Wrong size on ABPC_ParentEnemy_C");
static_assert(offsetof(ABPC_ParentEnemy_C, UberGraphFrame) == 0x0003C0, "Member 'ABPC_ParentEnemy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABPC_ParentEnemy_C, AINavDataReference) == 0x0003C8, "Member 'ABPC_ParentEnemy_C::AINavDataReference' has a wrong offset!");
static_assert(offsetof(ABPC_ParentEnemy_C, AIOptimizer) == 0x0003D0, "Member 'ABPC_ParentEnemy_C::AIOptimizer' has a wrong offset!");
static_assert(offsetof(ABPC_ParentEnemy_C, AIPerception) == 0x0003D8, "Member 'ABPC_ParentEnemy_C::AIPerception' has a wrong offset!");
static_assert(offsetof(ABPC_ParentEnemy_C, BehaviorTree) == 0x0003E0, "Member 'ABPC_ParentEnemy_C::BehaviorTree' has a wrong offset!");

}

