#include "isos_tri.h"


isos_triangle::isos_triangle(int sideA, int sideB, int angleA1, int angleB1)
        : triangle(sideA, sideB, sideA,
                   angleA1, angleB1, angleA1) {
    name_figure = "Равнобедренный Треугольник: ";
}
void isos_triangle::print_info () {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" <<get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << '\n';
}