cmake_minimum_required(VERSION 3.5)

project(use_mathematics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_directories(../mathematics/build/Debug)

include_directories(../mathematics/include)

add_executable(use_mathematics main.cpp)
target_link_libraries(use_mathematics mathematics.lib)
