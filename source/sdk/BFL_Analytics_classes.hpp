﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Analytics

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_Analytics.BFL_Analytics_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_Analytics_C final : public UBlueprintFunctionLibrary
{
public:
	void AddEventProperties(const struct FBlueprintJsonObject& InEvent, const TMap<class FString, struct FBlueprintJsonValue>& properties, class UObject* __WorldContext, struct FBlueprintJsonObject* OutEvent);
	void MakeAnalyticsBody(const class FString& ApiKey, class UObject* __WorldContext, struct FBlueprintJsonObject* Body);
	void MakeAnalyticsEvent(const class FString& UserId, const class FString& EventName, int32 SessionID, class UObject* __WorldContext, struct FBlueprintJsonObject* Event);
	void MakeIntEventProperty(const class FString& Key, int32 Value, class UObject* __WorldContext, TMap<class FString, struct FBlueprintJsonValue>* properties);
	void MakeStringEventProperty(const class FString& Key, const class FString& Value, class UObject* __WorldContext, TMap<class FString, struct FBlueprintJsonValue>* properties);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_Analytics_C">();
	}
	static class UBFL_Analytics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_Analytics_C>();
	}
};
static_assert(alignof(UBFL_Analytics_C) == 0x000008, "Wrong alignment on UBFL_Analytics_C");
static_assert(sizeof(UBFL_Analytics_C) == 0x000028, "Wrong size on UBFL_Analytics_C");

}

