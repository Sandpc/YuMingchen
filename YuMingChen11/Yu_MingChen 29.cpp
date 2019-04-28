#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double,5> value{};
    for (size_t i=0;i<value.size();++i)
        value[i]=8;
    for (size_t j=0;j<value.size();++j)
        cout<<value[j];

    return 0;
}
