cmake_minimum_required(VERSION 3.26)
project(HW2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW2
        e_t_func.cpp
        equil.h
        figure.h
        figurefunc.cpp
        isos.cpp
        isos.h
        main.cpp
        r_t_func.cpp
        rec_func.cpp
        rectangle.h
        right_tri.h
        tri.h
        tri_func.cpp
        quadro.h
        quadro_func.cpp)
