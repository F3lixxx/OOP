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
        Fraction tmp((numerator_ * lhs.denominator_ + lhs.numerator_ * denominator_), lhs.denominator_ * denominator_);
        return tmp;
    }

    int ret(int a, int b) {
        int
        if (a % b == 0)
            return b;
        if (b % a == 0) {
            return a;
        }
        if (a > b)
            return ret(a%b, b);
        return ret(a, b%a);
    }
    friend std::ostream& operator << (std::ostream& left, const Fraction& lhs);
   // friend std::istream& operator>>(std::istream& left, const Fraction& lhs);
};

    std::ostream& operator<<(std::ostream& out, const Fraction& lhs) 
{
	out << lhs.numerator_ << '/' << lhs.denominator_;
    return out;
}




int main() {
    Fraction f1(8, 9);
    Fraction f2(7, 6);
    Fraction sum = f1 + f2;
   // Fraction minu = f1 - f2;
	std::cout << f1 << " + " << f2 << " = " << sum << std::endl;
    sum.ret;
	//std::cout << f1 << " - " << f2 << " = " << sum << std::endl;
    return 0;
}