#include<iostream>
using namespace std;
int total = 0;
int sumArr(int sum[] , int size){
    for(int i=0 ; i<size ; i++){
      total = total + sum[i];  
    }
    return total;
}

int main(){
    int sum[10];
    int size;
    cout << " Enter the size of the array:" << endl;
    cin >> size;
    cout << "Enter the array elements:" << endl;
    for(int i=0 ; i<size ; i++){
        cin >> sum[i];
    }
    cout << "Sum of the Entered array is:" << sumArr( sum , size);
    return 0;
 
   
}