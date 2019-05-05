#include <iostream>

using namespace std;

int main()
{
    long *longPtr;
    long value1=200000;
    long value2;
    longPtr=&value1;
    cout<<longPtr<<endl;;
    value2=*longPtr;
    cout<<&value1<<endl;
    cout<<value2<<endl;

}
