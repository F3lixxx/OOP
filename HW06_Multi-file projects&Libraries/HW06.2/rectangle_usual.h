#include "figure.h"
#pragma once


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
    int get_sides_a();

    int get_sides_b();

    int get_sides_c();

    int get_sides_d();

    int get_angle_A();

    int get_angle_B();

    int get_angle_C();

    int get_angle_D();

    rectangle_usual(int side_r_a1, int side_r_b1, int side_r_c1, int side_r_d1,
                    int angle_r_a, int angle_r_b, int angle_r_c, int angle_r_d);

    void print_info ();
};