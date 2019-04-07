#include <iostream>
using namespace std;

int main()
{
   int sum=0;
   int n;
   int m;

   cin>> n;

   for (int i=1;i<=n;i++)
   {
      cin>>m;
      sum+=m;
   }
   cout<<sum<<endl;
}
