#include "right_tri.h"

right_triangle::right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b)
        : triangle(side_A, side_B, side_C, angle_a, angle_b, 90) {
    name_figure = "Прямоугольный треугольник: ";
}

void right_triangle::print_info () {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << '\n';
}