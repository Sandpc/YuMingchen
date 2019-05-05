#include <iostream>

using namespace std;

int main()
{
    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr;
    vPtr=values;
    for (int i=0;i<5;++i)
        cout<<values[i]<<' ';
    cout<<endl;

    cout<<&values<<endl;
    cout<<vPtr<<endl;

    for (int i=0;i<5;i++)
        cout<<*(vPtr+i)<<' ';
    cout<<endl;

    for (int i=0;i<5;i++)
        cout<<*(values+i)<<' ';

    for (int i=0;i<5;++i)
        cout<<vPtr[i]<<' ';
    cout<<endl;

    cout<<values[4]<<endl;
    cout<<vPtr[4]<<endl;
    cout<<*(vPtr+4)<<endl;
    cout<<*(values+4)<<endl;

    cout<<*(vPtr+3)<<endl;

    vPtr=&values[4];
    vPtr-=4;
    cout<<vPtr<<endl;

}
