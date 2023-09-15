#include "rectangle.h"
#pragma once

class qube : public rectangle {
public:
    qube(int side_A, int side_B, int side_C, int side_D, int ang_A, int ang_B,  int ang_C, int ang_D);

    void print_info() override;
};