﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Analytics

#include "Basic.hpp"

#include "BlueprintJson_structs.hpp"


namespace SDK::Params
{

// Function BFL_Analytics.BFL_Analytics_C.AddEventProperties
// 0x0128 (0x0128 - 0x0000)
struct BFL_Analytics_C_AddEventProperties final
{
public:
	struct FBlueprintJsonObject                   InEvent;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<class FString, struct FBlueprintJsonValue> properties;                                      // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintJsonObject                   OutEvent;                                          // 0x0068(0x0010)(Parm, OutParm)
	struct FBlueprintJsonObject                   _Properties;                                       // 0x0078(0x0010)(Edit, BlueprintVisible)
	struct FBlueprintJsonObject                   _Event;                                            // 0x0088(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x00A0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlueprintJsonValue                    CallFunc_Map_Find_Value;                           // 0x00C8(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintJsonValue                    CallFunc_JsonMakeObject_ReturnValue;               // 0x00E0(0x0010)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintJsonObject                   CallFunc_JsonMake_ReturnValue;                     // 0x00F8(0x0010)()
	struct FBlueprintJsonObject                   CallFunc_JsonSetField_ReturnValue;                 // 0x0108(0x0010)(ConstParm)
	struct FBlueprintJsonObject                   CallFunc_JsonSetField_ReturnValue_1;               // 0x0118(0x0010)(ConstParm)
};
static_assert(alignof(BFL_Analytics_C_AddEventProperties) == 0x000008, "Wrong alignment on BFL_Analytics_C_AddEventProperties");
static_assert(sizeof(BFL_Analytics_C_AddEventProperties) == 0x000128, "Wrong size on BFL_Analytics_C_AddEventProperties");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, InEvent) == 0x000000, "Member 'BFL_Analytics_C_AddEventProperties::InEvent' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, properties) == 0x000010, "Member 'BFL_Analytics_C_AddEventProperties::properties' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, __WorldContext) == 0x000060, "Member 'BFL_Analytics_C_AddEventProperties::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, OutEvent) == 0x000068, "Member 'BFL_Analytics_C_AddEventProperties::OutEvent' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, _Properties) == 0x000078, "Member 'BFL_Analytics_C_AddEventProperties::_Properties' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, _Event) == 0x000088, "Member 'BFL_Analytics_C_AddEventProperties::_Event' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, Temp_int_Array_Index_Variable) == 0x000098, "Member 'BFL_Analytics_C_AddEventProperties::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Map_Keys_Keys) == 0x0000A0, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Map_Find_Value) == 0x0000C8, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, Temp_int_Loop_Counter_Variable) == 0x0000DC, "Member 'BFL_Analytics_C_AddEventProperties::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_JsonMakeObject_ReturnValue) == 0x0000E0, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_JsonMakeObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_JsonMake_ReturnValue) == 0x0000F8, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_JsonMake_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_JsonSetField_ReturnValue) == 0x000108, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_JsonSetField_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_AddEventProperties, CallFunc_JsonSetField_ReturnValue_1) == 0x000118, "Member 'BFL_Analytics_C_AddEventProperties::CallFunc_JsonSetField_ReturnValue_1' has a wrong offset!");

