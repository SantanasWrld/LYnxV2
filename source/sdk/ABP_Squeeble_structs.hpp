﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Squeeble

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Squeeble.ABP_Squeeble_C.AnimBlueprintGeneratedConstantData
// 0x012F (0x0130 - 0x0001)
struct ABP_Squeeble::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_69;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_70;                                // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_71;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_72;                                  // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_73;                               // 0x001C(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_74;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_75;                                  // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_76;                                // 0x0054(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_77;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_78;                                // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_79;                                 // 0x0060(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_80;                                 // 0x0061(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_81;                                 // 0x0062(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63[0x1];                                       // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_82;                                 // 0x0064(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_83;                                 // 0x006C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_84;                                  // 0x0074(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_85;                               // 0x0078(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0098(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0118(0x0018)()
};
static_assert(alignof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Squeeble::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on ABP_Squeeble::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __NameProperty_69) == 0x000004, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__NameProperty_69' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __FloatProperty_70) == 0x00000C, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__FloatProperty_70' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __NameProperty_71) == 0x000010, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__NameProperty_71' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __IntProperty_72) == 0x000018, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__IntProperty_72' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __StructProperty_73) == 0x00001C, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__StructProperty_73' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __NameProperty_74) == 0x000048, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__NameProperty_74' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __IntProperty_75) == 0x000050, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__IntProperty_75' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __FloatProperty_76) == 0x000054, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__FloatProperty_76' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __BoolProperty_77) == 0x000058, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__BoolProperty_77' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __FloatProperty_78) == 0x00005C, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__FloatProperty_78' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __BoolProperty_79) == 0x000060, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__BoolProperty_79' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __EnumProperty_80) == 0x000061, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__EnumProperty_80' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __ByteProperty_81) == 0x000062, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__ByteProperty_81' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __NameProperty_82) == 0x000064, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__NameProperty_82' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __NameProperty_83) == 0x00006C, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__NameProperty_83' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __IntProperty_84) == 0x000074, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__IntProperty_84' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, __StructProperty_85) == 0x000078, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::__StructProperty_85' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000098, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Squeeble.ABP_Squeeble_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ABP_Squeeble::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Squeeble::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_Squeeble::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Squeeble::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ABP_Squeeble::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_Squeeble::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'ABP_Squeeble::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");

}

