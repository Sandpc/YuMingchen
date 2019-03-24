#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
   Account account1(100);
   Account account2(200);

   cout << "账户1余额: $" << account1.getBalance() << endl;
   cout << "账户2余额: $" << account2.getBalance() << endl;

   int m;

   cout << "\n输入账户1取款金额：";
   cin >> m;
   account1.debit( m );

   cout << "账户1余额: $" << account1.getBalance() << endl;
   cout << "账户2余额: $" << account2.getBalance() << endl;

   cout << "\n输入账户2取款金额";
   cin >> m;
   account2.debit( m );


   cout << "账户1余额: $" << account1.getBalance() << endl;
   cout << "账户2余额: $" << account2.getBalance() << endl;
}
