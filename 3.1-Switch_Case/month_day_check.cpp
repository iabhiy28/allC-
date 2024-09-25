#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Month(1-12):";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Number of Days in Month January is:31" << endl;
        break;
    
    case 2:
         cout << "Number of Days in Month February is:28/29" << endl;
        break;
    
    case 3:
         cout << "Number of Days in Month March is:31" << endl;
        break;;
    case 4:
         cout << "Number of Days in Month April is:30" << endl;
        break;
    case 5:
         cout << "Number of Days in Month May is:31" << endl;
        break;
    case 6:
         cout << "Number of Days in Month June is:30" << endl;
        break;
    case 7:    
         cout << "Number of Days in Month July is:31" << endl;
         break;
    case 8:
         cout << "Number of Days in Month August is:31" << endl;
        break;
    case 9:
         cout << "Number of Days in Month September is:30" << endl;
        break;
    case 10:
         cout << "Number of Days in Month October is:31" << endl;
        break;
    case 11:
         cout << "Number of Days in Month November is:30" << endl;
        break;
    case 12:
         cout << "Number of Days in Month December is:31" << endl;
        break;
    default: cout << "You have Entered the default value" << endl;
        break;
    } 
    return 0;
}