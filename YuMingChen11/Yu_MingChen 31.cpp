#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double,11> a;
    array<double,34> b;
    for (int i=0;i<a.size();++i)
        b[i]=a[i];

    return 0;
}

