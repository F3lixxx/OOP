#include "equil.h"

equil_triangle::equil_triangle(int side_e_a)
        : isos_triangle(side_e_a, side_e_a, 60, 60) {
    name_figure = "Равносторонний Треугольник: ";
}

void equil_triangle::print_info () {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" <<get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << '\n';
}

std::string isos_triangle:: domain_err(std:: string str) {
    if(sides_a != sides_b && angle_A || angle_C != 60){
        throw std::length_error("Ошибка создания фигуры. Причина: Сторона А не равна стороне С и угол А и С не равны 60 градусов");
    }
    return str;
}