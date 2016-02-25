cmake_minimum_required(VERSION 3.3)
project(study)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp test_io.cpp)
add_executable(study ${SOURCE_FILES})