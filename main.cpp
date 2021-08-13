#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
// I accepted the request...
int main()
{
    cout << "Guess any number between the range of 1 - 100 " << endl;

        int number  = 0;
        srand(time(0));
        number = (rand()%100)+1;  //The Generated Random Number
        cout<<"The Generated Number "<<number<<endl;
    for (int i=1; i <=5 ;i++)
    {
        int x=0;     
        cin>>x;

        if (number ==x )
        {
            cout<<"You won!!"<<endl;
            break;
        }
        else if (i==5)
        {
            cout<<"Sorry! you lost"<<endl;
        }
        else if (number>x)
        {
           
                {
            cout<<"Guess Higher"<<endl;
                }

        }else if (number<x)
        {
           
            {
            cout<<"Guess Lower"<<endl;
            }
        }

    }
    return 0;
}
//Nice code
