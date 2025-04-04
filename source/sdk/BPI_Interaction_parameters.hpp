﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Interaction

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_Interaction.BPI_Interaction_C.GetInteractDistance
// 0x0008 (0x0008 - 0x0000)
struct BPI_Interaction_C_GetInteractDistance final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Interaction_C_GetInteractDistance) == 0x000008, "Wrong alignment on BPI_Interaction_C_GetInteractDistance");
static_assert(sizeof(BPI_Interaction_C_GetInteractDistance) == 0x000008, "Wrong size on BPI_Interaction_C_GetInteractDistance");
static_assert(offsetof(BPI_Interaction_C_GetInteractDistance, Distance) == 0x000000, "Member 'BPI_Interaction_C_GetInteractDistance::Distance' has a wrong offset!");

// Function BPI_Interaction.BPI_Interaction_C.GetInteractDuration
// 0x0008 (0x0008 - 0x0000)
struct BPI_Interaction_C_GetInteractDuration final
{
public:
	double                                        Duration;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Interaction_C_GetInteractDuration) == 0x000008, "Wrong alignment on BPI_Interaction_C_GetInteractDuration");
static_assert(sizeof(BPI_Interaction_C_GetInteractDuration) == 0x000008, "Wrong size on BPI_Interaction_C_GetInteractDuration");
static_assert(offsetof(BPI_Interaction_C_GetInteractDuration, Duration) == 0x000000, "Member 'BPI_Interaction_C_GetInteractDuration::Duration' has a wrong offset!");

// Function BPI_Interaction.BPI_Interaction_C.GetInteractNoise
// 0x0010 (0x0010 - 0x0000)
struct BPI_Interaction_C_GetInteractNoise final
{
public:
	bool                                          NoiseOnInteract;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NoiseRange;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Interaction_C_GetInteractNoise) == 0x000008, "Wrong alignment on BPI_Interaction_C_GetInteractNoise");
static_assert(sizeof(BPI_Interaction_C_GetInteractNoise) == 0x000010, "Wrong size on BPI_Interaction_C_GetInteractNoise");
static_assert(offsetof(BPI_Interaction_C_GetInteractNoise, NoiseOnInteract) == 0x000000, "Member 'BPI_Interaction_C_GetInteractNoise::NoiseOnInteract' has a wrong offset!");
static_assert(offsetof(BPI_Interaction_C_GetInteractNoise, NoiseRange) == 0x000008, "Member 'BPI_Interaction_C_GetInteractNoise::NoiseRange' has a wrong offset!");

// Function BPI_Interaction.BPI_Interaction_C.GetInteractText
// 0x0018 (0x0018 - 0x0000)
struct BPI_Interaction_C_GetInteractText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BPI_Interaction_C_GetInteractText) == 0x000008, "Wrong alignment on BPI_Interaction_C_GetInteractText");
static_assert(sizeof(BPI_Interaction_C_GetInteractText) == 0x000018, "Wrong size on BPI_Interaction_C_GetInteractText");
static_assert(offsetof(BPI_Interaction_C_GetInteractText, Text) == 0x000000, "Member 'BPI_Interaction_C_GetInteractText::Text' has a wrong offset!");

// Function BPI_Interaction.BPI_Interaction_C.Interact
// 0x0008 (0x0008 - 0x0000)
struct BPI_Interaction_C_Interact final
{
public:
	class ABP_UPPlayerCharacter_C*                Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Interaction_C_Interact) == 0x000008, "Wrong alignment on BPI_Interaction_C_Interact");
static_assert(sizeof(BPI_Interaction_C_Interact) == 0x000008, "Wrong size on BPI_Interaction_C_Interact");
static_assert(offsetof(BPI_Interaction_C_Interact, Player) == 0x000000, "Member 'BPI_Interaction_C_Interact::Player' has a wrong offset!");

}

