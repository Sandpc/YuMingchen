#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double,100> temperatures;

    int total=0;
    for (size_t j=0;j<temperatures.size();++j)
        total +=temperatures[j];
    cout<<total;
    return 0;
}
