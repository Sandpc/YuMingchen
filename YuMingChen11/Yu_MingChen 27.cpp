#include <iostream>
#include <array>
#include <cstddef>
using namespace std;

int main()
{
    const size_t arraySize=9;
    array<unsigned int,arraySize> alphabet={};

    cout<<alphabet[5];

    return 0;
}
