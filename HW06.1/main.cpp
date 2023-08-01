#include <iostream>
#include "functions.h"

int main() {
    std::string answer;
    std::cout << "Do you want to specify an initial counter value? Enter yes or no: ";
    std::cin >> answer;
    counter s(answer);
    std::string value;
    while (true) {
        std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
        std::cin >> value;
        s.add(value);
        if (value == "x") {
            break;
        }
    }

}