// Function BFL_Analytics.BFL_Analytics_C.MakeAnalyticsBody
// 0x0060 (0x0060 - 0x0000)
struct BFL_Analytics_C_MakeAnalyticsBody final
{
public:
	class FString                                 ApiKey;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintJsonObject                   Body;                                              // 0x0018(0x0010)(Parm, OutParm)
	class UOdinJsonObject*                        _Body;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintJsonObject                   CallFunc_JsonMake_ReturnValue;                     // 0x0030(0x0010)()
	struct FBlueprintJsonValue                    CallFunc_JsonMakeString_ReturnValue;               // 0x0040(0x0010)()
	struct FBlueprintJsonObject                   CallFunc_JsonMakeField_ReturnValue;                // 0x0050(0x0010)(ConstParm)
};
static_assert(alignof(BFL_Analytics_C_MakeAnalyticsBody) == 0x000008, "Wrong alignment on BFL_Analytics_C_MakeAnalyticsBody");
static_assert(sizeof(BFL_Analytics_C_MakeAnalyticsBody) == 0x000060, "Wrong size on BFL_Analytics_C_MakeAnalyticsBody");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, ApiKey) == 0x000000, "Member 'BFL_Analytics_C_MakeAnalyticsBody::ApiKey' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, __WorldContext) == 0x000010, "Member 'BFL_Analytics_C_MakeAnalyticsBody::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, Body) == 0x000018, "Member 'BFL_Analytics_C_MakeAnalyticsBody::Body' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, _Body) == 0x000028, "Member 'BFL_Analytics_C_MakeAnalyticsBody::_Body' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, CallFunc_JsonMake_ReturnValue) == 0x000030, "Member 'BFL_Analytics_C_MakeAnalyticsBody::CallFunc_JsonMake_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, CallFunc_JsonMakeString_ReturnValue) == 0x000040, "Member 'BFL_Analytics_C_MakeAnalyticsBody::CallFunc_JsonMakeString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsBody, CallFunc_JsonMakeField_ReturnValue) == 0x000050, "Member 'BFL_Analytics_C_MakeAnalyticsBody::CallFunc_JsonMakeField_ReturnValue' has a wrong offset!");

// Function BFL_Analytics.BFL_Analytics_C.MakeAnalyticsEvent
// 0x00F0 (0x00F0 - 0x0000)
struct BFL_Analytics_C_MakeAnalyticsEvent final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         SessionID;                                         // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintJsonObject                   Event;                                             // 0x0030(0x0010)(Parm, OutParm)
	struct FBlueprintJsonObject                   _Event;                                            // 0x0040(0x0010)(Edit, BlueprintVisible)
	struct FBlueprintJsonValue                    CallFunc_JsonMakeInt_ReturnValue;                  // 0x0050(0x0010)()
	struct FBlueprintJsonValue                    CallFunc_JsonMakeString_ReturnValue;               // 0x0060(0x0010)()
	struct FBlueprintJsonValue                    CallFunc_JsonMakeString_ReturnValue_1;             // 0x0070(0x0010)()
	struct FBlueprintJsonObject                   CallFunc_JsonMakeField_ReturnValue;                // 0x0080(0x0010)(ConstParm)
	struct FBlueprintJsonObject                   CallFunc_JsonMake_ReturnValue;                     // 0x0090(0x0010)()
	struct FBlueprintJsonObject                   CallFunc_JsonMakeField_ReturnValue_1;              // 0x00A0(0x0010)(ConstParm)
	class FString                                 CallFunc_GetDeviceId_ReturnValue;                  // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FBlueprintJsonObject                   CallFunc_JsonMakeField_ReturnValue_2;              // 0x00C0(0x0010)(ConstParm)
	struct FBlueprintJsonValue                    CallFunc_JsonMakeString_ReturnValue_2;             // 0x00D0(0x0010)()
	struct FBlueprintJsonObject                   CallFunc_JsonMakeField_ReturnValue_3;              // 0x00E0(0x0010)(ConstParm)
};
static_assert(alignof(BFL_Analytics_C_MakeAnalyticsEvent) == 0x000008, "Wrong alignment on BFL_Analytics_C_MakeAnalyticsEvent");
static_assert(sizeof(BFL_Analytics_C_MakeAnalyticsEvent) == 0x0000F0, "Wrong size on BFL_Analytics_C_MakeAnalyticsEvent");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, UserId) == 0x000000, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::UserId' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, EventName) == 0x000010, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::EventName' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, SessionID) == 0x000020, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::SessionID' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, __WorldContext) == 0x000028, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, Event) == 0x000030, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::Event' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, _Event) == 0x000040, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::_Event' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeInt_ReturnValue) == 0x000050, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeString_ReturnValue) == 0x000060, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeString_ReturnValue_1) == 0x000070, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeField_ReturnValue) == 0x000080, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeField_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMake_ReturnValue) == 0x000090, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMake_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeField_ReturnValue_1) == 0x0000A0, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_GetDeviceId_ReturnValue) == 0x0000B0, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_GetDeviceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeField_ReturnValue_2) == 0x0000C0, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeField_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeString_ReturnValue_2) == 0x0000D0, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeAnalyticsEvent, CallFunc_JsonMakeField_ReturnValue_3) == 0x0000E0, "Member 'BFL_Analytics_C_MakeAnalyticsEvent::CallFunc_JsonMakeField_ReturnValue_3' has a wrong offset!");

