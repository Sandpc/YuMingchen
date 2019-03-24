#include <iostream>
#include"Employee.h"
using namespace std;

int main()
{
    Employee yuangong1("王","兰花",200000);
    Employee yuangong2("王","德发",500);

    cout<<yuangong1.getXing()<<" "<<yuangong1.getMing()<<": "<<yuangong1.getYuexin()*12<<endl;
    cout<<yuangong2.getXing()<<" "<<yuangong2.getMing()<<": "<<yuangong2.getYuexin()*12<<endl;

    yuangong1.setYuexin(yuangong1.getYuexin()+yuangong1.getYuexin()/10);
    yuangong2.setYuexin(yuangong2.getYuexin()+yuangong2.getYuexin()/10);

    cout<<yuangong1.getXing()<<" "<<yuangong1.getMing()<<": "<<yuangong1.getYuexin()*12<<endl;
    cout<<yuangong2.getXing()<<" "<<yuangong2.getMing()<<": "<<yuangong2.getYuexin()*12<<endl;
};
