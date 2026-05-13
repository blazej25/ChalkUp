cmake_minimum_required(VERSION 4.2)
project(ChalkUp)

set(CMAKE_CXX_STANDARD 20)

# finds SDL2 package on system
find_package(SDL2 REQUIRED)

add_executable(ChalkUp main.cpp
        Renderer.h
        Renderer.cpp)

# link SDL2 to the executable
target_link_libraries(ChalkUp PRIVATE SDL2::SDL2)