#include<iostream>
using namespace std;

    bool ifeven(int n ) {
        if(n&1) {
            return 0;
        }
        else {
            return 1;
        }
    }
    int main(){
         int n;
        cin >> n;
    
    if(ifeven(n))
    {
        cout << "Number is Even" << endl;
    }
    else {
        cout << "Number is odd " << endl;
    }

    return 0;
}