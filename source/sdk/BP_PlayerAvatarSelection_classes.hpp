﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerAvatarSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_InteractableActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerAvatarSelection.BP_PlayerAvatarSelection_C
// 0x0010 (0x02F0 - 0x02E0)
class ABP_PlayerAvatarSelection_C final : public ABP_InteractableActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerAvatarSelection_C;         // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void InteractionStarted();
	void Interact(class ABP_UPPlayerCharacter_C* Player);
	void ExecuteUbergraph_BP_PlayerAvatarSelection(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerAvatarSelection_C">();
	}
	static class ABP_PlayerAvatarSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerAvatarSelection_C>();
	}
};
static_assert(alignof(ABP_PlayerAvatarSelection_C) == 0x000008, "Wrong alignment on ABP_PlayerAvatarSelection_C");
static_assert(sizeof(ABP_PlayerAvatarSelection_C) == 0x0002F0, "Wrong size on ABP_PlayerAvatarSelection_C");
static_assert(offsetof(ABP_PlayerAvatarSelection_C, UberGraphFrame_BP_PlayerAvatarSelection_C) == 0x0002E0, "Member 'ABP_PlayerAvatarSelection_C::UberGraphFrame_BP_PlayerAvatarSelection_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAvatarSelection_C, StaticMesh) == 0x0002E8, "Member 'ABP_PlayerAvatarSelection_C::StaticMesh' has a wrong offset!");

}

