#include <iostream>
#include "figure.h"

Figure::Figure(){
    sides_ = 0;
    name_figure = "Фигура: ";
}

 void Figure:: print_info() {
    std::cout << name_figure << std::endl;
}