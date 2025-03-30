#include "functionality.h"
#include "global.h"
#include "utility.h"
#include "../LYnxV2/source/sdk/Engine_classes.hpp"
#include "../LYnxV2/source/sdk/BP_UPPlayerCharacter_functions.cpp"
#include "../LYnxV2/source/sdk/BP_KillableCharacter_functions.cpp"
#include "../LYnxV2/source/sdk/BP_UPGameState_functions.cpp"
#include "../LYnxV2/source/sdk/BPC_PlayerAvatar_functions.cpp"
#include "../LYnxV2/source/sdk/BPC_PlayerInventory_functions.cpp"

#include <iostream>
#include <algorithm>
#include <thread>
#include <atomic>
#include <chrono>

void RunInfiniteStamina() {
    while (Global::InfiniteStamina) {
        if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
            if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
                if (PlayerCharacter->CurrentStamina < PlayerCharacter->MaxStamina) {
                    PlayerCharacter->Regenerate_Stamina();
                }
                else {
                    PlayerCharacter->CurrentStamina = PlayerCharacter->MaxStamina;
                }
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }
}

void functionality::DumpAllPawns() {
    if (!SDK::UObject::GObjects) return;
    std::cout << "Dumping all pawn objects...\n";
    int count = 0;
    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
        if (auto* Obj = SDK::UObject::GObjects->GetByIndex(i)) {
            if (Obj->IsA(SDK::APawn::StaticClass())) {
                auto* Pawn = static_cast<SDK::APawn*>(Obj);
                std::cout << "[" << i << "] " << Obj->GetFullName();
                if (Pawn == Global::PlayerPawn) {
                    std::cout << " (YOU)";
                }

                std::cout << "\n";
                count++;
            }
        }
    }

    std::cout << "Found " << count << " pawns\n";
}

void functionality::DumpAllPlayers() {
    if (!SDK::UObject::GObjects)
        return;

    std::cout << "Dumping all player objects...\n";
    int count = 0;
    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
        if (auto* Obj = SDK::UObject::GObjects->GetByIndex(i)) {
            if (Obj->IsA(SDK::APawn::StaticClass())) {
                auto* Pawn = static_cast<SDK::APawn*>(Obj);
                if (Pawn->IsA(SDK::ABP_UPPlayerCharacter_C::StaticClass())) {
                    if (auto* Controller = Pawn->GetController()) {
                        auto* State = Controller->PlayerState;
                        if (!State) continue;
                        std::cout << "[" << i << "] "
                            << State->GetPlayerName() << "/"
                            << State->GetPlayerId() << "/"
                            << State->GetScore() << "/"
                            << Obj->GetFullName() << "/"
                            << State->GetPingInMilliseconds();

                        if (Pawn == Global::PlayerPawn) {
                            std::cout << " (YOU)";
                        }

                        std::cout << "\n";
                        count++;
                    }
                }
            }
        }
    }

    std::cout << "Found " << count << " players" << "\n";
}

void functionality::UpdatePlayerFOV(float newFOV) {
    Utility::UpdatePlayerReferences();

    if (Global::PlayerController) {
        newFOV = std::clamp(newFOV, 1.0f, 170.0f);
        Global::PlayerController->FOV(newFOV);
        Global::CurrentFOV = newFOV;
        if (auto* CameraManager = Global::PlayerController->PlayerCameraManager) {
            if (newFOV != Global::CurrentFOV) {
                CameraManager->DefaultFOV = newFOV;
            }
            else {
                CameraManager->DefaultFOV = 90.0f;
                Global::CurrentFOV = 90.0f;
            }
        }
    }
}

void functionality::SetMovementSpeed(float newSpeed) {
    Utility::UpdatePlayerReferences();

    if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
        if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
            if (newSpeed != Global::CurrentSpeed) {
                Global::CurrentSpeed = newSpeed;
                PlayerCharacter->SprintSpeed = newSpeed;
                PlayerCharacter->CharacterMovement->MaxAcceleration = newSpeed;
            }
            else {
                PlayerCharacter->SprintSpeed = 500.f;
                PlayerCharacter->CharacterMovement->MaxAcceleration = 500.f;
                Global::CurrentSpeed = 500.f;
            }
        }
    }
}

