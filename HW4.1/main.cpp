#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <vector>

class address {
private:
    const std::string city_;
    const std::string street_;
    int home_ = 0;
    int apart_ = 0;
public:
    address(std::string city, std::string street, int home, int apart)
            : city_(city), street_(street), home_(home), apart_(apart) {}

    std::string get_output_address( address* size) const {
        std::string output_address = city_ + ", " + street_ + ", " + std::to_string(home_) + ", " + std::to_string(apart_) + '\n';
        return output_address;
    }


};


int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    int size = 0;
    int * p = new int[size];
    address s("name");
    fin >> size;
    fout << size << '\n';
    std::cout << size << '\n';


    std::vector<address> addresses, addresses2;

    for (int j = 0; j < size; ++j) {
        int home;
        int apart;
        std::string city;
        std::string street;
        fin >> city >> street >> home >> apart;
    }


    fin.close();

    for (int j = size - 1; j >= 0; --j) {
        fout << addresses[j].get_output_address();
        std::cout << addresses[j].get_output_address();
    }
    fout.close();
    return 0;
}