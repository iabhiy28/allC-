#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number(1-7) to get the day:";
    cin >> n;
    cout << "You have Entered:" << n << endl;
       switch (n)
       {
       case 1:
           cout <<"Mondey" << endl;
        break;
       case 2:
           cout <<"Tuesday" << endl;
        break;
       case 3:
           cout <<"Wednesday" << endl;
        break;
       case 4:
           cout <<"Thursday" << endl;
        break;
       case 5:
           cout <<"Friday" << endl;
        break;
       case 6:
           cout <<"Saturday" << endl;
        break;
       case 7:
           cout <<"Sunday" << endl;
        break;
       default:
       cout << "You have Entered the default value" << endl;
        break;
       }
    return 0;
}