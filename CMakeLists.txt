cmake_minimum_required(VERSION 3.22.2)

project(Main)

include(CTest)
enable_testing()

find_package(doctest REQUIRED)

add_subdirectory(Array)
