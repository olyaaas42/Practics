cmake_minimum_required(VERSION 3.22.2)

project(Array)
 
set(SOURCES dynamicArray.cpp)

set(HEADERS dynamicArray.h)

add_library(array ${SOURCES} ${HEADERS})

set(TEST_SOURCES test.cpp)

add_executable(test1 ${TEST_SOURCES})

target_link_libraries(test1 PRIVATE doctest::doctest array)

add_test(NAME Test1 COMMAND test1)