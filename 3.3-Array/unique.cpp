#include<iostream>
using namespace std;
// Given question is if we odd elemets in an array and each element repeat itself for two time 
// get the element whuch does't repeat
int get_unique(int arr[] , int n){
    int ans = 0;
    for(int i=0 ; i<n ;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1,1,3,3,5};
   cout << get_unique(arr, 5) <<  endl;

    return 0;
}