﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReplicatedCapture

#include "Basic.hpp"

#include "UE5Coro_structs.hpp"


namespace SDK::Params
{

// Function BP_ReplicatedCapture.BP_ReplicatedCapture_C.ExecuteUbergraph_BP_ReplicatedCapture
// 0x0058 (0x0058 - 0x0000)
struct BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 K2Node_CustomEvent_CompressedData;                 // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_CreateTextureFromJPEGAsync_OutTexture;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAsyncCoroutine                        CallFunc_CreateTextureFromJPEGAsync_ReturnValue;   // 0x0028(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UPGameInstance_C*                   K2Node_DynamicCast_AsBP_UPGame_Instance;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_CaptureId;                      // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture) == 0x000008, "Wrong alignment on BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture");
static_assert(sizeof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture) == 0x000058, "Wrong size on BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, EntryPoint) == 0x000000, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, K2Node_CustomEvent_CompressedData) == 0x000008, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::K2Node_CustomEvent_CompressedData' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000019, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_CreateTextureFromJPEGAsync_OutTexture) == 0x000020, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_CreateTextureFromJPEGAsync_OutTexture' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_CreateTextureFromJPEGAsync_ReturnValue) == 0x000028, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_CreateTextureFromJPEGAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, K2Node_DynamicCast_AsBP_UPGame_Instance) == 0x000048, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::K2Node_DynamicCast_AsBP_UPGame_Instance' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture, K2Node_CustomEvent_CaptureId) == 0x000054, "Member 'BP_ReplicatedCapture_C_ExecuteUbergraph_BP_ReplicatedCapture::K2Node_CustomEvent_CaptureId' has a wrong offset!");

// Function BP_ReplicatedCapture.BP_ReplicatedCapture_C.SetCaptureId
// 0x0004 (0x0004 - 0x0000)
struct BP_ReplicatedCapture_C_SetCaptureId final
{
public:
	int32                                         CaptureId_0;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReplicatedCapture_C_SetCaptureId) == 0x000004, "Wrong alignment on BP_ReplicatedCapture_C_SetCaptureId");
static_assert(sizeof(BP_ReplicatedCapture_C_SetCaptureId) == 0x000004, "Wrong size on BP_ReplicatedCapture_C_SetCaptureId");
static_assert(offsetof(BP_ReplicatedCapture_C_SetCaptureId, CaptureId_0) == 0x000000, "Member 'BP_ReplicatedCapture_C_SetCaptureId::CaptureId_0' has a wrong offset!");

// Function BP_ReplicatedCapture.BP_ReplicatedCapture_C.SetCompressedData
// 0x0010 (0x0010 - 0x0000)
struct BP_ReplicatedCapture_C_SetCompressedData final
{
public:
	TArray<uint8>                                 CompressedData_0;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ReplicatedCapture_C_SetCompressedData) == 0x000008, "Wrong alignment on BP_ReplicatedCapture_C_SetCompressedData");
static_assert(sizeof(BP_ReplicatedCapture_C_SetCompressedData) == 0x000010, "Wrong size on BP_ReplicatedCapture_C_SetCompressedData");
static_assert(offsetof(BP_ReplicatedCapture_C_SetCompressedData, CompressedData_0) == 0x000000, "Member 'BP_ReplicatedCapture_C_SetCompressedData::CompressedData_0' has a wrong offset!");

}

