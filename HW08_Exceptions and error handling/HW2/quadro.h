#include "rectangle.h"
#pragma once

class quadro : public rectangle {
public:
    quadro(int side_r_A, int side_r_B, int side_r_C, int side_r_D, int angle_A, int angle_B, int angle_C, int angle_D);

    void print_info() override;
};