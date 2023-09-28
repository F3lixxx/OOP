#include "triangle.h"
#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class isos_triangle : public triangle {
public:

    MATHPOWERLIBRARY_API isos_triangle(int sideA, int sideB, int angleA1, int angleB1);

    MATHPOWERLIBRARY_API void print_info ();
};