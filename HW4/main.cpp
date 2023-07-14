#include <iostream>
#include <fstream>
#include <string>
#include <vector>



int main() {
    std::string sizeM;
    std::string sizeN;


   // std::ifstream fin("D:\\ClionProjects\\OOP\\HW4\\in.txt"); //винда
   // std::ofstream fout("D:\\ClionProjects\\OOP\\HW4\\out.txt"); //винда
    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");
    if(fin.is_open()) {
        while(!fin.eof()){
            for (int j = 0; j < 1; j++) {
                fin >> sizeM;
                fout << sizeM << "\n";
                std::cout << sizeM << '\n';
            }
            while(!fin.eof()) {
                for (int i = 0; i < 4; i++) {
                    fin >> sizeN;
                    fout << sizeN << ',' << ' ';
                    std::cout << sizeN << ',' << ' ';
                }
                std::cout << sizeN[4];
                fout <<"\n";
                std::cout << '\n';
            }
            fin.close();
        }
    }
    else {
        std::cout << "File is not open";
    }

    return 0;
}