#include "isos_tri.h"
#pragma  once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class equil_triangle : public isos_triangle {
public:
    MATHPOWERLIBRARY_API equil_triangle(int side_e_a);

    MATHPOWERLIBRARY_API void print_info ();
};