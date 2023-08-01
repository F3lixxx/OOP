#include "func.h"
#include <valarray>
#include <cmath>

double func::math() {
    std::string value;
    double a;
    double b;
    x=a;
    y=b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout <<"Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> value;
    if (value == "1") {
        std:: cout << a << " + " << b << " = ";
        return a + b;
    }
    else if (value == "2") {
        std:: cout << a << " - " << b << " = ";
        return a - b;
}
    else if(value == "3"){
        std:: cout << a << " * " << b << " = ";
        return a * b;
    }
    else if(value == "4"){
        std:: cout << a << " / " << b << " = ";
        return a / b;
    }
    else if(value == "5"){
        std:: cout << a << " в степени " << b << " = ";
        return std::pow(a, b);
    }

}

