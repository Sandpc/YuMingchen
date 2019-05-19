#include <iostream>
#include "date.h"
using namespace std;

Date::Date(int m,int d,int y)
:month(m),day(d),year(y)
{

}
void Date::setDate(int mon,int dy,int yr)
{
    if (mon<=12&&mon>=1)
        month=mon;

}

