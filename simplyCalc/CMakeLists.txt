cmake_minimum_required(VERSION 3.20)
project(simplyCalc)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(simplyCalc
        main.cpp src/calc.cpp)
