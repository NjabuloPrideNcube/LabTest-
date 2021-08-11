#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main()
{
    cout << "Guess any number between the range of 1 - 100 " << endl;



        int number  =0;
        srand(time(0));
        number = (rand()%100)+1;
        cout<<"The Generated Number "<<number<<endl;
    for (int i=1; i <=5 ;i++)
    {

                 //Stores the Generated Number
        int x=0;
         //random
        //"<<number[i]<<endl;      //The Generated Random Number
        cin>>x;

        //int track=5;

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
           // if (track>i)
                {
            cout<<"Guess Higher"<<endl;
                }

        }else if (number<x)
        {
            //if(track>i)
            {
            cout<<"Guess Lower"<<endl;
            }

        }


    }

    return 0;

}
