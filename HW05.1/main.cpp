#include <iostream>
#include <windows.h>

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
    std::string get_name_figure() { return name_figure; }

    int get_four_angle() { return four_angle; }

    int get_sides_a() { return sides_a; }

    int get_sides_b() { return sides_b; }

    int get_sides_c() { return sides_c; }

    int get_sides_d() { return sides_d; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }

    int get_angle_D() { return angle_D; }

};

class triangle : public Figure {
public:
    triangle(int side_a, int side_b, int side_c, int side_A, int side_B, int side_C) {
        name_figure = "Треугольник:";
        four_angle = false;
        sides_a = side_a;
        sides_b = side_b;
        sides_c = side_c;
        angle_A = side_A;
        angle_B = side_B;
        angle_C = side_C;
    }
};

class right_triangle : public triangle {
public:
    right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b, int angle_c)
            : triangle(side_A, side_B, side_C,
                       angle_a, angle_b, 90) {
        name_figure = "Прямоугольный треугольник: ";

        four_angle = false;
    }
/*    virtual void right(){
        if (angle_c = 90){
            sdt:: cout << "Правильная" << std::endl;
        }
        else {
            sdt:: cout << "Неправильная"std::endl;
        }
    };*/
};

class isos_triangle : public triangle {
public:
    isos_triangle(int sideA, int sideB, int sideC, int angleA1, int angleB1, int angleC1)
            : triangle(sideA = sideC, sideB, sideC,
                       angleA1, angleB1, angleC1 = angleA1) {
        name_figure = "Равнобедренный Треугольник: ";
        four_angle = false;
    }

};

class equil_triangle : public isos_triangle {
public:
    equil_triangle(int side_e_a, int side_e_b, int side_e_c, int angle_e_A, int angle_e_B, int angle_e_C)
            : isos_triangle(side_e_a = side_e_b, side_e_b = side_e_c, side_e_c = side_e_a,
                            angle_e_A = 60, angle_e_B = 60, angle_e_C = 60) {
        name_figure = "Равносторонний Треугольник: ";
        four_angle = false;
    }
};

class rectangle_usual : public Figure {
public:
    rectangle_usual(int side_r_a1, int side_r_b1, int side_r_c1, int side_r_d1,
                    int angle_r_a, int angle_r_b, int angle_r_c, int angle_r_d) {
        name_figure = "Четырёхугольник:";
        four_angle = true;
        sides_a = side_r_a1;
        sides_b = side_r_b1;
        sides_c = side_r_c1;
        sides_d = side_r_d1;
        angle_A = angle_r_a;
        angle_B = angle_r_b;
        angle_C = angle_r_c;
        angle_D = angle_r_d;
    }
};

class rectangle : public rectangle_usual {
public:
    rectangle(int side_r_A, int side_r_B, int side_r_C, int side_r_D, int angle_r_A, int angle_r_B, int angle_r_C,
              int angle_r_D)
            : rectangle_usual(side_r_A, side_r_B, side_r_C = side_r_A,
                              side_r_D = side_r_B, 90, 90, 90, 90) {
        name_figure = "Прямоугольник:";
        four_angle = true;
    }
};

class cube : public rectangle {
public:
    cube(int cube_A, int cube_B, int cube_C, int cube_D, int cube_a, int cube_b, int cube_c,
         int cube_d)
            : rectangle(cube_A = cube_B, cube_B = cube_C, cube_C = cube_D, cube_D = cube_A,
                        cube_a = cube_b, cube_b = cube_c, cube_c = cube_d, cube_d = cube_a) {
        name_figure = "Квадрат:";
        four_angle = true;
    }
};

class parallel : public rectangle_usual {
public:
    parallel(int parral_A, int parral_B, int parral_C, int parral_D,
             int parral_a, int parral_b, int parral_c, int parral_d)
            : rectangle_usual(parral_A, parral_B, parral_C = parral_A, parral_D = parral_B,
                              parral_a, parral_b, parral_c = parral_a, parral_d = parral_b) {
        name_figure = "Параллелограмм:";
        four_angle = true;
    }
};

class rhomb : public parallel{
public:
    rhomb(int rhomb_A, int rhomb_B, int rhomb_C, int rhomb_D,
          int rhomb_a, int rhomb_b, int rhomb_c, int rhomb_d)
            : parallel(rhomb_A = rhomb_B, rhomb_B = rhomb_C, rhomb_C = rhomb_D, rhomb_D = rhomb_A,
                       rhomb_a, rhomb_b, rhomb_c, rhomb_d){
        name_figure = "Ромб:";
        four_angle = true;
    }
};


void print_info(Figure &figure) {
    std::cout << '\n';
    std::cout << figure.get_name_figure() << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << figure.get_sides_a() << " b=" << figure.get_sides_b() << " c=" << figure.get_sides_c();

    if (figure.get_four_angle()) { std::cout << " d=" << figure.get_sides_d() << std::endl; }
    else { std::cout << std::endl; }

    std::cout << "Углы: ";
    std::cout << "A=" << figure.get_angle_A() << " B=" << figure.get_angle_B() << " C=" << figure.get_angle_C();

    if (figure.get_four_angle()) { std::cout << " D=" << figure.get_angle_D() << std::endl; }
    else { std::cout << std::endl; }
}


int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    triangle t(10, 20, 30, 50, 60, 70);
    print_info(t);

    right_triangle r_t(10, 20, 30, 40, 50, 60);
    print_info(r_t);

    isos_triangle i_t(10, 20, 30, 50, 60, 90);
    print_info(i_t);

    equil_triangle e_t(55, 22, 66, 77, 11, 22);
    print_info(e_t);

    rectangle_usual r_u(10, 20, 30, 50, 60, 70, 80, 90);
    print_info(r_u);

    rectangle rec(89, 79, 69, 59, 66, 77, 11, 22);
    print_info(rec);

    cube cub(89, 79, 69, 59, 66, 77, 11, 22);
    print_info(cub);

    parallel parallel(89, 79, 69, 59, 66, 77, 11, 22);
    print_info(parallel);

    rhomb rhomb1(89, 79, 69, 59, 66, 77, 11, 22);
    print_info(rhomb1);

    system("pause");
    return 0;
}
