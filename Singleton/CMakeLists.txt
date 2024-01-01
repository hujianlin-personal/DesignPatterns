cmake_minimum_required(VERSION 3.0)

project(SINGLETON_EMPEROR)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(emperor main.cpp src/Emperor.cpp)