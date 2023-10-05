#include "choice.h"
#pragma once

class air: public choice {
private:
    std::string flying_carpet;
    std::string eagle;
    std::string broom;
public:
    air();

    void type_race();

    void print (int trans);
};
