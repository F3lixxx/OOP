#include <windows.h>
#include "figure.h"
#include "tri.h"
#include "isos.h"
#include "equil.h"
#include "right_tri.h"
#include "rectangle.h"
#include "quadro.h"
#include "Qube.h"
#include "parallel.h"
#include "rhomb.h"


int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::string er;

    triangle tri(70, 20, 30, 50, 60, 70);
    tri.print_info();
    try {
        std::cout << tri.error(er);
    }
    catch (const std::length_error& error) {
        std::cout << error.what() << std::endl;
    }

     right_triangle r_t(10, 20, 30, 40, 50, 90);
      r_t.print_info();
      try {
          std::cout << r_t.error(er);
      } catch (const std::length_error& r_t_error) {
          std::cout << r_t_error.what() << std::endl;
      }

     isos_triangle i_t(10, 20, 10, 40, 50, 40);
      i_t.print_info();
      try {
          std::cout << i_t.error(er);
      } catch (const std::length_error &i_t_error) {
          std::cout << i_t_error.what() << std::endl;
      }

      equil_triangle e_t(70, 70, 60, 60, 70, 60);
      e_t.print_info();
      try {
          std::cout << e_t.error(er);
      } catch (const std::length_error &e_t_error) {
          std::cout << e_t_error.what() << std::endl;
      }


      rectangle rec(10, 20, 30, 40, 50, 60, 70, 180);
      rec.print_info();
      try {
          std::cout << rec.error(er);
      }
      catch (const std::length_error& rec_error) {
          std::cout << rec_error.what() << std::endl;
      }

    quadro qua(10, 10, 10, 10, 90, 90, 90, 90);
    qua.print_info();
    try {
        std::cout << qua.error(er);
    }
    catch (const std::length_error& qua_error) {
        std::cout << qua_error.what() << std::endl;
    }

    qube qub(20, 20, 20, 20, 90, 90, 90, 90);
    qub.print_info();
    try {
        std::cout << qub.error(er);
    }
    catch (const std::length_error& qub_error) {
        std::cout << qub_error.what() << std::endl;
    }

    parall par(20, 30, 20, 30, 50, 60, 50, 60);
    par.print_info();
    try {
        std::cout << par.error(er);
    }
    catch (const std::length_error& par_error) {
        std::cout << par_error.what() << std::endl;
    }

    rhomb rh(10, 10, 10, 10, 50, 60, 50, 60);
    rh.print_info();
    try {
        std::cout << rh.error(er);
    }
    catch (const std::length_error& rh_error) {
        std::cout << rh_error.what() << std::endl;
    }
    return 0;
}
