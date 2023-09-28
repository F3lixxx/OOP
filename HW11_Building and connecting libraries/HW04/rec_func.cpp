#include "rectangle_usual.h"

int rectangle_usual:: get_sides_a() { return sides_a; }

int rectangle_usual:: get_sides_b() { return sides_b; }

int rectangle_usual::get_sides_c() { return sides_c; }

int rectangle_usual::get_sides_d() { return sides_d; }

int rectangle_usual::get_angle_A() { return angle_A; }

int rectangle_usual::get_angle_B() { return angle_B; }

int rectangle_usual::get_angle_C() { return angle_C; }

int rectangle_usual::get_angle_D() { return angle_D; }

rectangle_usual:: rectangle_usual(int side_r_a1, int side_r_b1, int side_r_c1, int side_r_d1,
                int angle_r_a, int angle_r_b, int angle_r_c, int angle_r_d) {
    name_figure = "Четырёхугольник:";
    sides_a = side_r_a1;
    sides_b = side_r_b1;
    sides_c = side_r_c1;
    sides_d = side_r_d1;
    angle_A = angle_r_a;
    angle_B = angle_r_b;
    angle_C = angle_r_c;
    angle_D = angle_r_d;
}
void rectangle_usual:: print_info () {
    std::cout << '\n';
    std::cout << name_figure << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << " d=" << get_sides_d() << '\n';

    std::cout << "Углы: ";
    std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D() << '\n';
}