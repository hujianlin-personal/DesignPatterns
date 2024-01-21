cmake_minimum_required(VERSION 3.0)

project(BUILDER)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(
    demo 
    main.cpp 
    src/Meal.cpp 
    src/MealBuilder.cpp 
    src/ChickenBurgerMealBuilder.cpp 
    src/BeefBurgerMealBuilder.cpp 
    src/MealDirector.cpp
    )