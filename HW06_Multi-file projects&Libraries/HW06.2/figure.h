#include <iostream>
#include <string>

#pragma once

class Figure {
protected:
    std::string name_figure;
    int sides_;
public:
    Figure();

    void print_info();
};