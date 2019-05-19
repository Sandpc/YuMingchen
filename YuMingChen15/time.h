#include <iostream>

using namespace std;

class Rational
{
public:
    explicit Rational (int=0,int=0);
    Rational operator+(const Rational &) const;
    Rational operator-(const Rational &) const;
    Rational operator*(const Rational &) const;
    Rational operator/(const Rational &) const;
    void print() const;
private:
    int num;
    int den;
};
