#include<string>
using namespace std;
class Employee
{
public:
    Employee(string,string,int);
    void setMing(string);
    string getMing();
    void setXing(string);
    string getXing();
    void setYuexin(int);
    int getYuexin();
private:
    string mingName;
    string xingName;
    int yueSalary;
};
