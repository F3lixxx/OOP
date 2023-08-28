#pragma once
#include "figure.h"

#pragma once

class triangle : public Figure {
protected:
    int sides_a = 0;
    int sides_b = 0;
    int sides_c = 0;
    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;

public:
    int get_sides_a();

    int get_sides_b();

    int get_sides_c();

    int get_angle_A();

    int get_angle_B();

    int get_angle_C();

    triangle(int side_a, int side_b, int side_c, int ang_A, int ang_B, int ang_C);

    void print_info() override;

    std::string error(std::string str) override;

};