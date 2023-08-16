#include "isos_tri.h"
#pragma  once

class equil_triangle : public isos_triangle {
public:
    equil_triangle(int side_e_a);

    void print_info ();
/*
    std::string domain_error() override;*/
};