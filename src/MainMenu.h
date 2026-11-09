#pragma once
#include "raylib.h"

class MainMenu {
private:
    Rectangle btn = {300, 250, 200, 75};
    bool isInMainMenu = true;
public:
    MainMenu() = default;

    [[nodiscard]] bool GetIsInMainMenu() const {return isInMainMenu;}

    void Update();
};
