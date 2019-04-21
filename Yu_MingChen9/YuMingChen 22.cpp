#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


int main()
{
    srand(time(0));
    int i=(rand()%999)+1;
    int num;
    int count=0;
    cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess: ";


       while(num!=i)
        {
            cin>>num;
            if (num>i)
                cout<<"Too high! Try again.";
            if (num<i)
                cout<<"Too low! Try again.";
            ++count;
        }
        if (count>10)
            cout<<"You should be able to do better."<<endl;
        if (count<10)
            cout<<"Either you know the secret or you got lucky!"<<endl;
        else if (count==10)
            cout<<"Ahah!You know the secret!"<<endl;


    return 0;
}
