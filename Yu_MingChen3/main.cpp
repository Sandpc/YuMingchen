#include <iostream>

using namespace std;

int main()
{
    int r=0;
    int d=0;
    double s=0;
    double l=0;
    double p=3.14159;

    cout << "输入半径";
    cin>>r;

    d=2*r;
    s=p*r*r;
    l=2*p*r;

    cout<<"直径"<<d;
    cout<<"面积"<<s;
    cout<<"周长"<<l;


    return 0;
}
