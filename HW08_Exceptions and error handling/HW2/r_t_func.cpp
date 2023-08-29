#include "right_tri.h"

#pragma 

right_triangle::right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b)
    : triangle(side_A, side_B, side_C, angle_a, angle_b, 90) {
    name_figure = "Right triangle ";
}

void right_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")\n";
}

std::string right_triangle::error(std::string str) {
    if (angle_C != 90) {
        throw std::length_error("Error creating a shape! Reason: Angle C not equal 90");
    }
    return str;
}
