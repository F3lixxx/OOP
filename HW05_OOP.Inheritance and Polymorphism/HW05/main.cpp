#include <iostream>
//#include <windows.h>

class Figure {
protected:
    std::string name_figure;

public:
    virtual void print_info() {
        std::cout << name_figure << std::endl;

    }
};

class triangle : public Figure {
private:
    int sides_a = 0;
    int sides_b = 0;
    int sides_c = 0;
    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;
public:
    int get_sides_a() { return sides_a; }

    int get_sides_b() { return sides_b; }

    int get_sides_c() { return sides_c; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }

    triangle(int side_a, int side_b, int side_c, int side_A, int side_B, int side_C) {
        name_figure = "Треугольник:";
        sides_a = side_a;
        sides_b = side_b;
        sides_c = side_c;
        angle_A = side_A;
        angle_B = side_B;
        angle_C = side_C;
    }

    void print_info() override{
        std::cout << '\n';
        std::cout << name_figure << std::endl;

        std::cout << "Стороны: ";
        std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << '\n';

        std::cout << "Углы: ";
        std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << '\n';
    }
};

class right_triangle : public triangle {
public:
    right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b)
            : triangle(side_A, side_B, side_C,
                       angle_a, angle_b, 90) {
        name_figure = "Прямоугольный треугольник: ";
    }
};

class isos_triangle : public triangle {
public:
    isos_triangle(int sideA, int sideB, int angleA1, int angleB1)
            : triangle(sideA, sideB, sideA,
                       angleA1, angleB1, angleA1) {
        name_figure = "Равнобедренный Треугольник: ";
    }
};

class equil_triangle : public isos_triangle {
public:
    equil_triangle(int side_e_a)
            : isos_triangle(side_e_a, side_e_a, 60, 60) {
        name_figure = "Равносторонний Треугольник: ";
    }
};

class rectangle_usual : public Figure {
private:
    int sides_a = 0;
    int sides_b = 0;
    int sides_c = 0;
    int sides_d = 0;
    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;
    int angle_D = 0;
public:
    int get_sides_a() { return sides_a; }

    int get_sides_b() { return sides_b; }

    int get_sides_c() { return sides_c; }

    int get_sides_d() { return sides_d; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }

    int get_angle_D() { return angle_D; }

    rectangle_usual(int side_r_a1, int side_r_b1, int side_r_c1, int side_r_d1,
                    int angle_r_a, int angle_r_b, int angle_r_c, int angle_r_d) {
        name_figure = "Четырёхугольник:";
        sides_a = side_r_a1;
        sides_b = side_r_b1;
        sides_c = side_r_c1;
        sides_d = side_r_d1;
        angle_A = angle_r_a;
        angle_B = angle_r_b;
        angle_C = angle_r_c;
        angle_D = angle_r_d;
    }

    void print_info() override{
        std::cout << '\n';
        std::cout << name_figure << std::endl;

        std::cout << "Стороны: ";
        std::cout << "a=" << get_sides_a() << " b=" << get_sides_b() << " c=" << get_sides_c() << " d=" << get_sides_d()
                  << '\n';

        std::cout << "Углы: ";
        std::cout << "A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D()
                  << '\n';
    }
};

class rectangle : public rectangle_usual {
public:
    rectangle(int side_r_A, int side_r_B, int angle_r_A)
            : rectangle_usual(side_r_A, side_r_B, side_r_A,
                              side_r_B, 90, 90, 90, 90) {
        name_figure = "Прямоугольник:";
    }
};

class cube : public rectangle {
public:
    cube(int cube_A)
            : rectangle(cube_A, cube_A, 90) {
        name_figure = "Квадрат:";
    }
};

class parallel : public rectangle_usual {
public:
    parallel(int parral_A, int parral_B,
             int parral_a, int parral_b)
            : rectangle_usual(parral_A, parral_B, parral_A, parral_B,
                              parral_a, parral_b, parral_a, parral_b) {
        name_figure = "Параллелограмм:";
    }
};

class rhomb : public parallel {
public:
    rhomb(int rhomb_A, int rhomb_a, int rhomb_b)
            : parallel(rhomb_A, rhomb_A,
                       rhomb_a, rhomb_b) {
        name_figure = "Ромб:";
    }
};

 void print(Figure *f){
     f->print_info();
 }

int main() {
/*
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);*/


    triangle t(10, 20, 30, 50, 60, 70);
    print(&t);

    right_triangle r_t(10, 20, 30, 50, 60);
    print(&r_t);

    isos_triangle i_t(10, 20, 50, 60);
    print(&i_t);

    equil_triangle e_t(10);
    print(&e_t);

    rectangle_usual r_u(10, 20, 30, 50, 60, 70, 80, 90);
    print(&r_u);

    rectangle rec(89, 79, 69);
    print(&rec);

    cube cub(89);
    print(&cub);

    parallel parallel(89, 79, 69, 59);
    print(&parallel);

    rhomb rhombs(89, 79, 69);
    print(&rhombs);

    return 0;
}
