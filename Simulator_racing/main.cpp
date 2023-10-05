#include <iostream>
#include "choice.h"
#include "terrain.h"
#include "lenght.h"
#include "air.h"


int main() {
    int n;
    int leng;
    int number_transport;
    choice choi(n);
    std::cout << "Welcome to Racing simulator \n"
                 "1. Racing for land transport\n"
                 "2. Racing for fly transport\n";
   do{
       std::cout <<"Choose type of racing ";
       std::cin >> n;
   }
    while(n < 1 || n > 2);
    {
           if (n == 1) {
               terrain ter(n);
           } else if (n == 2) {
               air ai(n);
           } else {
               std::cout << "Wrong type!\n";
           }
       }

    length len(leng);
    do {
        std::cout << "Enter Length(length must be positive): ";
        std::cin >> leng;
    }
    while(leng < 0); {
        if (leng < 0) {
            std::cout << "length is negative";
        }
        }
    std::cin >> number_transport;


    return 0;
}
