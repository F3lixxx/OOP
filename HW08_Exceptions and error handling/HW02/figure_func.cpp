#include <iostream>
#include "figure.h"

Figure::Figure(){
    sides_ = 0;
    name_figure = "Фигура: ";
}

 void Figure:: print_info() {
    std::cout << name_figure << std::endl;
}

void Figure:: domain_error(){
    if(sides_ != 0){
        throw std::length_error("Error creating a shape! sides are bigger then 0!");
    }
}