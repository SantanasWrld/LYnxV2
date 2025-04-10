﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResultNextPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_InteractableActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ResultNextPage.BP_ResultNextPage_C
// 0x0028 (0x0308 - 0x02E0)
class ABP_ResultNextPage_C final : public ABP_InteractableActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ResultNextPage_C;                // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   BlackButton;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WhiteBackground;                                   // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_ResultTV_C*                         ResultTV;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ResultNextPage(int32 EntryPoint);
	void Interact(class ABP_UPPlayerCharacter_C* Player);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ResultNextPage_C">();
	}
	static class ABP_ResultNextPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ResultNextPage_C>();
	}
};
static_assert(alignof(ABP_ResultNextPage_C) == 0x000008, "Wrong alignment on ABP_ResultNextPage_C");
static_assert(sizeof(ABP_ResultNextPage_C) == 0x000308, "Wrong size on ABP_ResultNextPage_C");
static_assert(offsetof(ABP_ResultNextPage_C, UberGraphFrame_BP_ResultNextPage_C) == 0x0002E0, "Member 'ABP_ResultNextPage_C::UberGraphFrame_BP_ResultNextPage_C' has a wrong offset!");
static_assert(offsetof(ABP_ResultNextPage_C, BlackButton) == 0x0002E8, "Member 'ABP_ResultNextPage_C::BlackButton' has a wrong offset!");
static_assert(offsetof(ABP_ResultNextPage_C, TextRender) == 0x0002F0, "Member 'ABP_ResultNextPage_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_ResultNextPage_C, WhiteBackground) == 0x0002F8, "Member 'ABP_ResultNextPage_C::WhiteBackground' has a wrong offset!");
static_assert(offsetof(ABP_ResultNextPage_C, ResultTV) == 0x000300, "Member 'ABP_ResultNextPage_C::ResultTV' has a wrong offset!");

}

