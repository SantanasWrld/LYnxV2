#pragma once
#include "../LYnxV2/source/sdk/Engine_classes.hpp"

namespace Global {
	extern SDK::APlayerController* PlayerController;
	extern SDK::APawn* PlayerPawn;
	extern SDK::ACharacter* PlayerCharacter;
	extern float CurrentFOV;
	extern bool ShouldExit;
	extern bool InfiniteStamina;
	extern bool FlyMode;
	extern bool GodMode;
	extern float CurrentSpeed;
	extern bool Noclip;
}