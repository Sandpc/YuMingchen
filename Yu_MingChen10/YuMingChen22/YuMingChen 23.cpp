#include <iostream>

using namespace std;

int tripleByValue(int count)
{
    return 3*count;
}
int tripleByReference(int count,int n)
{
    n=3*count;
    return n;
}
int main()
{
    int i;
    int a;
    cin>>i;
    cout<<tripleByValue(i)<<endl;
    cout<<tripleByReference(i,a)<<endl;
    return 0;
}
