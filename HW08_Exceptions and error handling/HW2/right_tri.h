#pragma once
#include "tri.h"


class right_triangle : public triangle {
public:

    right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b);

    void print_info() override;

    std::string error(std::string str) override;
};