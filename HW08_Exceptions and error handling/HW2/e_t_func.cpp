#include "equil.h"

equil_triangle::equil_triangle(int side_e_a, int side_e_b, int side_e_c, int ang_e_a, int ang_e_b, int ang_e_c)
    : isos_triangle(side_e_a, side_e_b, side_e_c, ang_e_a, ang_e_b, ang_e_c) {
    name_figure = "Equil Triangle ";
    if (sides_a != sides_c) {
        throw std::length_error("Error creating a Equal Triangle! Reason: Side A not equal Side B and Angle A not equal Angle C");
    }
    else if (angle_A != 60) {
        throw std::length_error("Error creating a Equal Triangle! Reason: Angle A not equal 60d degrees");
    }
    else if (angle_B != 60) {
        throw std::length_error("Error creating a Equal Triangle! Reason: Angle B not equal 60d degrees");
    }
    else if (angle_C != 60) {
        throw std::length_error("Error creating a Equal Triangle! Reason: Angle C not equal 60d degrees");
    }
}

void equil_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;


    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")\n" <<std::endl;
}