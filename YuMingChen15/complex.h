#include <iostream>

using namespace std;

class Complex
{
public:
    explicit Complex (double=0.0,double=0.0);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    void print() const;
private:
    double real;
    double imaginary;
};
