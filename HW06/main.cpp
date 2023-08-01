#include <iostream>
#include "func.h"
#include <windows.h>


int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    func f{};
    std::cout << f.math() << std::endl;

    return 0;
    }