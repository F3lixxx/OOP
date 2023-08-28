#include "equil.h"

equil_triangle::equil_triangle(int side_e_a)
    : isos_triangle(side_e_a, side_e_a, 90, 60) {
    name_figure = "Equil Triangle ";
}

void equil_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;


    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")\n";
}

std::string equil_triangle::error(std::string str) {
    if (sides_a != sides_b && angle_A || angle_C != 60) {
        throw std::length_error("Error creating a shape! Reason: Side A not equal Side B and Angle A not equal Angle C");
    }
    return str;
}