cmake_minimum_required(VERSION 3.3)
project(lab_5_inClass)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Wildcat.cpp Wildcat.h)
add_executable(lab_5_inClass ${SOURCE_FILES})