#include "rectangle_usual.h"
#pragma once

class rectangle : public rectangle_usual {
public:
    rectangle(int side_r_A, int side_r_B, int angle_r_A);

    void print_info ();
};