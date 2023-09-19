#include <iostream>
#include <cmath>

class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }

	void Print() {
		std::cout << numerator_ << "/" << denominator_;
	}

	Fraction operator + (Fraction& plus) {
        double left = numerator_ + plus.numerator_;
        double right = denominator_ + plus.denominator_;
        std::cout << left
		return Fraction(left, right);
	}

   
 /*   void enter_1(Fraction& in_1, Fraction& in_2) {
        std::cout << "Enter numerator fraction 1: ";
        std::cin >> in_1.numerator_ >> std::endl;
        std::cout << "Enter denominator fraction 1: ";
        std::cin >> in_2.denominator_ >> std::endl;
    }*/

   //void print() {
   //     std::cout << numerator_ << "/" << denominator_ << '+' << numerator_ << "/" << denominator_ << '=' <<  <<'\n';
   //     std::cout << numerator_ << "/" << denominator_ << '-' << numerator_ << "/" << denominator_ << '=' <<  <<'\n';
   //     std::cout << numerator_ << "/" << denominator_ << '*' << numerator_ << "/" << denominator_ << '=' <<  <<'\n';
   //     std::cout << numerator_ << "/" << denominator_ << '/' << numerator_ << "/" << denominator_ << '=' <<  <<'\n';
   //     std::cout << numerator_ << "/" << denominator_ << '*' << numerator_ << "/" << denominator_ << '=' <<  <<'\n';
   //     std::cout << numerator_ << "/" << denominator_ << '/' << numerator_ << "/" << denominator_ << '=' <<  <<'\n';
   // }
};



int main()
{
    
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    return 0;
}