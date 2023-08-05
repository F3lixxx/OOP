#include <iostream>
#include <windows.h>

class Figure {
protected:
    std::string name_figure;
    int sides_;
public:
    Figure() {
        sides_ = 0;
        name_figure = "Фигура: ";
    }

    virtual bool check() {
        if (sides_ == 0) {
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }

    virtual void print_info() {
        std::cout << name_figure << std::endl;
    }

};

class triangle : public Figure {
protected:
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

    triangle(int side_a, int side_b, int side_c, int side_A, int side_B, int side_C) : Figure() {
        name_figure = "Треугольник:";

        sides_ = 3;
        sides_a = side_a;
        sides_b = side_b;
        sides_c = side_c;
        angle_A = side_A;
        angle_B = side_B;
        angle_C = side_C;
    }

    bool check() override {
        if (sides_ == 3 && angle_A + angle_B + angle_C == 180) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }

    void print_info() override {
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
        sides_ = 3;
    }
    bool check() override {
        if (sides_ == 3 && angle_C == 90) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class isos_triangle : public triangle {
public:
    isos_triangle(int sideA, int sideB, int sideC, int angleA1, int angleB1, int angleC1)
            : triangle(sideA, sideB, sideA,
                       angleA1, angleB1, angleA1) {
        name_figure = "Равнобедренный Треугольник: ";
        sides_ = 3;
    }
    bool check() override {
        if (sides_a = sides_c, angle_A = angle_C) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }

};

class equil_triangle : public isos_triangle {
public:
    equil_triangle(int side_e_a)
            : isos_triangle(side_e_a, side_e_a, side_e_a, 60, 60, 60) {
        name_figure = "Равносторонний Треугольник: ";
        sides_ = 3;
    }

    bool check() override {
        if (sides_a = sides_b = sides_c, angle_A == 60 && angle_B == 60 && angle_C == 60) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class rectangle_usual : public Figure {
protected:
    int sides_a = 0;
    int sides_b = 0;
    int sides_c = 0;
    int sides_d = 0;
    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;
    int angle_D = 0;
public:
    int get_sides_k() { return sides_a; }

    int get_sides_l() { return sides_b; }

    int get_sides_m() { return sides_c; }

    int get_sides_n() { return sides_d; }

    int get_angle_K() { return angle_A; }

    int get_angle_L() { return angle_B; }

    int get_angle_M() { return angle_C; }

    int get_angle_N() { return angle_D; }

    rectangle_usual(int _k, int _l, int _m, int _n,
                    int K, int L, int M, int N) {
        name_figure = "Четырёхугольник:";
        sides_ = 4;
        sides_a = _k;
        sides_b = _l;
        sides_c = _m;
        sides_d = _n;
        angle_A = K;
        angle_B = L;
        angle_C = M;
        angle_D = N;
    }
    bool check() override {
        if (sides_ == 4 && angle_A + angle_B + angle_C + angle_D == 360) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }

    void print_info() override {
        std::cout << "Стороны: ";
        std::cout << "a=" << get_sides_k() << " b=" << get_sides_l() << " c=" << get_sides_m() << " d=" << get_sides_n()
                  << '\n';

        std::cout << "Углы: ";
        std::cout << "A=" << get_angle_K() << " B=" << get_angle_L() << " C=" << get_angle_M() << " D="
                  << get_angle_N() << '\n';
    }
   /* void print() override {
        std::cout << std::endl;
        std::cout << name_figure << std::endl;

        if () {
            std::cout << "Правильная" << std::endl;
        } else {
            std::cout << "Неправильная" << std::endl;;
        }

        std::cout << "Количество сторон: " << sides_ << std::endl;


        std::cout << "Стороны: ";
        std::cout << "a=" << get_sides_k() << " b=" << get_sides_l() << " c=" << get_sides_m() << " d=" << get_sides_n()
                  << '\n';

        std::cout << "Углы: ";
        std::cout << "A=" << get_angle_K() << " B=" << get_angle_L() << " C=" << get_angle_M() << " D="
                  << get_angle_N() << '\n';
    }*/
};

class rectangle : public rectangle_usual {
public:
    rectangle(int side_K, int side_L)
            : rectangle_usual(side_K, side_L, side_K, side_L, 90, 90, 90, 90) {
        name_figure = "Прямоугольник:";
    }

    bool check() override {
        if (sides_a == sides_c && sides_b == sides_c, angle_A == 90, angle_B == 90, angle_C == 90, angle_D == 90) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class cube : public rectangle {
public:
    cube(int cube_k)
            : rectangle(cube_k, cube_k) {
        name_figure = "Квадрат:";
    }

    bool check() override {
        if (sides_a == sides_b == sides_c == sides_d && angle_A == 90, angle_B == 90, angle_C == 90, angle_D == 90) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }

};

class parallel : public rectangle_usual {
public:
    parallel(int parral_A, int parral_B, int parral_C, int parral_D,
             int parral_a, int parral_b, int parral_c, int parral_d)
            : rectangle_usual(parral_A, parral_B, parral_C = parral_A, parral_D = parral_B,
                              parral_a, parral_b, parral_c = parral_a, parral_d = parral_b) {
        name_figure = "Параллелограмм:";
        sides_ = 4;
    }

    bool check() override {
        if (sides_a == sides_b && sides_c == sides_d && angle_A == angle_C, angle_B == angle_D) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class rhomb : public parallel {
public:
    rhomb(int rhomb_A, int rhomb_a, int rhomb_b)
            : parallel(rhomb_A, rhomb_A, rhomb_A, rhomb_A,
                       rhomb_a, rhomb_b, rhomb_a, rhomb_b) {
        name_figure = "Ромб:";
        sides_ = 4;
    }

    bool check() override {
        if (sides_a == sides_b == sides_c == sides_d && angle_A == angle_C, angle_B == angle_D) {

            std::cout << std::endl << name_figure << std::endl;
            std::cout << "Правильная" << std::endl;
            std::cout << "Количество сторон: " << sides_ << std::endl;
            return true;
        } else {
            std::cout << name_figure << std::endl;
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);


    Figure f;
    f.print_info();
    f.check();

    triangle t(10, 20, 30, 50, 60, 70);
    t.check();
    t.print_info();

    right_triangle r_t(10, 20, 30, 50, 60);
    r_t.check();
    r_t.print_info();

    isos_triangle i_t(10, 20, 50, 60, 70, 80);
    i_t.check();
    i_t.print_info();

    equil_triangle e_t(10);
    e_t.check();
    e_t.print_info();

    rectangle_usual r_u(10, 20, 30, 40, 90, 90, 90, 90);
    r_u.check();
    r_u.print_info();

    rectangle rec(10, 20);
    rec.check();
    rec.print_info();

    cube cub(89);
    cub.check();
    cub.print_info();

    parallel paralel(89, 79, 69, 59, 66, 77, 11, 22);
    paralel.check();
    paralel.print_info();

    rhomb rhombs(89, 79, 69);
    rhombs.check();
    rhombs.print_info();
    /*






      */

    return 0;
}