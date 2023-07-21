#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

class address {
private:
    const std::string city_;
    const std::string street_;
    int home_ = 0;
    int apart_ = 0;
public:
    address(std::string city, std::string street, int home, int apart)
    : city_(city), street_(street), home_(home), apart_(apart) {}


    std::string get_output_address() const {
        std::ofstream fout("out.txt");
        std::string output_address = city_ + ", " + street_ + ", " + std::to_string(home_) + ", " + std::to_string(apart_) + '\n';
        fout << output_address;
        std::cout << output_address;
        return output_address;
    }

};


int main() {
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);

    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    int size = 0;
    int* new_size = new int [size];
    fin >> *new_size;
    fout << *new_size << '\n';
    std::cout << *new_size << '\n';

    for (int j = 0; j < *new_size; ++j) {
        int home;
        int apart;
        std::string city;
        std::string street;
        fin >> city >> street >> home >> apart;
        address p1(city, street, home, apart);
        fout << p1.get_output_address();
    }
    fin.close();
    fout.close();
    delete [] new_size;
    return 0;
}