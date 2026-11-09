#include "Algorithm.h"


Algorithm::Algorithm() : gen(rd()) {}

void Algorithm::GenerateRandomNumbers() {
    std::uniform_int_distribution<int> dist(1, GetScreenHeight());

    randomNumbers.clear();
    for (int i = 0; i < 62; ++i) {
        randomNumbers.push_back(dist(gen));
    }
}

void Algorithm::SortingAlgorithm() {
    if (!randomNumbers.empty()) {
        int indexToDel = 0;
        int largestNumber = 0;
        for (int i = 0; i < randomNumbers.size(); ++i) {
            if (randomNumbers[i] > largestNumber) {
                largestNumber = randomNumbers[i];
                indexToDel = i;
            }
        }
        randomNumbers.erase(randomNumbers.begin() + indexToDel);
        sortedNumbers.push_back(largestNumber);
    }
}

void Algorithm::Update() {
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= moveInterval) {
        lastUpdateTime = currentTime;
        SortingAlgorithm();
    }

    for (int i = 0; i < randomNumbers.size(); ++i) {
        DrawRectangle((i + static_cast<int>(sortedNumbers.size())) * 13, GetScreenHeight() - randomNumbers[i], 10,
                      randomNumbers[i], WHITE);
    }
    for (int j = 0; j < sortedNumbers.size(); ++j) {
        DrawRectangle(j * 13, GetScreenHeight() - sortedNumbers[j], 10, sortedNumbers[j], GREEN);
    }
}

