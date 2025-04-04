﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Restful

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class Restful.RestfulFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class URestfulFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SendRestfulRequest(class UObject* WorldContextObject, bool* Success, const class FString& URL, const class FString& verb, const class FString& Content, const TMap<class FString, class FString>& headers, float Timeout, int32* ResponseCode, class FString* Data, TMap<class FString, class FString>* responseHeaders, const struct FLatentActionInfo& LatentInfo);
	static void SendRestfulWithFileRequest(class UObject* WorldContextObject, bool* Success, const class FString& URL, const class FString& verb, const class FString& Filename, const TMap<class FString, class FString>& headers, float Timeout, int32* ResponseCode, class FString* Data, TMap<class FString, class FString>* responseHeaders, const struct FLatentActionInfo& LatentInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RestfulFunctionLibrary">();
	}
	static class URestfulFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestfulFunctionLibrary>();
	}
};
static_assert(alignof(URestfulFunctionLibrary) == 0x000008, "Wrong alignment on URestfulFunctionLibrary");
static_assert(sizeof(URestfulFunctionLibrary) == 0x000028, "Wrong size on URestfulFunctionLibrary");

}

