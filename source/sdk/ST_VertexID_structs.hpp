﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_VertexID

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_VertexID.ST_VertexID
// 0x0018 (0x0018 - 0x0000)
struct FST_VertexID final
{
public:
	int32                                         Index_2_33D4F71C4AA6FB82294EAF822B7198C9;          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Vertex2D_6_F7E1749545A0B3C2ED412EAC8695F451;       // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_VertexID) == 0x000008, "Wrong alignment on FST_VertexID");
static_assert(sizeof(FST_VertexID) == 0x000018, "Wrong size on FST_VertexID");
static_assert(offsetof(FST_VertexID, Index_2_33D4F71C4AA6FB82294EAF822B7198C9) == 0x000000, "Member 'FST_VertexID::Index_2_33D4F71C4AA6FB82294EAF822B7198C9' has a wrong offset!");
static_assert(offsetof(FST_VertexID, Vertex2D_6_F7E1749545A0B3C2ED412EAC8695F451) == 0x000008, "Member 'FST_VertexID::Vertex2D_6_F7E1749545A0B3C2ED412EAC8695F451' has a wrong offset!");

}

