#设置cmake版本要求
cmake_minimum_required(VERSION 3.10)
#设置C++编译器
find_program(CMAKE_CXX_COMPILER NAMES g++ PATH "D:/Applications/VSCode/MinGW/mingw64/bin")
#设置工程名称
project(DECORATOR VERSION 1.0 LANGUAGES CXX)
#设置编译类型
set(CMAKE_BUILD_TYPE "Debug")
#设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++17")
#设置头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
#设置源文件目录
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/main.cpp ${CMAKE_SOURCE_DIR}/src/*.cpp)
#添加可执行文件
add_executable(demo ${SOURCES})
#设置可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)