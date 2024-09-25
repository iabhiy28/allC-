#include<iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter the no to check prime or no" << endl;
    cin >> n;
    bool isprime = 2;
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
      isprime = 0;
      break;
    }
    if(isprime ==0)
    {
        cout << "Entered no:"<< n << "is Not prime" << endl;
    }
    else {
       cout << "Entered no:"<< n << "is prime" << endl;
    }
    return 0;
}