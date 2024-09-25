#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    cout << "a&b" << (a&b) << endl;
    cout << "a|b" << (a|b) << endl;
    cout << "~a" << (~a) << endl;
    cout << (17<<1) << endl;
    cout << (15<<2) << endl;
    cout << (15>>1) << endl;
    cout << (15>>2) << endl;
    
    return 0;
}