#include <iostream>
#include "date.h"
using namespace std;

int main()
{
    Date d(2,28,1970);
    d.print();
    for (int i=0;i<365;++i)
    {
        d.nextday();
        d.print();
    }
    return 0;
}
