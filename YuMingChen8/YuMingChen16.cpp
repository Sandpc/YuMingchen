#include <iostream>
#include <math.h>
using namespace std;

double hypotenuse(double a,double b)
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}
int main()
{
    double x1=3.0;
    double y1=4.0;
    cout<<"3.0\t4.0\t\t"<<hypotenuse(x1,y1)<<endl;
    double x2=5.0;
    double y2=12.0;
    cout<<"5.0\t12.0\t\t"<<hypotenuse(x2,y2)<<endl;
    double x3=8.0;
    double y3=15.0;
    cout<<"8.0\t15.0\t\t"<<hypotenuse(x3,y3)<<endl;
}
