#include <iostream>

class Figure {
protected:
    int sides_a = 0;
    int sides_b = 0;
    int sides_c = 0;
    int sides_d = 0;
    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;
    int angle_D = 0;
    std::string name_figure;
    bool four_angle = true;

public:
    std::string get_name_figure(){ return name_figure;}

    int get_sides_a(){ return sides_a;}
    int get_sides_b(){ return sides_b;}
    int get_sides_c(){ return sides_c;}
    int get_sides_d(){ return sides_d;}
    int get_angle_A(){ return angle_A;}
    int get_angle_B(){ return angle_B;}
    int get_angle_C(){ return angle_C;}
    int get_angle_D(){ return angle_D;}

};

class triangle : public Figure {
public:
    triangle(int side_a, int side_b, int side_c, int side_A, int side_B, int side_C) {
         std::string name_figure = "Треугольник: \n";
        side_a = sides_a;
        side_b = sides_b;
        side_c = sides_c;
        side_A = angle_A;
        side_B = angle_B;
        side_C = angle_C;
    }

};
void print_fig(Figure &triangle){
    std::cout << '\n';
    std::cout << triangle.get_name_figure() << ":" << std::endl;

    std::cout << "Стороны:";
    std:: cout << "a=" << triangle.get_sides_a() <<", b=" << triangle.get_sides_b() << ", c=" << triangle.get_sides_c() << std::endl;
}


int main() {
    std::cout << "Количество сторон:" << std::endl;
    triangle triangl(1, 2, 3, 4, 5, 6);
    print_fig(triangl);

    return 0;
}
