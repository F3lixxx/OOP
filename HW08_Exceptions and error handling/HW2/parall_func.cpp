#include "parallel.h"

parall::parall (int side_A, int side_B, int side_C, int side_D, int ang_A, int ang_B, int ang_C, int ang_D)
             : rectangle(side_A, side_B, side_C,
                    side_D, ang_A, ang_B, ang_C, ang_D) {
    name_figure = "Parallelogram ";
    if (sides_a != sides_c && sides_b != sides_d) {
        throw std::length_error("Error creating a Parallelogram! Reason: One of sides not equal");
    }
    else if (angle_A != angle_C && angle_B != angle_D){
        throw std::length_error("Error creating a Parallelogram! Reason: One of Angles not equal");
    }
}

void parall::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ", " << get_sides_d() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ")\n";
}