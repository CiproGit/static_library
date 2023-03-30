cmake_minimum_required(VERSION 3.5)

project(use_power LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_directories(../power/build/Debug ../mathematics/build/Debug)

include_directories(../power/include ../mathematics/include)

add_executable(use_power main.cpp)
target_link_libraries(use_power power.lib mathematics.lib)
