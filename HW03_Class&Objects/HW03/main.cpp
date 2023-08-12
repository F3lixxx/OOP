#include <iostream>

class calculator {
public:
    double num1;
    double num2;

    void input_1() {
        std::cout << "Введите num1: ";
        std::cin >> num1;
    }

    void input_2(){
        std::cout << "Введите num2: ";
        std::cin >> num2;
    }

    double add() {
        double add;
        add = num1 + num2;
        std::cout << "num1" << '+' << "num2" << " = " << add << std::endl;
        return add;
    }

    double multiply() {
        double multi;
        multi = num1 * num2;
        std::cout << "num1" << '*' << "num2" << " = " << multi << std::endl;
        return multi;
    }

    double subtract_1_2() {
        double subt;
        subt = num2 - num1;
        std::cout << "num2" << '-' << "num1" << " = " << subt << std::endl;
        return subt;
    }

    double subtract_2_1() {
        double subt;
        subt = num1 - num2;
        std::cout << "num1" << '-' << "num2" << " = " << subt << std::endl;
        return subt;
    }

    double divide_1_2() {
        double div1;
        div1 = num1 / num2;
        std::cout << "num1" << '/' << "num2" << " = " << div1 << std::endl;
        return div1;
    }

    double divide_2_1() {
        double div2;
        div2 = num1 / num2;
        std::cout << "num1" << '/' << "num2" << " = " << div2 << std::endl;
        return div2;
    }

    bool set_num1(double num1) {
            while(this->num1 == 0) {
                std::cout << "Неверный ввод! " << std::endl;
                std::cout << "Введите num1: ";
                std::cin >> this->num1;
            }
        return true;
    }

    bool set_num2( double num2) {
        while( this->num2 == 0) {
            std::cout << "Неверный ввод! " << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> this->num2;
        }
        return true;
    }
};

int main() {
    calculator res{};
    while (true) {
        res.input_1();
        res.set_num1(res.num1);
        res.input_2();
        res.set_num2(res.num2);
        res.add();
        res.multiply();
        res.subtract_1_2();
        res.subtract_2_1();
        res.divide_1_2();
        res.divide_2_1();
        std::cout << '\n';
    }
}