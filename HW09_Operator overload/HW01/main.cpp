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
    double firstfrac(Fraction& first) { return (numerator_ * first.denominator_ && first.numerator_ * denominator_); }
   // bool operator==(const Fraction& other) const = default;
    bool operator>(Fraction other) { return firstfrac(other) < other.firstfrac(other); }
    bool operator<(Fraction other) { return other > *this; }
    bool operator>=(Fraction other) { return !(*this < other); }
    bool operator<=(Fraction other) { return !(*this > other); }
};

int main()
{
    Fraction f1(1, 1);
    Fraction f2(4, 2);

  //  std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
  //  std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    system("pause");
    return 0;
}