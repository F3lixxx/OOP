#include "terrain.h"
#include <string>

terrain::terrain(int number_transport) : choice(number_transport) {
    ground = "Land Transport";
    camel = "Camel";
    fast_camel = "Fast Camel";
    centaur = "Centaur";
    bicycle_shoes = "Bicycle shoes";
}

void terrain::print(int transport){
    std::cout << ground << '\n';
    std::cout << "1 "<< camel << "\n2 "<< fast_camel
              << "\n3 "<< centaur << "\n3 " << bicycle_shoes;
}