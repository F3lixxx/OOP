#include <windows.h>
#include <iostream>
#include <fstream>



class Adress {
private:
    std::string city_name_ ;
    std::string street_name_ ;
    int num_house_;
    int num_flat_ ;

public:

    Adress() :city_name_(), street_name_(), num_house_(), num_flat_() {}

    Adress(std::string city_name_, std::string street_name_, int num_house_, int num_flat_) :
            city_name_(city_name_), street_name_(street_name_), num_house_(num_house_), num_flat_(num_flat_){}


    static void Get_Output_Address() {

        std::ifstream fin("in.txt");
        if (!fin.is_open()) std::exit(0);
        int size; fin >> size;

        Adress* adress_arr = new Adress[size];

        for (int i = 0; i < size; i++) {
            fin >> adress_arr[i].city_name_;
            fin >> adress_arr[i].street_name_;
            fin >> adress_arr[i].num_house_;
            fin >> adress_arr[i].num_flat_;
        }


        std::ofstream  out("out.txt");
        out << size << std::endl;
        std::cout << size << std::endl;
        for (int i = 0; i < size; i++) {
            out << adress_arr[i].city_name_ << ", " << adress_arr[i].street_name_ << ", " << adress_arr[i].num_house_ << ", "
                << adress_arr[i].num_flat_ << std::endl;
            std::cout<< adress_arr[i].city_name_ << ", " << adress_arr[i].street_name_ << ", " << adress_arr[i].num_house_ << ", "
                     << adress_arr[i].num_flat_ << std::endl;
        }
        out.close();

        delete [] adress_arr;
        fin.close();
    }
};


int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Adress::Get_Output_Address();
    return 0;
}