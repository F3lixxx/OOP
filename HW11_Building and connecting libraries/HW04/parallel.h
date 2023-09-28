#include "rectangle.h"

#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class parallel : public rectangle_usual {
public:
    MATHPOWERLIBRARY_API parallel(int parral_A, int parral_B, int parral_a, int parral_b);

    MATHPOWERLIBRARY_API void print_info();
};