#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int o=0;
    int p=0;
    int q=0;

    cout<<"Input 5 different integer: ";
    cin>>x >>y >>z >>o >>p ;

    if (x>=y)
        q=x;
    else if(x<=y)
        q=y;

    if(z>=q)
        q=z;

    if(o>=q)
        q=o;

    if(p>=q)
        q=p;

    cout<<"Max is:"<<q<<endl;


    if (x<=y)
        q=x;
    else if(x>=y)
        q=y;

    if(z<=q)
        q=z;

    if(o<=q)
        q=o;

    if(p<=q)
        q=p;

    cout<<"Min is:"<<q;


    return 0;
}
