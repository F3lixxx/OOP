#include "triangle.h"

#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class right_triangle : public triangle {
public:

    MATHPOWERLIBRARY_API right_triangle(int side_A, int side_B, int side_C, int angle_a, int angle_b);

    MATHPOWERLIBRARY_API void print_info ();
};