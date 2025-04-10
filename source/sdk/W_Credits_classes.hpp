﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Credits

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Credits.W_Credits_C
// 0x0038 (0x02F8 - 0x02C0)
class UW_Credits_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                BackBtn;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BackTo;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BlackBackground;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_460;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SessionsPanel;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_C*                          MainMenu;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_Credits_BackTo_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_Credits_BlackBackground_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_W_Credits(int32 EntryPoint);
	void MainMenuDisplayed();
	void TabDisplayed();
	void TabFocus();
	void TabHidden();
	void TabInit(class UW_MainMenu_C* MainMenu_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Credits_C">();
	}
	static class UW_Credits_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Credits_C>();
	}
};
static_assert(alignof(UW_Credits_C) == 0x000008, "Wrong alignment on UW_Credits_C");
static_assert(sizeof(UW_Credits_C) == 0x0002F8, "Wrong size on UW_Credits_C");
static_assert(offsetof(UW_Credits_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Credits_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Credits_C, BackBtn) == 0x0002C8, "Member 'UW_Credits_C::BackBtn' has a wrong offset!");
static_assert(offsetof(UW_Credits_C, BackTo) == 0x0002D0, "Member 'UW_Credits_C::BackTo' has a wrong offset!");
static_assert(offsetof(UW_Credits_C, BlackBackground) == 0x0002D8, "Member 'UW_Credits_C::BlackBackground' has a wrong offset!");
static_assert(offsetof(UW_Credits_C, Image_460) == 0x0002E0, "Member 'UW_Credits_C::Image_460' has a wrong offset!");
static_assert(offsetof(UW_Credits_C, SessionsPanel) == 0x0002E8, "Member 'UW_Credits_C::SessionsPanel' has a wrong offset!");
static_assert(offsetof(UW_Credits_C, MainMenu) == 0x0002F0, "Member 'UW_Credits_C::MainMenu' has a wrong offset!");

}

