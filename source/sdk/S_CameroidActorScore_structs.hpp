﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CameroidActorScore

#include "Basic.hpp"

#include "E_ScoringActor_structs.hpp"
#include "E_ScoringActorVariant_structs.hpp"
#include "E_ScoringActorState_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_CameroidActorScore.S_CameroidActorScore
// 0x0018 (0x0018 - 0x0000)
struct FS_CameroidActorScore final
{
public:
	int32                                         ActorId_25_26C1FEAB4C99D4288FE167A0245BA2D6;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringActor                                ScoringActor_27_4520F49746B307498DC161AB8C955AB2;  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringActorVariant                         Variant_35_3A88BD5F41386BA4D88DCDA072306626;       // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScoringActorState                           State_21_7106ABB4429CDE8605DED0984D31AC84;         // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RelativeScore_30_FFCC95624D7F7F7372804896F912036D; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Score_32_39ADAB56409F0C88071567842A806249;         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_CameroidActorScore) == 0x000008, "Wrong alignment on FS_CameroidActorScore");
static_assert(sizeof(FS_CameroidActorScore) == 0x000018, "Wrong size on FS_CameroidActorScore");
static_assert(offsetof(FS_CameroidActorScore, ActorId_25_26C1FEAB4C99D4288FE167A0245BA2D6) == 0x000000, "Member 'FS_CameroidActorScore::ActorId_25_26C1FEAB4C99D4288FE167A0245BA2D6' has a wrong offset!");
static_assert(offsetof(FS_CameroidActorScore, ScoringActor_27_4520F49746B307498DC161AB8C955AB2) == 0x000004, "Member 'FS_CameroidActorScore::ScoringActor_27_4520F49746B307498DC161AB8C955AB2' has a wrong offset!");
static_assert(offsetof(FS_CameroidActorScore, Variant_35_3A88BD5F41386BA4D88DCDA072306626) == 0x000005, "Member 'FS_CameroidActorScore::Variant_35_3A88BD5F41386BA4D88DCDA072306626' has a wrong offset!");
static_assert(offsetof(FS_CameroidActorScore, State_21_7106ABB4429CDE8605DED0984D31AC84) == 0x000006, "Member 'FS_CameroidActorScore::State_21_7106ABB4429CDE8605DED0984D31AC84' has a wrong offset!");
static_assert(offsetof(FS_CameroidActorScore, RelativeScore_30_FFCC95624D7F7F7372804896F912036D) == 0x000008, "Member 'FS_CameroidActorScore::RelativeScore_30_FFCC95624D7F7F7372804896F912036D' has a wrong offset!");
static_assert(offsetof(FS_CameroidActorScore, Score_32_39ADAB56409F0C88071567842A806249) == 0x000010, "Member 'FS_CameroidActorScore::Score_32_39ADAB56409F0C88071567842A806249' has a wrong offset!");

}

