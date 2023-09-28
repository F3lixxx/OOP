#include "parallel.h"

parallel::parallel(int parral_A, int parral_B,
                   int parral_a, int parral_b)
        : rectangle_usual(parral_A, parral_B, parral_A, parral_B,
                          parral_a, parral_b, parral_a, parral_b) {
    name_figure = "Параллелограмм:";
}

void parallel::print_info() {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << " d=" << get_sides_d()
              << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D()
              << '\n';
}