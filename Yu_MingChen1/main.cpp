#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int o=0;
    int p=0;
    int q=0;

    cout <<"输入第一个数";
    cin >>x;

    cout <<"输入第二个数";
    cin>>y;

    z=y+x;
    o=x-y;
    p=y*x;
    q=x/y;

    cout<<"和"<<z<<endl;
    cout<<"差"<<o<<endl;
    cout<<"乘"<<p<<endl;
    cout<<"商"<<q<<endl;

    return 0;
}
