#include<iostream>
using namespace std;

int main()
{
    char ch;
    int num1 , num2;
    cout << "Enter the Operation You want to perform:";
    cin >> ch;
    cout << "Enter the First Number:";
    cin >> num1;
    cout << "Enter the second Number:";
    cin >> num2;
    switch (ch)
    {
    case '+': 
        cout << num1 + num2 << endl;

        break;
    case '-': 
        cout << num1 + num2 << endl;
        
        break;
    case '*': 
        cout << num1 * num2 << endl;
        
        break;
    case '/': 
        cout << num1 / num2 << endl;
        
        break;        
    default: cout << "You have Entered the default case.";
        break;
    }

    return 0;
}