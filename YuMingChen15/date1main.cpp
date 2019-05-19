#include <iostream>
#include "date.h"
#include <array>
using namespace std;

Date::Date(int m,int d,int y)
:month(m),day(d),year(y)
{

}
void Date::setDate(int mon,int dy,int yr)
{
    static array <int,12> months={31,28,31,30,31,30,31,31,30,31,30,31};
    if (mon<=12&&mon>0)
        month=mon;
    if (((yr%100!=0&&yr%4==0)||(yr%400 == 0))&&(mon==2)&&dy<29)
        day=dy;
    if (dy>0&&dy<months[mon-1])
        day=dy;
    if (yr>=0)
        year=yr;
}
bool Date::endofDate(int mon,int dy,int yr)
{
    static array <int,12> months={31,28,31,30,31,30,31,31,30,31,30,31};
    if (dy>0&&dy<months[mon-1])
        return false;
    if (((yr%100!=0&&yr%4==0)||(yr%400 == 0))&&(mon==2)&&dy<29)
        return false;
    return true;
}
void Date::nextday()
{
    if (!endofDate(month,day,year))
        ++day;
    else if(month<12)
    {
        ++month;
        day=1;
    }
    else
    {
        ++year;
        month=1;
        day=1;
    }
}
void Date::print()
{
    cout<<month<<'/'<<day<<'/'<<year<<endl;
}
