#include <iostream>
#include <windows.h>

class Figure {
protected:
    int sides_count;
    std::string name_figure;

public:
    Figure(){
        name_figure = "Фигура: ";
        sides_count = 0;
    }

    std::string get_name() { return name_figure; }

    int get_sides_count() const { return sides_count; }

};

class triangle : public Figure {
public:
    triangle(int sides) : Figure() {
        name_figure = "Треугольник: ";
        sides_count = 3;
    }
};

class quadrangle : public Figure {
public:
    quadrangle(int sides) : Figure() {
        name_figure = "Квадрат: ";
        sides_count = 4;
    }
};

void print(Figure &figure) {
    std::cout << figure.get_name() << figure.get_sides_count() << std::endl;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Количество сторон:" << std::endl;

    Figure f;
    print(f);

    triangle tri(2);
    print(tri);

    quadrangle quad(5);
    print(quad);


    return 0;
}
