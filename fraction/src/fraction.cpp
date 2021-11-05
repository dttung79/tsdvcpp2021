#include "fraction.h"


Fraction::Fraction() 
{
    num = 1;
    den = 1;
}

Fraction::Fraction(const int &n, const int &d) 
{
    num = n;
    den = d;
}

bool Fraction::operator==(const Fraction &f) const
{
    return num*f.den == den*f.num;
}

istream& operator>>(istream &is, Fraction &f) 
{
    char c;
    is >> f.num >> c >> f.den;
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
