#pragma once
#include "MainMenu.h"
#include "Algorithm.h"

class APP {
private:
    int screenWidth;
    int screenHeight;

    MainMenu mainMenu;
    Algorithm algorithm;
public:
    APP(int width, int height, const char* title);
    ~APP();

    void Run();
};
