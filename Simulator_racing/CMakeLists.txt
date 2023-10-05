cmake_minimum_required(VERSION 3.26)
project(Simulator_racing)

set(CMAKE_CXX_STANDARD 23)

add_executable(Simulator_racing main.cpp
        choice.h
        terrain.h
        terrain.cpp
        choice_func.cpp
        lenght.h
        length_func.cpp
        air.h
        air_func.cpp
)
