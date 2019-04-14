#include <iostream>

using namespace std;


int main()
{
    int i,j;
    for(i=1;i<=10000;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        cout<<" "<<i;
    }
}
