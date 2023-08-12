#include <iostream>

#define SUB(a, b) (a - (b))

int main (int argc, char** argv)
{
    int d = 6;
    int f = 5;
    int e = 2;
    std::cout << SUB(d, f) << std::endl;
    std::cout << SUB(d, f) * e << std::endl;
    std::cout << SUB(d, f + e) * e << std::endl;
}