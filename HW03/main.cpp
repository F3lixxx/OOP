#include <iostream>

class calculator {
public:
    double num1;
    double num2;

    void input() {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;
    }

    double add() {
        int add;
        add = num1 + num2;
        std::cout << "num1" << '+' << "num2" << " = " << add << std::endl;
        return add;
    }

    double multiply() {
        int multi;
        multi = num1 * num2;
        std::cout << "num1" << '*' << "num2" << " = " << multi << std::endl;
        return multi;
    }

    double subtract_1_2() {
        int subt;
        subt = num2 - num1;
        std::cout << "num2" << '-' << "num1" << " = " << subt << std::endl;
        return subt;
    }

    double subtract_2_1() {
        int subt;
        subt = num1 - num2;
        std::cout << "num1" << '-' << "num2" << " = " << subt << std::endl;
        return subt;
    }

    double divide_1_2() {
        int div1;
        div1 = num1 / num2;
        std::cout << "num1" << '/' << "num2" << " = " << div1 << std::endl;
        return div1;
    }

      bool set_num1(double num1) {
          if (this->num1 == 0){
              std::cout << "Неверный ввод! " << std::endl;
              std::cout << "Введите num1: ";
              std::cin >> this-> num1;
              return false;
      }
          else {
              return true;
          }
      }

    bool set_num2(double num2) {
        if (this->num2 == 0) {
            std::cout << "Неверный ввод! " << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> this-> num1;
            return false;
        }

        else {
            return true;
        }
    }

    double divide_2_1() {
        int div2;
        div2 = num1 / num2;
        std::cout << "num1" << '/' << "num2" << " = " << div2 << std::endl;
        return div2;
    }
    };

    int main() {
        double number1;
        double number2;
            calculator res{};
            while (true) {
                res.input();
                res.set_num1(number1);
                res.set_num2(number2);
                res.add();
                res.multiply();
                res.subtract_1_2();
                res.subtract_2_1();
                res.divide_1_2();
                res.divide_2_1();
                std::cout << '\n';
            }
      return 0;
    }