cmake_minimum_required(VERSION 3.0)

project(MEDIATOR)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(
    test 
    test.cpp 
    src/ConcreteColleague1.cpp 
    src/ConcreteColleague2.cpp 
    src/ConcreteMeaditor.cpp
)