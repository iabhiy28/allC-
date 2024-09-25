#include<iostream>
using namespace std;
// to print the sum and product of any individual numberers
int main(){
    int n 12345;
    cout << "Enter any Five digit Number" << endl;
    cin >> n;
    int digit;
     int sum=0;
     int product=1;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
    }
    cout <<"Sum is: "<< sum << endl;
    cout << "Product is:"<< product << endl;

    return 0;
}