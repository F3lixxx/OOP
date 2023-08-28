#include "isos.h"


isos_triangle::isos_triangle(int sideA, int sideB, int angleA1, int angleB1)
    : triangle(sideA, sideB, sideA,
        angleA1, angleB1, angleA1) {
    name_figure = "Isos Triangle ";
}
void isos_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")\n";
}

std::string isos_triangle::error(std::string str) {
    if (sides_a != sides_c && angle_A != angle_C) {
        throw std::length_error("Error creating a shape! Reason: Side A is not equal Side C and Angle A not equal angle C");
    }
    return str;
}
