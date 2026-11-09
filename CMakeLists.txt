cmake_minimum_required(VERSION 4.3)
project(InteractiveSortingVisualizer)

set(CMAKE_CXX_STANDARD 20)

find_package(raylib REQUIRED)

add_executable(InteractiveSortingVisualizer src/main.cpp
        src/APP.cpp
        src/APP.cpp
        src/APP.h
        src/MainMenu.cpp
        src/MainMenu.h
        src/Algorithm.cpp
        src/Algorithm.h)

target_link_libraries(InteractiveSortingVisualizer PRIVATE raylib)