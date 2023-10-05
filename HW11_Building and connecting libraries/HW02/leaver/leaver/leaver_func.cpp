#include "leaver.h"

namespace Greeting
{
	std::string Greeter::greet() {
		std::string name;
		std::cout << "Enter your name: ";
		std::cin >> name;
		std::string hi = "Bye";
		std::string plus = hi + ", " + name;
		//plus.append(hi).append(", ").append(name);
		std::cout << plus << std::endl;
		return plus;
	}
}