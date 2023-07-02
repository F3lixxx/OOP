#include <iostream>

class counter{
    private :
    int x=1;
public:
    void add(){
        char point;
        std::cin >> point;
        if (point == '+'){
            x++;
            std:: cout << x << std::endl;
        }
        else if (point == '-'){
            x--;
            std:: cout << x << std::endl;
        }
        else if (point == '='){
            std:: cout << x << std::endl;
        }
        else if (point == 'x'){
            std:: cout << "До свидания!" << std::endl;
        }
    }
};

int main() {
    counter s;
    while(true){
        s.add();
        if (s == "x"){
            break;
        }
    }
    return 0;
}
