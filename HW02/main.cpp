#include <iostream>
#include <string>
//#include <windows.h>

enum month {
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

std::string mn(month num){
    std::string id_month;
    switch (num) {
        case Январь:
            std:: cout << "Январь";
            break;
        case Февраль:
            std:: cout << "Февраль";
            break;
        case Март:
            std:: cout << "Март";
            break;
        case Апрель:
            std:: cout << "Апрель";
            break;
        case Май:
            std:: cout << "Май";
            break;
        case Июнь:
            std:: cout << "Июнь";
            break;
        case Июль:
            std:: cout << "Июль";
            break;
        case Август:
            std:: cout << "Август";
            break;
        case Сентябрь:
            std:: cout << "Сентябрь";
            break;
        case Октябрь:
            std:: cout << "Октябрь";
            break;
        case Ноябрь:
            std:: cout << "Ноябрь";
            break;
        case Декабрь:
            std:: cout << "Декабрь";
            break;

    }
    return id_month;
}

int main() {
  /*  SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);*/

    month month_number = Январь;
    int user_number;

    while(true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> user_number;month_number = static_cast<month>(user_number);
        std::string monthName = mn(month_number);
        std:: cout << '\n';
        if(user_number < 0 || user_number > 12) {
                std::cout << "Неправильный номер! " << '\n';
                continue;
        }
        if (user_number == 0) {
            std::cout << "До свидания";
            break;
        }
    }
    return 0;
}
