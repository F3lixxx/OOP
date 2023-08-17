#include "trian.h"

#pragma once


class right_triangle : public triangle {
public:

    right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b);

    void print_info ();

    std::string domain_err(std:: string str) override;
};