void functionality::OpenAvatarWidget() {
    Utility::UpdatePlayerReferences();

    if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
        if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
            if (auto* PlayerAvatar = static_cast<SDK::UBPC_PlayerAvatar_C*>(PlayerCharacter->Player_Avatar)) {
                PlayerAvatar->OpenAvatarSelectionWidget();
            }
            else {
                std::cout << "cant open avatar widget";
            }
        }
    }
}

void functionality::ToggleInfiniteStamina(bool newValue) {
    Utility::UpdatePlayerReferences();

    if (newValue != Global::InfiniteStamina) {
        Global::InfiniteStamina = newValue;
        std::thread infiniteStaminaThread(RunInfiniteStamina);
        infiniteStaminaThread.detach();
    }
    else {
        Global::InfiniteStamina = false;
    }
}

void functionality::ToggleGodMode(bool newValue) {
    Utility::UpdatePlayerReferences();
    if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
        if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
            if (newValue != Global::GodMode) {
                Global::GodMode = newValue;
                PlayerCharacter->Invincible = true;
                PlayerCharacter->MaxHealth = 100000;
                PlayerCharacter->CurrentHealth = 100000;
                PlayerCharacter->DisableRagdoll();
            }
            else {
                PlayerCharacter->Invincible = false;
                PlayerCharacter->MaxHealth = 105;
                PlayerCharacter->CurrentHealth = 105;
                Global::GodMode = false;
            }
        }
    }
}

void functionality::ToggleFly(bool newValue) {
    Utility::UpdatePlayerReferences();
    if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
        if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
            if (newValue != Global::FlyMode) {
                Global::FlyMode = newValue;
                PlayerCharacter->SetReplicateMovement(false);
                PlayerCharacter->CharacterMovement->bCheatFlying = true;
                PlayerCharacter->CharacterMovement->MaxFlySpeed = 2000.f;
                PlayerCharacter->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;
                if (GetAsyncKeyState(VK_SPACE))
                {
                    SDK::FVector posUP = { 0.f, 0.f, 10.f };
                    PlayerCharacter->CharacterMovement->AddInputVector(posUP, true);
                }
                if (GetAsyncKeyState(VK_LCONTROL))
                {
                    SDK::FVector posDOWN = { 0.f, 0.f, -10.f };
                    PlayerCharacter->CharacterMovement->AddInputVector(posDOWN, true);
                }
            }
            else {
                PlayerCharacter->CharacterMovement->bCheatFlying = false;
                PlayerCharacter->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Falling;
                PlayerCharacter->SetReplicateMovement(true);
                Global::FlyMode = false;
            }
        }
    }
}

void functionality::ToggleNoclip(bool newValue) {
    Utility::UpdatePlayerReferences();
    if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
        if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
            if (newValue != Global::Noclip) {
                Global::Noclip = newValue;
                Global::PlayerPawn->SetActorEnableCollision(false);
            }
            else {
                Global::Noclip = false;
                Global::PlayerPawn->SetActorEnableCollision(true);
            }
        }
    }
}

void functionality::AddToBalance(int newValue) {
    Utility::UpdatePlayerReferences();
    if (Global::PlayerController && Global::PlayerController->AcknowledgedPawn) {
        if (auto* PlayerCharacter = static_cast<SDK::ABP_UPPlayerCharacter_C*>(Global::PlayerController->AcknowledgedPawn)) {
            SDK::UWorld* World = SDK::UWorld::GetWorld();
            auto BaseState = World->GameState;
            if (!BaseState)
                return;

            if (auto GameState = static_cast<SDK::ABP_UPGameState_C*>(BaseState)) {
                GameState->AddMoney(newValue);
            }
        }
    }
}