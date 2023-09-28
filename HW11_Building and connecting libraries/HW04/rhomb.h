#include "parallel.h"

#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class rhomb : public parallel {
public:
    MATHPOWERLIBRARY_API rhomb(int rhomb_A, int rhomb_a, int rhomb_b);

    MATHPOWERLIBRARY_API void print_info();
};