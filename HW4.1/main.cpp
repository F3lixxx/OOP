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

    std::string get_output_address() const {
        std::string output_address = city_ + ", " + street_ + ", " + std::to_string(home_) + ", " + std::to_string(apart_) + '\n';
        return output_address;
    }

    void sort(const address& addresses, int& size) {
        for (int i = 0; i < size; i++) {
            for (int j = size - 1; j > 0; j--) {
                if (addresses[j] > addresses[j + 1]) {
                    std::swap(addresses[j], addresses[j + 1]);
                }
            }
        }
        for(const auto x:addresses)
        {
            std:: cout << x << ' ';
        }
    }
};


int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    int size = 0;
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
        //        addresses.emplace_back(city, street, home, apart);
    }


    fin.close();

    for (int j = size - 1; j >= 0; --j) {
        fout << addresses[j].get_output_address();
        std::cout << addresses[j].get_output_address();
    }
    fout.close();
    return 0;
}