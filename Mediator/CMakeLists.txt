#设置cmake版本
cmake_minimum_required(VERSION 3.0)
#设置工程名称和版本
project(MEDIATOR VERSION 1.0)
#设置编译器
set(CMAKE_BUILD_TYPE "Debug")
#设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++11")
#设置头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)
#添加源文件
set(SOURCE_FILES 
    test.cpp 
    src/ConcreteColleague1.cpp 
    src/ConcreteColleague2.cpp 
    src/ConcreteMeaditor.cpp)
#生成可执行文件
add_executable(test ${SOURCE_FILES})