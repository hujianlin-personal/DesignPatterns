#设置cmake版本要求
cmake_minimum_required(VERSION 3.10)
#设置编译器
find_program(CMAKE_CXX_COMPILER NAMES g++ PATH "D:/Applications/VSCode/MinGW/mingw64/bin")
#工程名称
project(COMPOSITE VERSION 1.0 LANGUAGES CXX)
#设置编译模式
set(CMAKE_BUILD_TYPE "Debug")
#设置编译参数
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++17")
#设置头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
#设置源文件目录
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp ${CMAKE_SOURCE_DIR}/main.cpp)
#添加可执行文件
add_executable(demo ${SOURCES})
#设置可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)