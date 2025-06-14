#设置cmake版本
cmake_minimum_required(VERSION 3.10)
#设置编译器
find_program(CMAKE_CXX_COMPILER NAMES g++ PATH "D:/Applications/VSCode/MinGW/mingw64/bin")
#工程名称
project(STRATEGY_DEMO VERSION 1.0 LANGUAGES CXX)
#设置编译类型
set(CMAKE_BUILD_TYPE "Debug")
#设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -Wall")
#头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)
#源文件路径
file(GLOB_RECURSE SOURCES
 ${CMAKE_SOURCE_DIR}/main.cpp
 ${CMAKE_SOURCE_DIR}/src/*.cpp)
#添加可执行文件
add_executable(demo ${SOURCES})
#设置可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)