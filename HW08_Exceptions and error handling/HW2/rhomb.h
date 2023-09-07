#include "rectangle.h"
#pragma once

class rhomb : public rectangle {
public:
    rhomb(int side_A, int ang_A, int ang_B);

    void print_info() override;

    std::string error(std::string str) override;
};