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
    cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess: ";

       while(num!=i)
        {
            cin>>num;
            if (num>i)
                cout<<"Too high! Try again.";
            if (num<i)
                cout<<"Too low! Try again.";
        }
        cout<<"666"<<endl;
        char a[1];
        cout<<"Would you like to play again(y or n): ";
        cin>>a;
        string a1=string(a);
        if (a1=="y")
        {
            cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess: ";

       while(num!=i)
        {
            cin>>num;
            if (num>i)
                cout<<"Too high! Try again.";
            if (num<i)
                cout<<"Too low! Try again.";
        }
        cout<<"666"<<endl;
        }
        else if (a1=="n")
            cout<<"Alright"<<endl;

    return 0;
}
