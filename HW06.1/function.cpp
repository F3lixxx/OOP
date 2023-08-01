#include <iostream>
#include "functions.h"

counter::counter(std::string a) {
    if (a == "yes") {
        std::cout << "Enter the initial counter value: ";
        std::cin >> incr;
    } else if (a == "no") {
        incr = 1;
    }
}

bool counter::add(std:: string& value){
    if (value == "+") {
        incr += 1;
        return false;
    }
    else if (value == "-") {
        incr--;
        return false;
    }
    else if (value == "=") {
        std::cout << incr << std::endl;
        return false;
    }
    if(value == "x"){
        std:: cout << "BYE!";
        return true;
    }
}
