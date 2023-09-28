#include "figure.h"
#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

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
    MATHPOWERLIBRARY_API int get_sides_a();

    MATHPOWERLIBRARY_API int get_sides_b();

    MATHPOWERLIBRARY_API int get_sides_c();
   
    MATHPOWERLIBRARY_API int get_sides_d();
   
    MATHPOWERLIBRARY_API int get_angle_A();
   
    MATHPOWERLIBRARY_API int get_angle_B();
   
    MATHPOWERLIBRARY_API int get_angle_C();
   
    MATHPOWERLIBRARY_API int get_angle_D();
   
    MATHPOWERLIBRARY_API rectangle_usual(int side_r_a1, int side_r_b1, int side_r_c1, int side_r_d1,
                    int angle_r_a, int angle_r_b, int angle_r_c, int angle_r_d);

    MATHPOWERLIBRARY_API void print_info ();
};