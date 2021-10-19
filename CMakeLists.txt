cmake_minimum_required(VERSION 3.20)
project(JiPP)
set(CMAKE_CXX_STANDARD 14)

add_executable(allocation_basics allocation_basics/main.cpp)

include_directories(simplyCalc/include)
add_library(calc STATIC simplyCalc/src/calc.cpp)
add_executable(simplyCalc simplyCalc/main.cpp)
target_link_libraries(simplyCalc calc)

include_directories(firstLib/include)
add_library(firstLib STATIC firstLib/src/lib.cpp)
add_executable(firstLibCall firstLibCall/main.cpp)
target_link_libraries(firstLibCall firstLib)

include_directories(calcArea/include)
add_library(area STATIC calcArea/src/area.cpp)
add_executable(calcArea calcArea/main.cpp)
target_link_libraries(calcArea area)

include_directories(arrays/include)
add_library(arrays_lib STATIC arrays/src/arrays.cpp)
add_executable(arrays arrays/main.cpp)
target_link_libraries(arrays arrays_lib)

include_directories(pointers/include)
add_library(pointers_lib STATIC pointers/src/pointers.cpp)
add_executable(pointers pointers/main.cpp)
target_link_libraries(pointers pointers_lib)

include_directories(exceptions/include)
add_library(exceptions_lib STATIC exceptions/src/exceptions.cpp)
add_executable(exceptions exceptions/main.cpp)
target_link_libraries(exceptions exceptions_lib)