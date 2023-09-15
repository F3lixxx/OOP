#include "isos.h"
#pragma once

class equil_triangle : public isos_triangle {
public:
    equil_triangle(int side_e_a, int side_e_b, int side_e_c, int ang_e_a, int ang_e_b, int ang_e_c);

    void print_info() override;
};