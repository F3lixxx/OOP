#include "leaver.h"

namespace Leaver
{
    std::string Leave::leave() {
        std::string name;
        std::cout << "Enter your name: ";
        std::cin >> name;
        std::string hi = "Bye";
        std::string plus = hi + ", " + name;
        //plus.append(hi).append(", ").append(name);
        std::cout << plus << std::endl;
        return plus;
    }
}