cmake_minimum_required(VERSION 3.26)
project(HW05)

set(CMAKE_CXX_STANDARD 20)

add_library(files SHARED
		figure_func.cpp
		triangle_func.cpp
		right_tri.h
		r_t_func.cpp
		isos_tri.h
		i_t.cpp
		equil_tri.h
		e_t_func.cpp
		rectangle_usual.h
		rec_func.cpp
		rectangle.h
		rectangle_func.cpp
		cube.h
		cube_func.cpp
		parallel.h
		parallel_func.cpp
		rhomb_func.cpp)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(HW05 main.cpp)
target_link_libraries(HW05 files)
