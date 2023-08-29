#pragma once
#include "tri.h"

#pragma once

class isos_triangle : public triangle {
public:

    isos_triangle(int sideA, int sideB, int angleA1, int angleB1);

    void print_info() override;

    std::string error(std::string str) override;
};