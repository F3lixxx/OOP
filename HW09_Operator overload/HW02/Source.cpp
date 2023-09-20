#include <iostream>
#include <cmath>
#include <algorithm>

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

	Fraction operator + (Fraction& lhs) {
        Fraction tmp(numerator_ * lhs.denominator_,denominator_ * lhs.denominator_
            + lhs.numerator_ * lhs.denominator_, lhs.denominator_ * lhs.denominator_);
        return tmp;
    }


    friend std::ostream& operator<<(std::ostream& left, const Fraction& lhs);
   // friend std::istream& operator>>(std::istream& left, const Fraction& lhs);
};


    std::ostream& operator<<(std::ostream& out, const Fraction& lhs) 
{
	out << lhs.numerator_ << '/' << lhs.denominator_;
    return out;
}


int main() {
    Fraction f1(6, 2);
    Fraction f2(8, 9);
    Fraction sum = f1 + f2;
   // Fraction minu = f1 - f2;
	std::cout << f1 << " + " << f2 << " = " << sum << std::endl;
	//std::cout << f1 << " - " << f2 << " = " << sum << std::endl;
    return 0;
}