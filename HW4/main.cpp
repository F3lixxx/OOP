#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <vector>



int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);



    std::string sizeM;
    std::string sizeN;

    std::ifstream fin("D:\\ClionProjects\\OOP\\HW4\\in.txt"); //винда
    std::ofstream fout("D:\\ClionProjects\\OOP\\HW4\\out.txt"); //винда

    if(fin.is_open()) {
        while(!fin.eof()){
            for (int j = 0; j < 1; ++j) {
                fin >> sizeM;
                fout << sizeM;
                std::cout << sizeM << '\n';
            }
            while(!fin.eof()) {
                for (int i = 4; i > 0; i--) {
                    fin >> sizeN;
                    fout << sizeN;
                    std::cout << sizeN << ',' << ' ';
                }
                std::cout << '\n';
            }
            fin.close();
        }
    }
        return 0;
    }