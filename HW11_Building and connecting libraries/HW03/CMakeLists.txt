cmake_minimum_required(VERSION 3.26)
project(HW03)

set(CMAKE_CXX_STANDARD 23)
add_library(dynamic_lib SHARED leaver.h leaver.cpp)
add_executable(HW03 main.cpp)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

target_link_libraries(HW03 dynamic_lib)
