#include "rectangle.h"
#pragma once

class quadro : public rectangle {
public:
    quadro(int side_r_A, int side_r_B);

    void print_info() override;

    std::string error(std::string str) override;
};