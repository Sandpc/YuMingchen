#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int yue)
{
    balance=0;
    if (yue>0)
        balance=yue;
    if (yue<0)
        cout<<"Warning"<<endl;
}

void Account::credit(int money)
{
    balance=money+balance;
}

void Account::debit(int money)
{
    if (balance>=money)
        balance=balance-money;
    if (balance<money)
        cout<<"Debit amount exceeded account balance"<<endl;
}

int Account::getBalance()
{
    return balance;
}
