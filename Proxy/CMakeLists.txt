cmake_minimum_required(VERSION 3.0)

project(PROXY_DEMO)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(demo 
                main.cpp 
                source/IMachineProxy.cpp 
                source/ComputerProxy.cpp 
                source/CarProxy.cpp 
                source/SmartPhoneProxy.cpp
                )