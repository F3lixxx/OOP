#include "rectangle.h"
#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class cube : public rectangle {
public:
    MATHPOWERLIBRARY_API cube(int cube_A);

    MATHPOWERLIBRARY_API void print_info ();
};