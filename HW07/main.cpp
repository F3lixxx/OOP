#include <iostream>
#include <windows.h>


#define MODE 1
#if defined MODE

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
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);


#if MODE == 1
    add();
#elif MODE == 0
    std::cout << "Работаю в режиме тренировки " << std::endl;
#else

#error "Неизвестный режим. Завершение работы."
#endif
    system ("pause");
    return 0;
}
#endif