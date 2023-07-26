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
    bool four_angle = false;

public:
    std::string get_name_figure(){ return name_figure;}
    int get_four_angle(){return four_angle;}

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
        name_figure = "Треугольник: ";
        sides_a = side_a;
        sides_b = side_b;
        sides_c = side_c = 90;
        angle_A = side_A;
        angle_B = side_B;
        angle_C = side_C;
    }

};
class right_triangle : public triangle{
public:
    right_triangle(int sideA, int sideB, int sideC, int sideA1, int sideB1, int sideC1) : triangle(sideA, sideB, sideC, sideA1, sideB1, 90) {

        name_figure = "Равнобедренный Треугольник: ";
    }
};

void print_fig(Figure &triangle){
    std::cout << '\n';
    std::cout << triangle.get_name_figure() << std::endl;

    std::cout << "Стороны: ";
    std:: cout << "a=" << triangle.get_sides_a() <<" b=" << triangle.get_sides_b() << " c=" << triangle.get_sides_c() << std::endl;
    if (triangle.get_four_angle()){std::cout << ", d = " << triangle.get_sides_d() << std::endl;}
    //else { std::cout << std::endl; }

    std::cout << "Углы: ";
    std:: cout << "A=" << triangle.get_angle_A() <<" B=" << triangle.get_angle_B() << " C=" << triangle.get_angle_C() << std::endl;
    if (triangle.get_four_angle()){std::cout << ", D = " << triangle.get_angle_D() << std::endl;}
    //else { std::cout << std::endl; }

}


int main() {
    triangle triangl(1, 2, 3, 4, 5, 6);
    print_fig(triangl);

    right_triangle r_t(11, 22, 33, 44, 55, 66);
    print_fig(r_t);
    return 0;
}
