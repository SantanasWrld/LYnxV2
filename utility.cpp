#include "utility.h"

void Utility::CreateConsole() {
    AllocConsole();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    std::cout << R"(  
     /$$   /$$     /$$                   /$$    /$$  /$$$$$$ 
    | $$  |  $$   /$$/                  | $$   | $$ /$$__  $$
    | $$   \  $$ /$$//$$$$$$$  /$$   /$$| $$   | $$|__/  \ $$
    | $$    \  $$$$/| $$__  $$|  $$ /$$/|  $$ / $$/  /$$$$$$/
    | $$     \  $$/ | $$  \ $$ \  $$$$/  \  $$ $$/  /$$____/ 
    | $$      | $$  | $$  | $$  >$$  $$   \  $$$/  | $$      
    | $$$$$$$$| $$  | $$  | $$ /$$/\  $$   \  $/   | $$$$$$$$
    |________/|__/  |__/  |__/|__/  \__/    \_/    |________/                   
)" << std::endl;
}

void Utility::CloseConsole() {
    fclose(stdout);
    fclose(stdin);
    FreeConsole();
}

SDK::APlayerController* Utility::GetLocalPlayerController() {
    if (auto* World = SDK::UWorld::GetWorld()) {
        if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.Num() > 0) {
            return World->OwningGameInstance->LocalPlayers[0]->PlayerController;
        }
    }

    return nullptr;
}

void Utility::UpdatePlayerReferences() {
    Global::PlayerController = GetLocalPlayerController();
    if (Global::PlayerController) {
        Global::PlayerPawn = Global::PlayerController->Pawn;
        Global::PlayerCharacter = Global::PlayerController->Character;
    }
}