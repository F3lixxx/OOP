#include "right_tri.h"

right_triangle::right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b)
        : triangle(side_A, side_B, side_C, angle_a, angle_b, 90) {
    name_figure = "Прямоугольный треугольник: ";
}

void right_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure << "(cтороны: " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ';'
              <<" Углы: " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")" << " Создан" << '\n';
}


/*
std::string right_triangle:: domain_error() {
    if (angle_B != 90) {
        throw std::length_error("Error creating a shape! angle B are not equal 90!");
    }
}*/
