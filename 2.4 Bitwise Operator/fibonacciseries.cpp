#include<iostream>
using namespace std;

int main(){
    // lets try fibonacci series
    int n, i;
    int a = 0 , b = 1;
    cout << " Enter the no upto you want to print series:"<< endl;
    cin >> n;
    cout << a << " " << b << " ";
    for (i=0;i<=n;i++)
    {
        
   int sum=a+b;
   cout << sum << " ";
   a=b;
   b=sum;

    }
    return 0;
}