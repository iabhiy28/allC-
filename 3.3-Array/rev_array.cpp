#include<iostream>
using namespace std;
void revArray(int arr[] , int size){
    for(int i = (size-1) ;i >=0 ; i-- ){
        cout << arr[i] << endl;
    }
}
int main(){
    int arr[5];
    cout << "Enter array elements:";
    int size = 5;
    for(int i=0; i < size ; i++){
        cin >>  arr[i];
    }
    revArray( arr , size );
    return 0;
}