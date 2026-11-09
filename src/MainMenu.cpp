#include "MainMenu.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"


void MainMenu::Update() {
    GuiSetStyle(DEFAULT, TEXT_SIZE, 40);

    if (GuiButton(btn, "Click Me")) {
        isInMainMenu = false;
    }

}

