#include <iostream>
#include "rational.h"
using namespace std;

Rational::Rational(int numerator,int denominator)
:num(numerator),
den(denominator)
{

}
Rational Rational::operator+(const Rational &operand2)const
{
    return Rational(num*operand2.den+operand2.num*den,den*operand2.den);
}
Rational Rational::operator-(const Rational &operand2)const
{
    return Rational(num*operand2.den-operand2.num*den,den*operand2.den);
}
Rational Rational::operator*(const Rational &operand2)const
{
    return Rational(num*operand2.num,den*operand2.den);
}
Rational Rational::operator/(const Rational &operand2)const
{
    return Rational(num*operand2.den,den*operand2.num);
}
void Rational::print()const
{
    if (den%num==0)
        cout<<1<<"/ "<<den/num;
    else
        cout<<num<<"/ "<<den;
    cout<<endl;
    cout<<num/den;
}
