#include "quadro.h"
#include <iostream>

#pragma once

quadro::quadro(int side_r_A, int side_r_B, int side_r_C, int side_r_D, int angle_A, int angle_B, int angle_C, int angle_D)
: rectangle(side_r_A, side_r_B, side_r_C,side_r_D,
            angle_A, angle_B, angle_C, angle_D) {
    name_figure = "Quadroside ";
    if (sides_a !=sides_c || sides_b != sides_d ) {
        throw std::length_error("Error creating a Quadroside! Reason: Sides not equal");
    }
    else if ( angle_A != 90 || angle_B != 90 || angle_C != 90 || angle_D != 90){
        throw std::length_error("Error creating a Quadroside! Reason: Some Angles not equal 90 degrees");
    }
}

void quadro::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ", " << get_sides_d() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ")" <<std::endl;
}