cmake_minimum_required(VERSION 3.26)
project(HW06_2)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_lib 
        main.cpp
        figure_func.cpp
        triangle_func.cpp 
        r_t_func.cpp
        i_t.cpp
        e_t_func.cpp
        rec_func.cpp
        rectangle_func.cpp
        cube_func.cpp
        parallel_func.cpp
        rhomb_func.cpp)
set(HEADER_lib  
        right_tri.h
        isos_tri.h
        equil_tri.h
        rectangle_usual.h
        rectangle.h
        cube.h
        parallel.h)

add_executable(${HW06_2} ${HEADER_lib} ${SOURCE_lib} )
