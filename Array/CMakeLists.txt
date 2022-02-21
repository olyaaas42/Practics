cmake_minimum_required(VERSION 3.22.2)

project(Array)

include(CTest)
enable_testing()

set (HEADERS dynamicArray.h)
 
set (SOURCES dynamicArray.cpp)
 
add_executable (${CMAKE_PROJECT_NAME} ${HEADERS} ${SOURCES})
