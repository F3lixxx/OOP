#include "rectangle.h"
#pragma once

class qube : public rectangle {
public:
    qube(int side_A, int ang_A);

    void print_info() override;

    std::string error(std::string str) override;
};