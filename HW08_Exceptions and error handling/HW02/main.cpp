#include <windows.h>
#include "figure.h"
#include "trian.h"
#include "equil.h"
#include "right_tri.h"


int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std:: string er;

    triangle tri(70, 20, 30, 50, 60, 70);
    tri.print_info();
    try {
        std::cout << tri.domain_err(er);
    } catch (const std::length_error &error) {
        std::cout << error.what();
    }

    right_triangle r_t(10, 20, 30, 50, 60);
    r_t.print_info();
    try {
        std::cout << tri.domain_err(er);
    } catch (const std::length_error &r_t_error) {
        std::cout << r_t_error.what();
    }

/*    isos_triangle i_t(10, 20, 50, 60);
    i_t.print_info();
    try {
        std::cout << tri.domain_err(er);
    } catch (const std::length_error &i_t_error) {
        std::cout << i_t_error.what();
    }*/

    equil_triangle e_t(10);
    e_t.print_info();
    try {
        std::cout << tri.domain_err(er);
    } catch (const std::length_error &e_t_error) {
        std::cout << e_t_error.what();
    }
    return 0;
}
