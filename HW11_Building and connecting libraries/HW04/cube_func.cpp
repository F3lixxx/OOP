#include "cube.h"

cube::cube(int cube_A)
        : rectangle(cube_A, cube_A, 90) {
    name_figure = "Квадрат:";
}
void cube:: print_info () {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << " d=" << get_sides_d() << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D() << '\n';
}