#include <iostream>

using namespace std;

double minmum(double a,double b)
{
    if (a<b)
        return a;
    return b;
}
int main()
{
    int a;
    int b;
    int c;
    cout<<"First: ";
    cin>>a;
    cout<<"Second: ";
    cin>>b;
    cout<<"Third: ";
    cin>>c;
    cout<<"Min: "<<minmum(minmum(a,b),c)<<endl;
}
