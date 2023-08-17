// AdressSecondD.A


#include <iostream>
#include <fstream>
#include <algorithm>
#include <windows.h>


using std::endl;
using std::string;


class Adress {
private:
    string city_name_;
    string street_name_;
    int num_house_;
    int num_flat_;

    Adress() :city_name_(), street_name_(), num_house_(), num_flat_() {}    //конструктор без параметров для создания массива

public:


    Adress(string city_name_, string street_name_, int num_house_, int num_flat_) :
            city_name_(city_name_), street_name_(street_name_), num_house_(num_house_), num_flat_(num_flat_) //конструктор с параметрами
    {}


    static void Get_Output_Address() { //ввод из файла, сортировка и вывод в файл

        std::ifstream fin("in.txt");
        if (!fin.is_open()) std::exit(0);
        int size;
        fin >> size;


        Adress* adress_arr = new Adress[size]{};


        for (int i = 0; i < size; i++) {
            fin >> adress_arr[i].city_name_;
            fin >> adress_arr[i].street_name_;
            fin >> adress_arr[i].num_house_;
            fin >> adress_arr[i].num_flat_;
        }


        std::sort(adress_arr, adress_arr + size, [](const Adress& left, const Adress& right) {
            return left.city_name_ < right.city_name_;
        });

        std::ofstream  fout("out.txt");
        fout << size << endl;
        for (int i = 0; i < size; i++) {

            fout << adress_arr[i].city_name_ << ", " << adress_arr[i].street_name_ << ", " << adress_arr[i].num_house_ << ", "
                << adress_arr[i].num_flat_ << endl;
        }

        fout.close();

        delete[] adress_arr;
        fin.close();
    }


};
int main()
{
    //вызываем статический метод ввода-вывода данных
    Adress::Get_Output_Address();

    return 0;
}