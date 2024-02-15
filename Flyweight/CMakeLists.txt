cmake_minimum_required(VERSION 3.0)

project(FLYWEIGHT)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -g -Wall std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(
    demo 
    main.cpp 
    src/Flyweight.cpp 
    src/FlyweightFactory.cpp
)