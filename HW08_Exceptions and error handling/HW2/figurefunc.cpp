#include <iostream>
#include "figure.h"

#pragma once

Figure::Figure() {
    sides_ = 0;
    name_figure = "Фигура: ";
}

void Figure::print_info() {}

std::string Figure::error(std::string word) {
    if (sides_ != 0) {
        throw std::length_error("Error creating a shape! sides are bigger then 0!");
    }
    return word;
}