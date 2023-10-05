#include <iostream>
#include "choice.h"
#include "terrain.h"
#include "lenght.h"
#include "air.h"



void print (){
    int n;
    std::cout << "Welcome to Racing simulator \n"
                 "1. Racing for land transport\n"
                 "2. Racing for fly transport\n";

    while((n < 1) || (n > 2))
    {
        std::cout <<"Choose type of racing ";
        std::cin >> n;
        if ((n < 1) || (n > 2)) {
            std::cout << "Wrong type!\n";
        }
    }
}

int main() {
    int leng = 0;
    choice choi;
    terrain ter;
    air ai;
    length len(leng);

    print();

    do {
        std::cout << "Enter Length(length must be positive): ";
        std::cin >> leng;
        if (leng < 0) {
            std::cout << "length is negative" << std::endl;
        }
    }
    while (leng < 0);
    std::cout << "Type of race: " << ai.type_race() << std::endl;
    std::cout << "Length: " << leng << std::endl;

    return 0;
}
