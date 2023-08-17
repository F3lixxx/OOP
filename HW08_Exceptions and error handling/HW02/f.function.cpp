#include <iostream>
#include "figure.h"
#include "error.h"

#pragma once

Figure::Figure(){
    sides_ = 0;
    name_figure = "Фигура: ";
}

void Figure:: print_info() {
    std::cout << name_figure << std::endl;
}

std::string Figure:: domain_err(std:: string str){
    if(sides_ != 0){
        throw std::length_error("Error creating a shape! sides are bigger then 0!");
    }
}