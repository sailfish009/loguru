cmake_minimum_required(VERSION 3.6)
project(Log)

set(CMAKE_CONFIGURATION_TYPES "Debug" CACHE STRING "" FORCE)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
loguru.h
loguru.cpp)

add_library(Log STATIC ${SOURCE_FILES})

