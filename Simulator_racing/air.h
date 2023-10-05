#include "choice.h"
#pragma once

class air: public choice {
private:
    std::string flying_carpet;
    std::string eagle;
    std::string broom;
public:
    air(int num);

    void print (int trans);
};
