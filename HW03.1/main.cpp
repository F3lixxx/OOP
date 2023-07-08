#include <iostream>
#include <windows.h>

class counter{
    private :
    int incr=1;
public:
    void set_incr(){
        std:: string a;
        std:: cout << "Do you want to specify an initial counter value? Enter yes or no: ";
        std:: cin >> a;
        if (a == "yes") {
            std:: cout << "Enter the initial counter value: ";
            std:: cin >> incr;
        }
    }
    std::string ex(){
        std::string exit;
        while(true) {
            if (exit == "x") {
                std::cout << "До свидания!" << std::endl;
                break;
            }
        }
    }
    bool add(std:: string& value) {
            if (value == "+") {
                incr += 1;
                return false;
            }
            else if (value == "-") {
                incr--;
                return false;
            }
            else if (value == "=") {
                std::cout << incr << std::endl;
                return false;
            }
            if(value == "x"){
                std:: cout << "До свидания!";
                return true;
            }
        }
    };

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    counter s;
    std:: string value;
    s.set_incr();
   while(true) {
       std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
       std::cin >> value;
        s.add(value);
        if (value == "x"){
            break;
        }
    }
}