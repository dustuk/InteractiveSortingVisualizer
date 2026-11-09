#pragma once
#include <vector>
#include <random>
#include "raylib.h"

class Algorithm {
private:
    std::random_device rd;
    std::mt19937 gen;

    float moveInterval = 0.08f;
    double lastUpdateTime = 0.0;

    std::vector<int> randomNumbers;
    std::vector<int> sortedNumbers;
public:
    Algorithm();

    void GenerateRandomNumbers();
    void SortingAlgorithm();

    void Update();
};
