#include <iostream>
using namespace std;

int main()
{
    int n=1;
    double pi;

    for (int i=1;i<=1000;i++)
    {
        if (i%2!=0)
            pi+=4/n;
        else
            pi-=4/n;
        cout<<i <<pi<<endl;
    }
}
