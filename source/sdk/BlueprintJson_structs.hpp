﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlueprintJson

#include "Basic.hpp"


namespace SDK
{

// Enum BlueprintJson.EJsonType
// NumValues: 0x0008
enum class EJsonType : uint8
{
	None                                     = 0,
	Null                                     = 1,
	String                                   = 2,
	Number                                   = 3,
	Boolean                                  = 4,
	Array                                    = 5,
	Object                                   = 6,
	EJsonType_MAX                            = 7,
};

// ScriptStruct BlueprintJson.BlueprintJsonObject
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FBlueprintJsonObject final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintJsonObject) == 0x000008, "Wrong alignment on FBlueprintJsonObject");
static_assert(sizeof(FBlueprintJsonObject) == 0x000010, "Wrong size on FBlueprintJsonObject");

// ScriptStruct BlueprintJson.BlueprintJsonValue
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FBlueprintJsonValue final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintJsonValue) == 0x000008, "Wrong alignment on FBlueprintJsonValue");
static_assert(sizeof(FBlueprintJsonValue) == 0x000010, "Wrong size on FBlueprintJsonValue");

}

