#include "choice.h"
#pragma once

class terrain: public choice {
private:
    std::string camel;
    std::string fast_camel;
    std::string centaur;
    std::string bicycle_shoes;
public:
    terrain(int num);

    void print(int transport);
};
