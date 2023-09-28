#include "Enter.h"
namespace Greeting 
{
	std::string Greeter:: greet() {
		std::string name;
		std::cout << "Enter your name: ";
		std::cin >> name;
		std::string hi = "Hello";
		std::string plus = hi + ", " + name;
		//plus.append(hi).append(", ").append(name);
		std::cout << plus << std::endl;
		return plus;
	}
}