cmake_minimum_required(VERSION 3.0)

project(ABSTRACT_FACTORY)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(demo 
                main.cpp 
                source/ICar.cpp 
                source/ElectricPoweredCar.cpp 
                source/OilPoweredCar.cpp 
                source/BydElectricCar.cpp 
                source/BydOilCar.cpp 
                source/TeslaElectricCar.cpp 
                source/TeslaOilCar.cpp 
                source/IAbstractCarFactory.cpp 
                source/BydCarFactory.cpp 
                source/TeslaCarFactory.cpp
                )