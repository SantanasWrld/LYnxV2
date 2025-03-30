#pragma once
#include <functional>
#include <unordered_map>
#include <iostream>

class CommandHandler {
public:
    using CommandFunction = std::function<void(const std::vector<std::string>&)>;

    CommandHandler();
    void ProcessCommand(const std::string& command);
    void RegisterCommand(const std::string& name, CommandFunction fn, const std::string& help);

private:
    std::unordered_map<std::string, std::pair<CommandFunction, std::string>> commands_;

    void HelpCommand(const std::vector<std::string>& args);
    void ClearCommand(const std::vector<std::string>& args);
    void ExitCommand(const std::vector<std::string>& args);

    void PlayerCommand(const std::vector<std::string>& args);
    void DumpCommand(const std::vector<std::string>& args);

    void WidgetCommand(const std::vector<std::string>& args);
    void SpeedCommand(const std::vector<std::string>& args);
    void FOVCommand(const std::vector<std::string>& args);
    void StaminaCommand(const std::vector<std::string>& args);
    void GodModeCommand(const std::vector<std::string>& args);
    void FlyCommand(const std::vector<std::string>& args);
    void NoclipCommand(const std::vector<std::string>& args);
    void BalanceCommand(const std::vector<std::string>& args);
};
