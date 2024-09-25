#include<iostream>
#include <stdint.h>
using namespace std;
int big( int num[] , int n){

    int max = INT32_MIN;
    for(int i= 0 ; i<n ; i++){
    if(num[i] > max){
        max = num[i];
    }
    }
    return max;   
}
int small( int num[] , int n){
    int min = INT32_MAX;
    for(int i=0 ; i<n ; i++){
        if(num[i] > min){
        min = num[i];
        }
    }
    return min;
     
}

int main(){
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int num[100];
    cout << "Enter the array elements:" << endl;
    for(int i=0 ; i<n ; i++) {
        cin >> num[i];
    }
    cout << "Maximum value is :" << big(num , n) << endl;
    cout << " Minimum value is :" << small(num , n) << endl;

    return 0;
}