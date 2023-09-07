#include "Qube.h"

qube::qube(int side_A, int ang_A)
                : rectangle(side_A, side_A, side_A,
            side_A, ang_A, ang_A, ang_A, ang_A) {
    name_figure = "Quadroside ";
}

void qube::print_info() {
    std::cout << '\n';
    std::cout << name_figure;

    std::cout << "(sides " << get_sides_a() << ", " << get_sides_b() << ", " << get_sides_c() << ", " << get_sides_d() << "; ";

    std::cout << "angle " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ")\n";
}

std::string qube::error(std::string str) {
    if (sides_a != sides_b != sides_c != sides_d && angle_A != 90 && angle_B != 90 && angle_C != 90 && angle_D != 90) {
        throw std::length_error("Error creating a shape! Reason: One of sides not equal or sides is not equal 4");
    }
    else{
        std::cout << "Alles gut!" << std::endl;
    }
    return str;
}
