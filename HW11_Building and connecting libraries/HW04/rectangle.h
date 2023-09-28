#include "rectangle_usual.h"
#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class rectangle : public rectangle_usual {
public:
    MATHPOWERLIBRARY_API rectangle(int side_r_A, int side_r_B, int angle_r_A);

    MATHPOWERLIBRARY_API void print_info ();
};