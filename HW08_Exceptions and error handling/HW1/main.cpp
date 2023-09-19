#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
    std::cout << "Count length: ";
    std::cin >> forbidden_length;
    while (forbidden_length != str.length()) {
        std::cout << "Enter Word: ";
        std::cin >> str;
        if (forbidden_length == str.length()) {
            throw std::length_error("You entered the word forbidden game! Goodbye\n");
        }
        std::cout << "Length word " << '"' << str << '"' << ' ' << str.length() << std::endl;
    }

    return forbidden_length;
}

int main() {

    std::string word;
    int count = 0;
    try {
        std::cout << function(word, count);
    } 
    catch (const std::length_error &error) {
        std::cout << error.what();
    }

    return 0;
}
