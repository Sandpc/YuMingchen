#include <iostream>
#include <array>
using namespace std;

const size_t rows=2;
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
    array<array<int,cols>,rows> t={1,2,3,4,5,6};
    t[0][0]=0;
    t[0][1]=0;
    t[0][2]=0;
    t[1][0]=0;
    t[1][1]=0;
    t[1][2]=0;
    for (size_t row=0;row<t.size();++row)
    {
        for (size_t column=0;column<t[row].size();++column)
            t[row][column]=0;
    }
    for (size_t row=0;row<t.size();++row)
    {
        for (size_t column=0;column<t[row].size();++column)
            cin>>t[row][column];
    }
    int max=0;
    for (size_t row=0;row<t.size();++row)
    {
        for (size_t column=0;column<t[row].size();++column)
            if(t[row][column]>max)
                max=t[row][column];
    }
    for (size_t column=0;column<3;++column)
        cout<<t[0][column];
    int total=0;
    for (size_t row=0;row<2;++row)
        total+=t[row][1];
    printArray(t);
}
