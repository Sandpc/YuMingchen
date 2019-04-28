#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int,20> a={};
    int num=0;
    int m;
    int n;
    cout<<"Enter 20 integers between 10 and 100:"<<endl;
    for (int i=0;i<20; )
    {
        m=0;
        cin >>n;
        if (n>=10&&n<=100 )
        {
            for ( int j=0; j<num; j++ )
            {
                if (n==a[j] )
                {
                    m=1;
                    break;
                }
            }
            if (!m)
            {
                a[num++]=n;
                ++i;
            }
            else
                cout << "Repeat.\n";
        }
        else
            cout << "Different.\n";
    }
    cout << "\n Different values are:\n";
    for ( int i=0; i <20; i++ )
        cout << a[i] << ' ';
    cout << endl;
}
