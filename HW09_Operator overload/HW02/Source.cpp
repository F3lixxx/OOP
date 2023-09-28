#include <iostream>
#include <algorithm>


int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int numerator, int denominator)
    {
        int gcd = findGCD(std::abs(numerator), std::abs(denominator));
        numerator_ = numerator / gcd;
        denominator_ = denominator / gcd;
    }

	Fraction operator + (Fraction& lhs) const {
        Fraction tmp((numerator_ * lhs.denominator_ + lhs.numerator_ * denominator_), lhs.denominator_ * denominator_);
        return tmp;
    }

    Fraction operator - (Fraction& lhs) const {
        Fraction tmp((numerator_ * lhs.denominator_ - lhs.numerator_ * denominator_), lhs.denominator_ * denominator_);
        return tmp;
    }

    Fraction operator * (Fraction& lhs) const {
        Fraction tmp(numerator_ * lhs.numerator_, lhs.denominator_ * denominator_);
        return tmp;
    }

    Fraction operator / (Fraction& lhs) const {
        Fraction tmp(numerator_ * lhs.denominator_, lhs.numerator_ * denominator_);
        return tmp;
    }

    friend std::ostream& operator << (std::ostream& out, const Fraction& lhs);
    friend std::istream& operator>>(std::istream& in, Fraction& lhs);
};

    std::ostream& operator<<(std::ostream& out, const Fraction& lhs) 
{
	out << lhs.numerator_ << '/' << lhs.denominator_;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& lhs){
    in >> lhs.numerator_  >> lhs.denominator_;
    return in;
    }


int main() {
        int a;
        int b;
        int c;
        int d;
    std::cout << "Enter Numerator 1: ";
    std::cin >> a;
    std::cout << "Enter Denominator 1: ";
    std::cin >> b;
    std::cout << "Enter Numerator 2: ";
    std::cin >> c;
    std::cout << "Enter Denominator 2: ";
    std::cin >> d;
    Fraction f1(a, b);
    Fraction f2(c, d);
    Fraction sum = f1 + f2;
    Fraction minus = f1 - f2;
    Fraction multi = f1 * f2;
    Fraction div = f1 / f2;
	std::cout << f1 << " + " << f2 << " = " << sum << std::endl;
    std::cout << f1 << " - " << f2 << " = " << minus << std::endl;
    std::cout << f1 << " * " << f2 << " = " << multi << std::endl;
    std::cout << f1 << " / " << f2 << " = " << div << std::endl;
    return 0;
}