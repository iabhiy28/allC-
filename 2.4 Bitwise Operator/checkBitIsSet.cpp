#include<bits/stdc++.h>
using namespace std;


bool is_set(unsigned int number, int x) {
    return (number >> x) & 1;
}
int main(){

    int m;
    cin >> m;
    unsigned int n;
     int x;
    while(m--){
        cin >> n >> x;
        cout <<  is_set(n , x) << endl; 
        return 0;
    }
}