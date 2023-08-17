cmake_minimum_required(VERSION 3.26)
project(HW02)

set(CMAKE_CXX_STANDARD 23)

add_executable(HW02 main.cpp
        figure.h
        f.function.cpp
        trian.h
        tri.func.cpp
        error.h
        right_tri.h
        r_t.func.cpp
        isos.h
        i_t.func.cpp
        equil.h
        e_t.func.cpp)
