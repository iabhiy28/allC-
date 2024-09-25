#include<bits/stdc++.h>
using namespace std;
// implementing bubble sort(with optimisation)
void BubbleSort(vector<int> &arr , int n){
    for(int i = 0 ; i< n-1 ; i++){
        int flag = 0;
        for(int j = 0 ; j< n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] ,arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

int main(){
    vector<int> arr = {7,5,3,32,7,883747,373};
    int n = arr.size();
    BubbleSort(arr , n);
    for(int i= 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}