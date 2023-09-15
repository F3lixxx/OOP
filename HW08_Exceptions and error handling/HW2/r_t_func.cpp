#include "right_tri.h"

#pragma 

right_triangle::right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b, int angle_c)
    : triangle(side_A, side_B, side_C, angle_a, angle_b, angle_c) {
    name_figure = "Right triangle ";
    if (angle_C != 90) {
        throw std::length_error("Error creating a Right Triangle! Reason: Angle C not equal 90");
    }
}

void right_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")\n"<<std::endl;
}