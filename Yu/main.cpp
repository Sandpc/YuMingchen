#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
   Account account1(100);
   Account account2(200);

   cout << "�˻�1���: $" << account1.getBalance() << endl;
   cout << "�˻�2���: $" << account2.getBalance() << endl;

   int m;

   cout << "\n�����˻�1ȡ���";
   cin >> m;
   account1.debit( m );

   cout << "�˻�1���: $" << account1.getBalance() << endl;
   cout << "�˻�2���: $" << account2.getBalance() << endl;

   cout << "\n�����˻�2ȡ����";
   cin >> m;
   account2.debit( m );


   cout << "�˻�1���: $" << account1.getBalance() << endl;
   cout << "�˻�2���: $" << account2.getBalance() << endl;
}
