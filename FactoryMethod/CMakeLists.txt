cmake_minimum_required(VERSION 3.0)

project(Factory_Method_Demo)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -g -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(demo 
                main.cpp 
                source/IHuman.cpp 
                source/YellowHuman.cpp 
                source/WhiteHuman.cpp 
                source/HumanFactory.cpp
                )