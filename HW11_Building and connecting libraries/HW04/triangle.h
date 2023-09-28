#include "figure.h"

#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class triangle : public Figure {
protected:
    int sides_a = 0;
    int sides_b = 0;
    int sides_c = 0;
    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;

public:
   MATHPOWERLIBRARY_API int get_sides_a();
   
   MATHPOWERLIBRARY_API int get_sides_b();
   
   MATHPOWERLIBRARY_API int get_sides_c();
   
   MATHPOWERLIBRARY_API int get_angle_A();
   
   MATHPOWERLIBRARY_API int get_angle_B();
   
   MATHPOWERLIBRARY_API int get_angle_C();
   
   MATHPOWERLIBRARY_API triangle(int side_a, int side_b, int side_c, int side_A, int side_B, int side_C);
   
   MATHPOWERLIBRARY_API void print_info();
};