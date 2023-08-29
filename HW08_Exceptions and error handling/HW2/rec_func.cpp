#include "rectangle.h"
#include <iostream>

#pragma once

int rectangle ::get_sides_a() { return sides_a; }

int rectangle::get_sides_b() { return sides_b; }

int rectangle::get_sides_c() { return sides_c; }

int rectangle::get_sides_d() { return sides_d; }

int rectangle::get_angle_A() { return angle_A; }

int rectangle::get_angle_B() { return angle_B; }

int rectangle::get_angle_C() { return angle_C; }

int rectangle::get_angle_D() { return angle_D; }

rectangle::rectangle(int side_a, int side_b, int side_c, int side_d, 
	int ang_A, int ang_B, int ang_C, int ang_D) : Figure() {
    name_figure = "fourside ";
    sides_ = 4;
    sides_a = side_a;
    sides_b = side_b;
    sides_c = side_c;
    sides_d = side_d;
    angle_A = ang_A;
    angle_B = ang_B;
    angle_C = ang_C;
    angle_D = ang_D;
}

void rectangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ", " << get_sides_d() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ")\n";
}

std::string rectangle::error(std::string str) {
    if (sides_a != 70) {
        throw std::length_error("Error creating a shape! Reason: Side A not equal 70");
    }
    return str;
}
