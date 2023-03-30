cmake_minimum_required(VERSION 3.5)

project(mathematics LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS include/*.h)

add_library(mathematics STATIC ${SOURCES} ${HEADERS})

target_compile_definitions(mathematics PRIVATE MATHEMATICS_LIBRARY)
