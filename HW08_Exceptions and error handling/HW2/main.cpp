#include <windows.h>
#include "figure.h"
#include "tri.h"
#include "right_tri.h"
#include "isos.h"
#include "equil.h"
#include "rectangle.h"
#include "quadro.h"
#include "Qube.h"
#include "parallel.h"
#include "rhomb.h"


int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::string er;


    try {
        triangle tri(70, 20, 30, 50, 60, 70);
        tri.print_info();

        right_triangle r_t(20, 20, 30, 40, 50, 90);
        r_t.print_info();

        isos_triangle i_t(10, 20, 10, 40, 50, 40);
        i_t.print_info();

        equil_triangle e_t(70, 70, 70, 60, 60, 60);
        e_t.print_info();

        rectangle rec(10, 20, 30, 40, 50, 60, 70, 180);
        rec.print_info();

        quadro qua(10, 10, 10, 10, 90, 90, 90, 90);
        qua.print_info();

        qube qub(20, 20, 20, 20, 90, 90, 90, 90);
        qub.print_info();

        parall par(20, 30, 20, 30, 50, 60, 50, 60);
        par.print_info();

        rhomb rh(10, 10, 10, 10, 50, 60, 50, 60);
        rh.print_info();
      }
    catch (const std::length_error& r_t_error) {
        std::cout << r_t_error.what() << std::endl;
      }
    return 0;
}
