﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_InventoryItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_InventoryItem_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_InventoryItem.W_InventoryItem_C
// 0x00A8 (0x0368 - 0x02C0)
class UW_InventoryItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Focus;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_InventoryItem                       ItemInfo;                                          // 0x02E8(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InventoryItem_C*                    Item;                                              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasProgress;                                       // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_InventoryItem(int32 EntryPoint);
	void GetProgress(double* Progress);
	void InitProgressBar();
	void SetItem(const struct FS_InventoryItem& ItemInfo_0, class ABP_InventoryItem_C* Item_0);
	void SetProgressBar(double Progress);
	void SetSelected(bool IsSelected_0);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateTexture();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_InventoryItem_C">();
	}
	static class UW_InventoryItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_InventoryItem_C>();
	}
};
static_assert(alignof(UW_InventoryItem_C) == 0x000008, "Wrong alignment on UW_InventoryItem_C");
static_assert(sizeof(UW_InventoryItem_C) == 0x000368, "Wrong size on UW_InventoryItem_C");
static_assert(offsetof(UW_InventoryItem_C, UberGraphFrame) == 0x0002C0, "Member 'UW_InventoryItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, Focus) == 0x0002C8, "Member 'UW_InventoryItem_C::Focus' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, Border) == 0x0002D0, "Member 'UW_InventoryItem_C::Border' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, ItemIcon) == 0x0002D8, "Member 'UW_InventoryItem_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, ProgressBar) == 0x0002E0, "Member 'UW_InventoryItem_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, ItemInfo) == 0x0002E8, "Member 'UW_InventoryItem_C::ItemInfo' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, IsSelected) == 0x000350, "Member 'UW_InventoryItem_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, Item) == 0x000358, "Member 'UW_InventoryItem_C::Item' has a wrong offset!");
static_assert(offsetof(UW_InventoryItem_C, HasProgress) == 0x000360, "Member 'UW_InventoryItem_C::HasProgress' has a wrong offset!");

}

