﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ScoringComboItem

#include "Basic.hpp"

#include "E_ScoringActor_structs.hpp"
#include "E_ScoringActorGroup_structs.hpp"
#include "E_ScoringActorState_structs.hpp"
#include "E_ScoringTag_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ScoringComboItem.S_ScoringComboItem
// 0x0004 (0x0004 - 0x0000)
struct FS_ScoringComboItem final
{
public:
	E_ScoringActor                                Actor_4_5045B9B8410AF13568FD0DBCBCA6FCF1;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringActorGroup                           ActorGroup_7_21BF2F9942F741B777531AB933654B77;     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringTag                                  Tag_10_691C725645465AEC0ACD6D80947C6EC9;           // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringActorState                           State_14_8CE08DA14B5935CD8F16759DA1316045;         // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_ScoringComboItem) == 0x000001, "Wrong alignment on FS_ScoringComboItem");
static_assert(sizeof(FS_ScoringComboItem) == 0x000004, "Wrong size on FS_ScoringComboItem");
static_assert(offsetof(FS_ScoringComboItem, Actor_4_5045B9B8410AF13568FD0DBCBCA6FCF1) == 0x000000, "Member 'FS_ScoringComboItem::Actor_4_5045B9B8410AF13568FD0DBCBCA6FCF1' has a wrong offset!");
static_assert(offsetof(FS_ScoringComboItem, ActorGroup_7_21BF2F9942F741B777531AB933654B77) == 0x000001, "Member 'FS_ScoringComboItem::ActorGroup_7_21BF2F9942F741B777531AB933654B77' has a wrong offset!");
static_assert(offsetof(FS_ScoringComboItem, Tag_10_691C725645465AEC0ACD6D80947C6EC9) == 0x000002, "Member 'FS_ScoringComboItem::Tag_10_691C725645465AEC0ACD6D80947C6EC9' has a wrong offset!");
static_assert(offsetof(FS_ScoringComboItem, State_14_8CE08DA14B5935CD8F16759DA1316045) == 0x000003, "Member 'FS_ScoringComboItem::State_14_8CE08DA14B5935CD8F16759DA1316045' has a wrong offset!");

}

