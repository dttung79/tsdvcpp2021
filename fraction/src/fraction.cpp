#include "fraction.h"


Fraction::Fraction() 
{
    num = 1;
    den = 1;
}

Fraction::Fraction(const int &n, const int &d) 
{
    setNumerator(n);
    setDenominator(d);
}

void Fraction::setNumerator(const int &n)
{
    this->num = n;
}

void Fraction::setDenominator(const int &d)
{
    if (d == 0) throw DenominatorIsZeroException();
    this->den = d;
}
bool Fraction::operator==(const Fraction &f) const
{
    return num*f.den == den*f.num;
}

istream& operator>>(istream &is, Fraction &f) 
{
    char c;
    int n, d;
    is >> n >> c >> d;
    f.setNumerator(n);
    f.setDenominator(d); // possible throw exception
    return is;
}

ostream& operator<<(ostream &os, const Fraction &f) 
{
    os << f.num << "/" << f.den;
    return os;
}

Fraction Fraction::operator+(const Fraction &f) const
{
    int n = num*f.den + den*f.num;
    int d = den*f.den;
    return Fraction(n, d);
}

Fraction Fraction::operator/(const Fraction &f) const
{
    int n = num*f.den;
    int d = den*f.num;
    return Fraction(n, d); // ->> throw if d == 0
}