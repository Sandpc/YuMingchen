#include <iostream>
using namespace std;

int main()
{
   int m;
   int count=0;
   int sum=0;

   cin>>m;

   while (m!=9999)
   {
      sum+=m;
      count++;

      cin>>m;
   }
    cout<<sum/count<<endl;
}
