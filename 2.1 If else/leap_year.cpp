#include<iostream>
using namespace std;

int main()
{
    int y;
    cout << "Enter the Year"<< endl;
    cin>> y;
    if(y%4==0)
    {
        if(y%100==0)
            cout << "Entered year is Leap year" << endl;
            }


     else
                cout << "Entered Year is Not leap" << endl;

}
