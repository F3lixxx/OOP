#include "air.h"

air::air() : choice() {
    air_trans = "Flying transport";
    flying_carpet = "Flying carpet";
    eagle = "Eagle";
    broom = "Broom";
}

void air::type_race() {
    std::cout << air_trans << '\n';
}

void air::print(int trans){
    std::cout << "1 "<< flying_carpet << "\n2 "<< eagle
            << "\n3 "<< broom;
}