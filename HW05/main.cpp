#include <iostream>

class figure {
protected:
    int sides_count = 0;
    std::string name = "Фигура: ";

public:
    figure(int side_count) : sides_count(side_count) {}

    void get_sides_count() {
        std::cout << name << sides_count << std::endl;
    }
};

class triangle : public figure {
public:
    triangle(int side_trian) : figure(side_trian) {
        std::string name2 = "Трехугольник: ";
        std::cout << name2 << side_trian << std::endl;
    }
};

class quadrangle : public figure {
public:
    quadrangle(int side_quadr) : figure(side_quadr) {
        std::string name1 = "Четырехугольник: ";
        std::cout << name1 << side_quadr << std::endl;
    }
};


int main() {
    std::cout << "Количество сторон:" << std::endl;
    figure f(0);
    f.get_sides_count();
    triangle t(3);
    quadrangle q(4);

}
