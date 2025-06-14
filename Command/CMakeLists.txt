#设置cmake版本要求
cmake_minimum_required(VERSION 3.10)
#设置编译器
find_program(CMAKE_CXX_COMPILER NAMES g++ PATH "D:/Applications/VSCode/MinGW/mingw64/bin")
#设置项目名称
project(COMMAND VERSION 1.0 LANGUAGES CXX)
#设置编译类型
set(CMAKE_BUILD_TYPE Debug)
#设置编译参数
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++17")
#设置头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)
#设置源文件路径
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/main.cpp ${CMAKE_SOURCE_DIR}/src/*.cpp)
#设置可执行文件输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#设置可执行文件名称
add_executable(demo ${SOURCES})