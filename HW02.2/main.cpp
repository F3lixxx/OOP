#include <iostream>
#include <windows.h>

struct Person {
	std::string first_name;
	int account_number;
	int balance;
	int after_balance;
};

void data(Person& person_data) {

	std::cout << "Введите номер счёта: ";
	std::cin >> person_data.account_number;

	std::cout << "Введите имя владельца: ";
	std::cin >> person_data.first_name;
	
	std::cout << "Введите баланс: ";
	std::cin >> person_data.balance;

	std::cout << "Введите новый баланс: ";
	std::cin >> person_data.after_balance;
	std::cout << '\n';

	std::cout << "Ваш счет: ";
	std::cout << person_data.first_name << ','
		<< ' ' << person_data.account_number << ','
		<< ' ' << person_data.after_balance << '\n';
	
}

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Person person_data;
	data(person_data);

}