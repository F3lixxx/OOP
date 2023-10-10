#include <iostream>
#include <set>

int choose = 0;

class type_race{
protected:
    std::string name_race_;

    std::string camel;
    std::string fast_camel;
    std::string centaur;
    std::string bicycle_shoes;

    std::string flying_carpet;
    std::string eagle;
    std::string broom;
public:
    std::string getname_race(){return name_race_; }

        std::string getcamel() { return camel; }
        std::string getfast_camel() { return fast_camel; }
        std::string getcentaur() { return centaur; }
        std::string getbicycle_shoes() { return bicycle_shoes; }

    std::string getflying_carpet(){ return flying_carpet; }
    std::string geteagle(){ return eagle; }
    std::string getbroom(){ return broom; }

};

class ground : public type_race{
public:
    ground(){
        name_race_ = "Ground";
        camel = "Camel";
        fast_camel = "Fast Camel";
        centaur = "Centaur";
        bicycle_shoes = "Bicycle shoes";
    }
};

class air : public type_race{
public:
    air(){
        name_race_ = "Air";
        flying_carpet = "Flying Carpet";
        eagle = "Eagle";
        broom = "Broom";
    }
};

void print_information(type_race &race) {
    int length;
            do {
                std::cout << "Enter Length(length must be positive): ";
                std::cin >> length;
                if (length < 0) {
                    std::cout << "length is negative" << std::endl;
                }
            }
            while (length < 0);
            std::cout << "Race For " << race.getname_race() << '.';
            std::cout << " Length: " << length << std::endl;
}

void print(type_race &race){
    if (choose == 1){
        std::cout << "1 "<< race.getcamel() << "\n2 "<< race.getfast_camel()
                  << "\n3 "<< race.getcentaur() << "\n4 " << race.getbicycle_shoes() << std::endl;
    }
    else{
        std::cout << "1 "<< race.getflying_carpet() << "\n2 "<< race.getbroom()
                  << "\n3 "<< race.geteagle() << std::endl;
    }
}

void choose_transport(type_race &chose){
   int size;

    while (true) {
        std::cout << "Minimum of 2 vehicles must be registered";
        std::cin >> size;
        if (size == 1) {
            std::cout << chose.getcamel();
        } else if (size == 2) {
            std::cout << chose.getfast_camel();
        } else if (size == 3) {
            std::cout << chose.getcentaur();
        } else {
            std::cout << chose.getbicycle_shoes();
        }
        if (size == 1 || size == 2 || size == 3 || size == 4) {
            throw std::runtime_error("This transport is registered yet");

        }
    }
}



int main() {
    int chooose;

    ground ground_1;
    air air_1;
    std::cout << "Welcome to Racing simulator \n"
                 "1. Racing for land transport\n"
                 "2. Racing for fly transport\n";

    while ((choose < 1) || (choose > 2)) {
        std::cout << "Choose type of racing ";
        std::cin >> choose;
    if (choose == 1) {
        ground_1;
        print_information(ground_1);
        print(ground_1);

    }
    else if ( choose == 2){
        air_1;
        print_information(air_1);
        print(air_1);

    }
    else{
        if ((choose < 1) || (choose > 2)) {
            std::cout << "Wrong type!\n";
        }
    }
    }
    try{
        choose_transport(ground_1);
    }
    catch (const std::runtime_error& e) {
        std::cerr  << e.what() << std::endl;
    }
    return 0;
}