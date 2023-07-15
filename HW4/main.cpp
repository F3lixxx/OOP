#include <iostream>
#include <fstream>
#include <string>
//#include <windows.h>

class adress {
private:
    std::string sizeM;
    std::string sizeN;
public:
    void set_words() {
        std::ifstream fin("in.txt");
        std::ofstream fout("out.txt");
        int size = 0;
        fin >> size;
        std::string *dynamic = new std::string[size];
        if (fin.is_open()) {
            while (!fin.eof()) {
                for (int j = 0; j < size; j++) {
                    fin >> dynamic[j];
                    fout << dynamic[j] << "\n";
                    std::cout << dynamic[j] << '\n';
                }
                /*int mass;
                fin >> mass;
                std::string* dynamic2 = new std::string [mass];
                while (!fin.eof()) {
                    for (int i = 0; i < mass; i++) {
                        fin >> mass[i];
                        if (i != 0) {
                            std::cout << ',' << ' ';
                            fout << ',' << ' ';
                        }
                        fout << mass[i];
                        std::cout << mass[i];
                    }*/
/*
                fout << "\n";
                std::cout << '\n';
*/
            }
            fin.close();
        }
    }
 /*       else {
            std::cout << "File is not open";
        }
    }*/
};


int main() {
    //SetConsoleCP(CP_UTF8);
    //SetConsoleOutputCP(CP_UTF8);

    adress house;
    house.set_words();

    return 0;
}