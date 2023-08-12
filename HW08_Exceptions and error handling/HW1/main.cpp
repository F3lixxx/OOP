#include <iostream>
#include <string>

/*int function(std::string str, int forbidden_length){

}*/

int main() {

    std::string word;
    int count = 0;
    std::cout << "Count length: ";
    std::cin >> count;
    std::cout << "Enter Word: ";
    std::cin >> word;
    std::cout << "Length word " << word << " = " << word.length() << std::endl;
    return 0;
}
