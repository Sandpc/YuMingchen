#include <iostream>
using namespace std;

int main()
{
    int n;
    int m=0;
    int smallest;

    cin>>n;

    for (int i=1;i<=n;i++)
    {
        cin>>smallest;
        if (smallest<=m)
            smallest=m;
    }
    cout<<smallest<<endl;
}
