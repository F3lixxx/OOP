#include "quadro.h"
#include <iostream>

#pragma once

quadro::quadro(int side_r_A, int side_r_B) : rectangle(side_r_A, side_r_B, side_r_A,
                                                              side_r_B, 90, 90, 90, 90) {
    name_figure = "Quadroside ";
}

void quadro::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ", " << get_sides_d() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ")\n";
}

std::string quadro::error(std::string str) {
    if (sides_a !=sides_c || sides_b != sides_d || angle_A != 90 || angle_B != 90 || angle_C != 90 || angle_D != 90) {
        throw std::length_error("Error creating a shape! Reason: Sides not equal or sides is not equal 4");
    }
    else{
        std::cout << "Alles gut!" << std::endl;
    }
    return str;
}
