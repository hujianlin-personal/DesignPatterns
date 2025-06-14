#设置cmake版本要求
cmake_minimum_required(VERSION 3.10)
#设置编译器
find_program(CMAKE_CXX_COMPILER NAMES g++ PATH "D:/Applications/VSCode/MinGW/mingw64/bin")
#设置项目名称
project(Observer VERSION 1.0.0 LANGUAGES CXX)
#设置编译选项
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#设置头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
#设置源文件目录
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/main.cpp ${CMAKE_SOURCE_DIR}/src/*.cpp)
#设置编译输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#设置可执行文件名称
add_executable(demo ${SOURCES})