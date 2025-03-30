#include "commands.h"
#include "global.h"
#include "functionality.h"
#include "utility.h"
#include <iostream>
#include <sstream>

CommandHandler::CommandHandler() {
    RegisterCommand("help", [this](auto& args) { HelpCommand(args); },
        "Show this help message");
    RegisterCommand("exit", [this](auto& args) { ExitCommand(args); },
        "Unload cheat");
    RegisterCommand("clear", [this](auto& args) { ClearCommand(args); },
        "Clear console");

    RegisterCommand("fov", [this](auto& args) { FOVCommand(args); },
        "Set field of view");
    RegisterCommand("widget", [this](auto& args) { WidgetCommand(args); },
        "Open avatar widget");
    RegisterCommand("stamina", [this](auto& args) { StaminaCommand(args); },
        "Toggle infinite stamina");
    RegisterCommand("fly", [this](auto& args) { FlyCommand(args); },
        "Toggle fly (client only)");
    RegisterCommand("noclip", [this](auto& args) { NoclipCommand(args); },
        "Toggle noclip (client only)");
    RegisterCommand("godmode", [this](auto& args) { GodModeCommand(args); },
        "Toggle god mode (host only)");
    RegisterCommand("speed", [this](auto& args) { SpeedCommand(args); },
        "Set movement speed (host only)");
    RegisterCommand("balance", [this](auto& args) { BalanceCommand(args); },
        "Add to your balance (host only)");

    RegisterCommand("players", [this](auto& args) { PlayerCommand(args); },
        "Show all connected player(s) information");
    RegisterCommand("dump", [this](auto& args) { DumpCommand(args); },
        "Dumps objects");
}

void CommandHandler::ProcessCommand(const std::string& input) {
    std::istringstream iss(input);
    std::vector<std::string> args{ std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };

    if (args.empty()) return;

    std::string command = args[0];
    args.erase(args.begin());

    auto it = commands_.find(command);
    if (it != commands_.end()) {
        it->second.first(args);
    }
    else {
        std::cout << "Unknown command. Type 'help' for available commands\n";
    }
}

void CommandHandler::RegisterCommand(const std::string& name, CommandFunction fn, const std::string& help) {
    commands_[name] = { fn, help };
}

void CommandHandler::HelpCommand(const std::vector<std::string>& args) {
    std::cout << "Available commands:\n";
    for (const auto& [cmd, pair] : commands_) {
        std::cout << "  " << cmd << " - " << pair.second << "\n";
    }
}

void CommandHandler::ClearCommand(const std::vector<std::string>& args) {
    system("cls");
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

void CommandHandler::FOVCommand(const std::vector<std::string>& args) {
    if (args.empty()) {
        std::cout << "Current FOV: " << Global::CurrentFOV << "\n";
        return;
    }

    try {
        float newFOV = std::stof(args[0]);
        functionality::UpdatePlayerFOV(newFOV);
        std::cout << "FOV set to " << newFOV << "\n";
    }
    catch (...) {
        std::cout << "Invalid FOV value\n";
    }
}

void CommandHandler::PlayerCommand(const std::vector<std::string>& args) {
    functionality::DumpAllPlayers();
}

void CommandHandler::DumpCommand(const std::vector<std::string>& args) {
    functionality::DumpAllPawns();
}

void CommandHandler::ExitCommand(const std::vector<std::string>& args) {
    Global::ShouldExit = true;
}

void CommandHandler::WidgetCommand(const std::vector<std::string>& args) {
    functionality::OpenAvatarWidget();
}

void CommandHandler::GodModeCommand(const std::vector<std::string>& args) {
    if (args.empty()) return;

    try {
        bool newValue = std::stof(args[0]);
        functionality::ToggleGodMode(newValue);
        std::cout << "God mode set to " << newValue << "\n";
    }
    catch (...) {
        std::cout << "Invalid value\n";
    }
}

void CommandHandler::StaminaCommand(const std::vector<std::string>& args) {
    if (args.empty()) return;

    try {
        bool newValue = std::stof(args[0]);
        functionality::ToggleInfiniteStamina(newValue);
        std::cout << "Infinite stamina set to " << newValue << "\n";
    }
    catch (...) {
        std::cout << "Invalid value\n";
    }
}

void CommandHandler::FlyCommand(const std::vector<std::string>& args) {
    if (args.empty()) return;

    try {
        bool newValue = std::stof(args[0]);
        functionality::ToggleFly(newValue);
        std::cout << "Flight set to " << newValue << "\n";
    }
    catch (...) {
        std::cout << "Invalid value\n";
    }
}

void CommandHandler::SpeedCommand(const std::vector<std::string>& args) {
    if (args.empty()) return;

    try {
        float speed = std::stof(args[0]);
        functionality::SetMovementSpeed(speed);
        std::cout << "Movement speed set to " << speed << "\n";
    }
    catch (...) {
        std::cout << "Invalid value\n";
    }
}

void CommandHandler::NoclipCommand(const std::vector<std::string>& args) {
    if (args.empty()) return;

    try {
        bool newValue = std::stof(args[0]);
        functionality::ToggleNoclip(newValue);
        std::cout << "Noclip set to " << newValue << "\n";
    }
    catch (...) {
        std::cout << "Invalid value\n";
    }
}

void CommandHandler::BalanceCommand(const std::vector<std::string>& args) {
    if (args.empty()) return;

    try {
        int bal = std::stof(args[0]);
        functionality::AddToBalance(bal);
        std::cout << "Balance increased by " << bal << "\n";
    }
    catch (...) {
        std::cout << "Invalid value\n";
    }
}