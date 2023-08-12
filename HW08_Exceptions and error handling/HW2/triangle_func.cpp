#include "triangle.h"
#include <iostream>

int triangle::get_sides_a() { return sides_a; }

int triangle::get_sides_b() { return sides_b; }

int triangle::get_sides_c() { return sides_c; }

int triangle::get_angle_A() { return angle_A; }

int triangle::get_angle_B() { return angle_B; }

int triangle::get_angle_C() { return angle_C; }

triangle::triangle(int side_a, int side_b, int side_c, int side_A, int side_B, int side_C) : Figure(){
    name_figure = "Треугольник:";
    sides_ = 3;
    sides_a = side_a;
    sides_b = side_b;
    sides_c = side_c;
    angle_A = side_A;
    angle_B = side_B;
    angle_C = side_C;
}

void triangle:: print_info() {
        std::cout << '\n';
        std::cout << name_figure << std::endl;

        std::cout << "Стороны: ";
        std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << '\n';

        std::cout << "Углы: ";
        std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << '\n';
    }