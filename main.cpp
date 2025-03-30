#include <Windows.h>
#include "global.h"
#include "commands.h"
#include "utility.h"

DWORD MainThread(HMODULE module) {
    Utility::CreateConsole();
    Utility::UpdatePlayerReferences();
    CommandHandler commandHandler;
    std::string input;
    while (!Global::ShouldExit) {
        std::cout << "> ";
        std::getline(std::cin, input);
        commandHandler.ProcessCommand(input);
    }

    Utility::CloseConsole();
    FreeLibraryAndExitThread(module, 0);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr);
    }

    return true;
}