#include <windows.h>
#include "triangle.h"
#include "right_tri.h"
#include "isos_tri.h"
#include "equil_tri.h"
#include "rectangle_usual.h"
#include "rectangle.h"
#include "cube.h"
#include "parallel.h"
#include "rhomb.h"

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    triangle tri(10, 20, 30, 50, 60, 70);
    tri.print_info();
    try {
        tri.domain_error();
    } catch (const std::length_error& err){
        std::cout << err.what() << std::endl;
    }

    right_triangle r_t(10, 20, 30, 50, 60);
    r_t.print_info();

    isos_triangle i_t(10, 20, 50, 60);
    i_t.print_info();

    equil_triangle e_t(10);
    e_t.print_info();

    rectangle_usual r_u(10, 20, 30, 50, 60, 70, 80, 90);
    r_u.print_info();

    rectangle rec(89, 79, 69);
    rec.print_info();

    cube cub(89);
    cub.print_info();

    parallel parallel(89, 79, 69, 59);
    parallel.print_info();

    rhomb rhombs(89, 79, 69);
    rhombs.print_info();

    return 0;
}