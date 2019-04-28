#include <iostream>
#include <array>
#include <cstddef>
using namespace std;

int main()
{
    const size_t arraySize=9;
    array<unsigned int,arraySize> n={};



    for (size_t i=1;i<=n.size();++i){
        int a=i*100+100;
        int b=(i*100+100)+99;

        if (i==9)
            cout<<"   1000: ";
        else
            cout<<a<<"~"<<b<<": ";

        for (unsigned int m=0;m<=0;++m)
            cout<<(a-200)/0.09<<"~"<<(b-200)/0.09;

        cout<<endl;}

    return 0;
}

