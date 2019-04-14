#include <iostream>

using namespace std;

bool iseven(int x)
{
    if (x%2==0)
        return true;
    else
        return false;
}
int main()
{
    while(1)
    {
        int a;
        cout<<"Enter the number: ";
        cin>>a;
        if(iseven(a))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
        }
}
