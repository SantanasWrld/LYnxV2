#pragma once
#include "global.h"
#include <iostream>
#include <Windows.h>

#include "../LYnxV2/source/sdk/Engine_classes.hpp"

namespace Utility {
    void CreateConsole();
    void CloseConsole();
    SDK::APlayerController* GetLocalPlayerController();
    void UpdatePlayerReferences();

    namespace Utility {
        SDK::APlayerController* GetLocalPlayerController();
        void CreateConsole();
        void CloseConsole();
        void UpdatePlayerReferences();
    }
}
