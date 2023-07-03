#include <iostream>
#include <windows.h>

class counter{
    private :
    int incr=1;
    std::string point;
public:
    std::string add(){
            std::string point;
            std:: cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> point;
            if (point == "+") {
                incr += 1;
            } else if (point == "-") {
                incr--;
            } else if (point == "=") {
                std::cout << incr << std::endl;
            }
            if (point == "x") {
                std::cout << "До свидания!" << std::endl;
                return 0;
            }
        }
};

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    counter s;
    while(true) {
        s.add();
    }
    return 0;
}