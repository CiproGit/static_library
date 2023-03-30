cmake_minimum_required(VERSION 3.5)

project(power LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_directories(../mathematics/build/Debug)

include_directories(include ../mathematics/include)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS include/*.h)

add_library(power STATIC ${SOURCES} ${HEADERS})

target_compile_definitions(power PRIVATE POWER_LIBRARY)
target_link_libraries(power mathematics.lib)
