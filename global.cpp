#include "global.h"

namespace Global {
	SDK::APlayerController* PlayerController = nullptr;
	SDK::APawn* PlayerPawn = nullptr;
	SDK::ACharacter* PlayerCharacter = nullptr;
	float CurrentFOV = 90.0f;
	bool ShouldExit = false;
	bool InfiniteStamina = false;
	float CurrentSpeed = 500.0f;
	bool GodMode = false;
	bool FlyMode = false;
	bool Noclip = false;
}