cmake_minimum_required(VERSION 3.0)

project(FACADE)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(demo 
                main.cpp 
                source/OS.cpp 
                source/CPU.cpp 
                source/MMemory.cpp 
                source/HardDisk.cpp 
                source/MainFrame.cpp
                )