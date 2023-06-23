#include <iostream>
#include <windows.h>

struct Datas {
	std::string city;
	std::string street;
	int house_number;
	int apartment;
	int index;
};

void information(Datas* info) {

	std::string city;
	std::cout << "Город: ";
	std::cin >> city;

	std::string street;
	std::cout << "Улица: ";
	std::cin >> street;

	int house_number;
	std::cout << "Номер дома: ";
	std::cin >> house_number;

	int apartment;
	std::cout << "Номер квартиры: ";
	std::cin >> apartment;

	int index;
	std::cout << "Индекс: ";
	std::cin >> index;

	system("cls");

	std::cout << "Город: "  << city << '\n';
	std::cout << "Улица: " << street << '\n';
	std::cout << "Номер дома: " << house_number << '\n';
	std::cout << "Номер квартиры: " << apartment << '\n';
	std::cout << "Индекс: " << index << '\n';
	
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Datas* info = new Datas{};
	information(info);
	system("pause");

	delete [] info;
}