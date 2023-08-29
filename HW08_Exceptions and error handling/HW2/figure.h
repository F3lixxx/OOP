#pragma once
#include <iostream>
#include <string>

#pragma once

class Figure {
protected:
    std::string name_figure;
    int sides_;
public:
    Figure();

    virtual void print_info();

    virtual std::string error(std::string str);
};