﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CameroidCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CameroidCapture.W_CameroidCapture_C
// 0x0040 (0x0300 - 0x02C0)
class UW_CameroidCapture_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CaptureAnimation;                                  // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_InputKey_C*                          CaptureInputKey;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         InputActions;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputKey_C*                          SelfieInputKey;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputKey_C*                          ZoomInInputKey;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputKey_C*                          ZoomOutInputKey;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Cameroid_C*                         Cameroid;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CaptureImageFeedback(class ABP_Cameroid_C* Cameroid_0);
	void Destruct();
	void ExecuteUbergraph_W_CameroidCapture(int32 EntryPoint);
	void GetCaptureViewportSize(class UBP_UPGameViewportClient_C* ViewportClient, double* OriginX, double* OriginY, double* SizeX, double* SizeY);
	void Init(class ABP_Cameroid_C* Cameroid_0);
	void SelfieModeChanged(class ABP_Cameroid_C* Cameroid_0);
	void SetHudVisibility(bool Visible);
	void SetInputKeys();
	void UpdateZoomInputs();
	void VisibilityChanged(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CameroidCapture_C">();
	}
	static class UW_CameroidCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CameroidCapture_C>();
	}
};
static_assert(alignof(UW_CameroidCapture_C) == 0x000008, "Wrong alignment on UW_CameroidCapture_C");
static_assert(sizeof(UW_CameroidCapture_C) == 0x000300, "Wrong size on UW_CameroidCapture_C");
static_assert(offsetof(UW_CameroidCapture_C, UberGraphFrame) == 0x0002C0, "Member 'UW_CameroidCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, CaptureAnimation) == 0x0002C8, "Member 'UW_CameroidCapture_C::CaptureAnimation' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, CaptureInputKey) == 0x0002D0, "Member 'UW_CameroidCapture_C::CaptureInputKey' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, InputActions) == 0x0002D8, "Member 'UW_CameroidCapture_C::InputActions' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, SelfieInputKey) == 0x0002E0, "Member 'UW_CameroidCapture_C::SelfieInputKey' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, ZoomInInputKey) == 0x0002E8, "Member 'UW_CameroidCapture_C::ZoomInInputKey' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, ZoomOutInputKey) == 0x0002F0, "Member 'UW_CameroidCapture_C::ZoomOutInputKey' has a wrong offset!");
static_assert(offsetof(UW_CameroidCapture_C, Cameroid) == 0x0002F8, "Member 'UW_CameroidCapture_C::Cameroid' has a wrong offset!");

}

