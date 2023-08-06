#include <iostream>

#ifndef MODE
#define MODE 1
#endif

#if MODE == 1
void add () {
    int a;
    int b;
    int c;
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите 1-число: ";
    std:: cin >> a;
    std::cout << "Введите 2-число: ";
    std:: cin >> b;
    c = a + b;
    std::cout << "Результат сложения: " << c << std::endl;
    }
#endif
int main() {

#if MODE == 1
    add();
#elif MODE == 0
    std::cout << "Работаю в режиме тренировки " << std::endl;
#else
#error not allowed
#endif

    return 0;
}

