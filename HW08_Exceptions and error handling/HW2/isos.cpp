#include "isos.h"


isos_triangle::isos_triangle(int sideA, int sideB, int sideC, int angleA1, int angleB1, int angleC1)
    : triangle(sideA, sideB, sideC,
        angleA1, angleB1, angleC1) {
    name_figure = "Isos Triangle ";
    if (sides_a != sides_c) {
        throw std::length_error("Error creating a Isosceles triangle! Reason: Side A is not equal Side C and Angle A not equal angle C");
    }
    else if (angle_A != angle_C){
        throw std::length_error("Error creating a Isosceles triangle! Reason: Angle A is not equal Side C and Angle A not equal angle C");
    }
}
void isos_triangle::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ")\n"<<std::endl;
}