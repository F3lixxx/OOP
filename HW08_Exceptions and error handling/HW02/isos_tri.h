#include "triangle_8.h"
#pragma once

class isos_triangle : public triangle {
public:

    isos_triangle(int sideA, int sideB, int angleA1, int angleB1);

    void print_info ();
/*
    std::string domain_error() override;*/
};