#include "terrain.h"
#include <string>

terrain::terrain() : choice() {
    ground = "Land Transport";
    camel = "Camel";
    fast_camel = "Fast Camel";
    centaur = "Centaur";
    bicycle_shoes = "Bicycle shoes";
}

void terrain::type_race() {
    std::cout << ground << '\n';
}

void terrain::print(int transport){
    std::cout << "1 "<< camel << "\n2 "<< fast_camel
              << "\n3 "<< centaur << "\n4 " << bicycle_shoes;
}