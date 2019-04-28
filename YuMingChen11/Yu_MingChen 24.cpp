#include <iostream>
#include <array>
using namespace std;

const size_t rows=5;
const size_t cols=3;

void printArray(const array<array<int,cols>,rows>& a)
{
    for (auto const &row :a)
    {
        for (auto const &element : row)
            cout<<element<<' ';
        cout<<endl;
    }
}
int main()
{
    array<array<int,cols>,rows> t={};

    for (size_t row=0;row<t.size();++row)
    {
        for (size_t column=0;column<t[row].size();++column)
            t[row][column]=0;
    }

    printArray(t);
}
