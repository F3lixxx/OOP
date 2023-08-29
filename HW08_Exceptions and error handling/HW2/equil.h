#include "isos.h"
#pragma once

class equil_triangle : public isos_triangle {
public:
    equil_triangle(int side_e_a);

    void print_info() override;

    std::string error(std::string str) override;
};