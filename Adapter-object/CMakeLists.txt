#cmake版本
cmake_minimum_required(VERSION 3.10)
#设置编译器
find_program(CMAKE_CXX_COMPILER NAMES g++ PATH "D:/Applications/VSCode/MinGW/mingw64/bin")
#设置工程名
project(ADAPTER-CLASS VERSION 1.0 LANGUAGES CXX)
#设置编译类型
set(CMAKE_BUILD_TYPE "Debug")
#设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -Wall")
#设置头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)
#设置源文件路径
file(GLOB_RECURSE SOURCE ${CMAKE_SOURCE_DIR}/source/*.cpp)
#添加可执行文件
add_executable(demo main.cpp ${SOURCE})
#设置可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)