#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>> n;
    cout<< "Entered keyword is:" << n << endl;
    if(n>=0&&n<=9)
    {
        cout << "Entered Keyword is Number"<< endl;

    }
    else if(n>='a'&&n<='z')
    {
        cout << "Entered keyword is Lower Case" << endl;
    }
    else if(n>='A'&&n<='Z')
    {
        cout << "Entered Keyword is Upper CASE" << endl;
    }
}
