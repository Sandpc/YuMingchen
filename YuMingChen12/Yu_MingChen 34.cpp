#include <iostream>

using namespace std;

int main()
{
    long *longPtr;
    long value1=200000;
    long value2;
    longPtr=&value1;
    cout<<longPtr<<endl;;
    value2=*longPtr;
    cout<<&value1<<endl;
    cout<<value2<<endl;


    int a=1;
    int *number=&a;
    cout<<*number<<endl;

    int *x,y;
    x=&a;

    char s[]="this is a character array";
    const char *sPtr="this is a character array";
    for (;*sPtr!='\0';++sPtr)
    cout<<*sPtr<<' ';

    short *numPtr,result;
    short *genericPtr=numPtr;
    result=*genericPtr+7;

    double d=19.34;
    double *dPtr=&d;
    cout<<*dPtr<<endl;
}
