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
        std::cout << numerator << '/' << denominator;
    }

	Fraction operator + (Fraction& lhs, Fraction& rhs) {
        Fraction tmp(lhs.numerator_ * rhs.denominator_
            + rhs.numerator_ * lhs.denominator_,
            lhs.denominator_ * rhs.denominator_);
        return tmp;
    }
};



int main() {
    Fraction f1(4, 3);
    //f1.Print();
    Fraction f2(6, 11);
   // f2.Print();
    Fraction sum = f1 + f2;
    return 0;
}