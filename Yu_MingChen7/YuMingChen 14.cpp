#include <iostream>
using namespace std;

int main()
{
   int n=1;
   int m;
   int factorial=1;
   double e=1;

   cin>>m;

   while (n<m)
   {
      factorial*=n;
      e+=1/factorial;
      n++;
   }

   cout<<e<<endl;
}
