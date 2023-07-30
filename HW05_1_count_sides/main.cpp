#include <iostream>
#include <windows.h>

class Figure {
protected:
    int sides_count;
    std::string name_figure;

public:

    std::string get_name() { return name_figure; }

    int get_sides_count() const { return sides_count; }

};

class figure : public Figure {
public:
    figure(int sides) : Figure() {
        name_figure = "Фигура: ";
        sides_count = sides;
    }
};

class triangle : public figure {
public:
    triangle(int sides) : figure(sides) {
        name_figure = "Треугольник: ";
        //sides_count = sides;
    }
};

class quadrangle : public figure {
public:
    quadrangle(int sides) : figure(sides) {
        name_figure = "Квадрат: ";
    }
};

void print(Figure &figure) {
    std::cout << figure.get_name() << figure.get_sides_count() << std::endl;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Количество сторон:" << std::endl;

    figure f(0);
    print(f);

    triangle tri(3);
    print(tri);

    quadrangle quad(4);
    print(quad);


    return 0;
}
