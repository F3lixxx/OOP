#include <iostream>
#include <windows.h>

struct Person {
	std::string first_name;
	int account_number;
	int balance;
	int after_balance;
};

void data(Person& person_data) {

	int account_number;
	std::cout << "Введите номер счёта: ";
	std::cin >> account_number;

	std::string first_name;
	std::cout << "Введите имя владельца: ";
	std::cin >> first_name;
	
	int balance;
	std::cout << "Введите баланс: ";
	std::cin >> balance;

	int after_balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> after_balance;

	std::cout << "Ваш счет: ";
	std::cout << first_name << ','
		<< ' ' << account_number << ','
		<< ' ' << after_balance << '\n';
	
}

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Person person_data;
	data(person_data);

	std::cout << person_data.first_name;

}