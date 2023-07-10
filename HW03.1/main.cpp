#include <iostream>

class counter{
private :
    int incr=1;
public:
    counter (std::string a){
        if (a == "yes") {
            std:: cout << "Enter the initial counter value: ";
            std:: cin >> incr;
        }
        else if (a == "no"){
            incr = 1;
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
            std:: cout << "BYE!";
            return true;
        }
    }
};

int main() {
    std::string answer;
    std:: cout << "Do you want to specify an initial counter value? Enter yes or no: ";
    std:: cin >> answer;
    counter s(answer);
    std:: string value;
    while(true) {
        std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
        std::cin >> value;
        s.add(value);
        if (value == "x"){
            break;
        }
    }
}