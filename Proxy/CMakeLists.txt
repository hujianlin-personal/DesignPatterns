# 指定cmake版本
cmake_minimum_required(VERSION 3.10)
# C++编译器设置
find_program(CMAKE_CXX_COMPILER NAMES g++.exe PATHS "D:/Applications/VSCode/MinGW/mingw64/bin") 
# 设置项目名称和版本
project(PROXY_DEMO VERSION 1.0.0 LANGUAGES CXX)
# 设置编译类型
set(CMAKE_BUILD_TYPE "Debug")
# 设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -Wall")
# 设置头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
# 设置源文件目录
file(GLOB SOURCE_FILES src/*.cpp)
# 添加可执行文件
add_executable(demo main.cpp ${SOURCE_FILES})
# Output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin) 