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
	std::cout << "�����: ";
	std::cin >> city;

	std::string street;
	std::cout << "�����: ";
	std::cin >> street;

	int house_number;
	std::cout << "����� ����: ";
	std::cin >> house_number;

	int apartment;
	std::cout << "����� ��������: ";
	std::cin >> apartment;

	int index;
	std::cout << "������: ";
	std::cin >> index;

	system("cls");

	std::cout << "�����: "  << city << '\n';
	std::cout << "�����: " << street << '\n';
	std::cout << "����� ����: " << house_number << '\n';
	std::cout << "����� ��������: " << apartment << '\n';
	std::cout << "������: " << index << '\n';
	
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Datas* info = new Datas{};
	information(info);
	system("pause");

	delete [] info;
}