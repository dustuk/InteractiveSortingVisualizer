#include "APP.h"


APP::APP(int width, int height, const char* title) : screenWidth(width), screenHeight(height) {
    InitWindow(screenWidth, screenHeight, title);
    SetTargetFPS(60);
    algorithm.GenerateRandomNumbers();
}

APP::~APP() {
    CloseWindow();
}

void APP::Run() {
    while (!WindowShouldClose()) {
        if (mainMenu.GetIsInMainMenu()) {
            mainMenu.Update();
            BeginDrawing();
            ClearBackground(BLACK);
            EndDrawing();
        } else {
            BeginDrawing();
            ClearBackground(BLACK);
            algorithm.Update();
            EndDrawing();
        }
    }
}
