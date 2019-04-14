#include <iostream>

using namespace std;

int celsius(int f)
{
    int c;
    c=(f-32)/1.8;
    return c;
}
int fahrenheit(int c)
{
    int f;
    f=c*1.8+32;
    return f;
}
int main()
{
    cout<<"F>>C:"<<endl;
    for (int i=32;i<=213;++i)
    {
        cout<<celsius(i)<<"\t";
    }
    cout<<endl<<"C>>F:"<<endl;
    for (int i=0;i<=101;++i)
    {
        cout<<fahrenheit(i)<<"\t";
    }
}
