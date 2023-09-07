#include "rhomb.h"

rhomb::rhomb(int side_A, int ang_A, int ang_B)
        : rectangle(side_A, side_A, side_A,
                    side_A, ang_A, ang_B, ang_A, ang_B) {
    name_figure = "Rhomb ";
}

void rhomb::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ", " << get_sides_d() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ")\n";
}

std::string rhomb::error(std::string str) {
    if (sides_a != sides_b != sides_c != sides_d && angle_A != angle_C && angle_B != angle_D) {
        throw std::length_error("Error creating a shape! Reason: One of sides not equal or sides is not equal 4");
    }
    else{
        std::cout << "Alles gut!" << std::endl;
    }
    return str;
}

