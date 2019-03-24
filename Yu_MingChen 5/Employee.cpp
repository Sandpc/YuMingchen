#include <iostream>
#include"Employee.h"
using namespace std;

Employee::Employee(string lastname,string firstname,int monthlysalary)
{
    setXing(lastname);
    setMing(firstname);
    setYuexin(monthlysalary);

}
void Employee::setMing(string name)
{
    mingName=name;
}
string Employee::getMing()
{
    return mingName;
}
void Employee::setXing(string name)
{
    xingName=name;
}
string Employee::getXing()
{
    return xingName;
}
void Employee::setYuexin(int salary)
{
    if (salary>0)
        yueSalary=salary;
    if (salary<=0)
        yueSalary=0;
}
int Employee::getYuexin()
{
    return yueSalary;
}


