cmake_minimum_required(VERSION 3.22.2)

set(PROJECT Array)

project(${PROJECT})

include(CTest)
enable_testing()

set (HEADERS dynamicArray.h)
 
set (SOURCES dynamicArray.cpp)
 
add_executable (${PROJECT} ${HEADERS} ${SOURCES})
