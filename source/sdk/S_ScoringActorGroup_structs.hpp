﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ScoringActorGroup

#include "Basic.hpp"

#include "E_ScoringActorGroup_structs.hpp"
#include "E_ScoringActor_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ScoringActorGroup.S_ScoringActorGroup
// 0x0018 (0x0018 - 0x0000)
struct FS_ScoringActorGroup final
{
public:
	E_ScoringActorGroup                           Group_3_2199D2824AF95AEBE2362B99321A932E;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_ScoringActor>                        Actors_9_E56668534131077E5C760DA069471F5D;         // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_ScoringActorGroup) == 0x000008, "Wrong alignment on FS_ScoringActorGroup");
static_assert(sizeof(FS_ScoringActorGroup) == 0x000018, "Wrong size on FS_ScoringActorGroup");
static_assert(offsetof(FS_ScoringActorGroup, Group_3_2199D2824AF95AEBE2362B99321A932E) == 0x000000, "Member 'FS_ScoringActorGroup::Group_3_2199D2824AF95AEBE2362B99321A932E' has a wrong offset!");
static_assert(offsetof(FS_ScoringActorGroup, Actors_9_E56668534131077E5C760DA069471F5D) == 0x000008, "Member 'FS_ScoringActorGroup::Actors_9_E56668534131077E5C760DA069471F5D' has a wrong offset!");

}

