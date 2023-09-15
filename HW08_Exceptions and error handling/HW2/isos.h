#pragma once
#include "tri.h"

#pragma once

class isos_triangle : public triangle {
public:

    isos_triangle(int sideA, int sideB, int sideC, int angleA1, int angleB1, int angleC1);

    void print_info() override;
};