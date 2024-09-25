#include<iostream>
using namespace std;
int fibbo(int n)
 {
    int a=0;
    int b=1;

    for(int i=0 ; i<=n ; i++)
    {
      int fib = a+b;
      a=b;
      b=fib;
    }
     return b;
}

int main(){
    int n;
    cin >> n;
    cout << "Nth Fibbonachi number is:" << fibbo(n) ;
    
    return 0;
}