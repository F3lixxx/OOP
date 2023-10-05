#include "air.h"

air::air(int number_transport) : choice(number_transport) {
    air_trans = "Flying transport";
    flying_carpet = "Flying carpet";
    eagle = "Eagle";
    broom = "Broom";
}

void air::print(int trans){
    std::cout << air_trans << '\n';
    std::cout << "1 "<< flying_carpet << "\n2 "<< eagle
            << "\n3 "<< broom;
}