// Function BFL_Analytics.BFL_Analytics_C.MakeIntEventProperty
// 0x00D0 (0x00D0 - 0x0000)
struct BFL_Analytics_C_MakeIntEventProperty final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FBlueprintJsonValue> properties;                                      // 0x0020(0x0050)(Parm, OutParm)
	struct FBlueprintJsonValue                    CallFunc_JsonMakeInt_ReturnValue;                  // 0x0070(0x0010)()
	TMap<class FString, struct FBlueprintJsonValue> K2Node_MakeMap_Map;                              // 0x0080(0x0050)()
};
static_assert(alignof(BFL_Analytics_C_MakeIntEventProperty) == 0x000008, "Wrong alignment on BFL_Analytics_C_MakeIntEventProperty");
static_assert(sizeof(BFL_Analytics_C_MakeIntEventProperty) == 0x0000D0, "Wrong size on BFL_Analytics_C_MakeIntEventProperty");
static_assert(offsetof(BFL_Analytics_C_MakeIntEventProperty, Key) == 0x000000, "Member 'BFL_Analytics_C_MakeIntEventProperty::Key' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeIntEventProperty, Value) == 0x000010, "Member 'BFL_Analytics_C_MakeIntEventProperty::Value' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeIntEventProperty, __WorldContext) == 0x000018, "Member 'BFL_Analytics_C_MakeIntEventProperty::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeIntEventProperty, properties) == 0x000020, "Member 'BFL_Analytics_C_MakeIntEventProperty::properties' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeIntEventProperty, CallFunc_JsonMakeInt_ReturnValue) == 0x000070, "Member 'BFL_Analytics_C_MakeIntEventProperty::CallFunc_JsonMakeInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeIntEventProperty, K2Node_MakeMap_Map) == 0x000080, "Member 'BFL_Analytics_C_MakeIntEventProperty::K2Node_MakeMap_Map' has a wrong offset!");

// Function BFL_Analytics.BFL_Analytics_C.MakeStringEventProperty
// 0x00D8 (0x00D8 - 0x0000)
struct BFL_Analytics_C_MakeStringEventProperty final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Value;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FBlueprintJsonValue> properties;                                      // 0x0028(0x0050)(Parm, OutParm)
	struct FBlueprintJsonValue                    CallFunc_JsonMakeString_ReturnValue;               // 0x0078(0x0010)()
	TMap<class FString, struct FBlueprintJsonValue> K2Node_MakeMap_Map;                              // 0x0088(0x0050)()
};
static_assert(alignof(BFL_Analytics_C_MakeStringEventProperty) == 0x000008, "Wrong alignment on BFL_Analytics_C_MakeStringEventProperty");
static_assert(sizeof(BFL_Analytics_C_MakeStringEventProperty) == 0x0000D8, "Wrong size on BFL_Analytics_C_MakeStringEventProperty");
static_assert(offsetof(BFL_Analytics_C_MakeStringEventProperty, Key) == 0x000000, "Member 'BFL_Analytics_C_MakeStringEventProperty::Key' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeStringEventProperty, Value) == 0x000010, "Member 'BFL_Analytics_C_MakeStringEventProperty::Value' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeStringEventProperty, __WorldContext) == 0x000020, "Member 'BFL_Analytics_C_MakeStringEventProperty::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeStringEventProperty, properties) == 0x000028, "Member 'BFL_Analytics_C_MakeStringEventProperty::properties' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeStringEventProperty, CallFunc_JsonMakeString_ReturnValue) == 0x000078, "Member 'BFL_Analytics_C_MakeStringEventProperty::CallFunc_JsonMakeString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Analytics_C_MakeStringEventProperty, K2Node_MakeMap_Map) == 0x000088, "Member 'BFL_Analytics_C_MakeStringEventProperty::K2Node_MakeMap_Map' has a wrong offset!");

}

