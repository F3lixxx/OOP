#include <iostream>
#include <string>

#pragma once

class counter {
private :
    int incr = 1;
public:
    counter(std::string a);

    bool add(std::string &value);
};