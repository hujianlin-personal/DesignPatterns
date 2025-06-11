cmake_minimum_required(VERSION 3.10) # CMake version check

find_program(CMAKE_CXX_COMPILER NAMES g++.exe PATHS "D:/Applications/VSCode/MinGW/mingw64/bin") # C++ compiler path

project(singleton VERSION 1.0 LANGUAGES CXX) # Project name

set(CMAKE_BUILD_TYPE Debug) # Debug mode

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -Wall") # Flags

include_directories(include) # Include directory

file(GLOB SOURCE_FILES  
main.cpp 
src/*.cpp)

add_executable(demo ${SOURCE_FILES}) # Executable

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin) # Output directory for the executable