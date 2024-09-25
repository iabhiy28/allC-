#include<bits/stdc++.h>
using namespace std;


// here the function to count the number of set bit
int countSetBits(int n ){
    int count =0;
    while(n){
        n =  n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout  << "Enter the number to check its count bit: ";
    cin >> n;
    cout << "Count bit of the number " << n << " is : " << countSetBits(n) << endl;
    return 0;
}