﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CameroidGallery

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CameroidGallery.W_CameroidGallery_C
// 0x0068 (0x0328 - 0x02C0)
class UW_CameroidGallery_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                BackBtn;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BackgroundButton;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CapturesHBox;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                DownloadBtn;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CameroidGalleryElement_C*            SelectedCapture;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectionHBox;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ResultSelectionDetails_C*            W_ResultSelectionDetails;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_CameroidGalleryElement_C*>    CapturesWidgets;                                   // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBP_UPGameInstance_C*                   GameInstance;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Cameroid_C*                         Cameroid;                                          // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_UPPlayerController_C*               PlayerController;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_CameroidGallery_BackBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_CameroidGallery_BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_CameroidGallery_DownloadBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ElementClicked(class UW_CameroidGalleryElement_C* GalleryElement);
	void ExecuteUbergraph_W_CameroidGallery(int32 EntryPoint);
	void InitGallery(class ABP_Cameroid_C* Cameroid_0);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void SelectLastCapture();
	void UpdateCaptures();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CameroidGallery_C">();
	}
	static class UW_CameroidGallery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CameroidGallery_C>();
	}
};
static_assert(alignof(UW_CameroidGallery_C) == 0x000008, "Wrong alignment on UW_CameroidGallery_C");
static_assert(sizeof(UW_CameroidGallery_C) == 0x000328, "Wrong size on UW_CameroidGallery_C");
static_assert(offsetof(UW_CameroidGallery_C, UberGraphFrame) == 0x0002C0, "Member 'UW_CameroidGallery_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, BackBtn) == 0x0002C8, "Member 'UW_CameroidGallery_C::BackBtn' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, BackgroundButton) == 0x0002D0, "Member 'UW_CameroidGallery_C::BackgroundButton' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, CapturesHBox) == 0x0002D8, "Member 'UW_CameroidGallery_C::CapturesHBox' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, DownloadBtn) == 0x0002E0, "Member 'UW_CameroidGallery_C::DownloadBtn' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, SelectedCapture) == 0x0002E8, "Member 'UW_CameroidGallery_C::SelectedCapture' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, SelectionHBox) == 0x0002F0, "Member 'UW_CameroidGallery_C::SelectionHBox' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, W_ResultSelectionDetails) == 0x0002F8, "Member 'UW_CameroidGallery_C::W_ResultSelectionDetails' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, CapturesWidgets) == 0x000300, "Member 'UW_CameroidGallery_C::CapturesWidgets' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, GameInstance) == 0x000310, "Member 'UW_CameroidGallery_C::GameInstance' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, Cameroid) == 0x000318, "Member 'UW_CameroidGallery_C::Cameroid' has a wrong offset!");
static_assert(offsetof(UW_CameroidGallery_C, PlayerController) == 0x000320, "Member 'UW_CameroidGallery_C::PlayerController' has a wrong offset!");

}

