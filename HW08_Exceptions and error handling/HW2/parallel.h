#include "rectangle.h"
#pragma once


class parall : public rectangle {
public:
    parall(int side_A, int side_B, int ang_A, int ang_B);

    void print_info() override;

    std::string error(std::string str) override;
};