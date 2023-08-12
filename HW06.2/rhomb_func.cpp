#include "rhomb.h"

rhomb::rhomb(int rhomb_A, int rhomb_a, int rhomb_b)
        : parallel(rhomb_A, rhomb_A,
                   rhomb_a, rhomb_b) {
    name_figure = "Ромб:";
}

void rhomb::print_info() {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << " d=" << get_sides_d()
              << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D()
              << '\n';
}