#include<iostream>
using namespace std;
void alt_print(int arr[] , int size){

    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
}
void altSwap(int arr[] , int size){

    for(int i=0; i<size; i+=2){
        if((i+1)< size){
           swap(arr[i] , arr[i+1]);
        }
    }
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {5,4,3,2,1};
    altSwap( even , 6 );

    altSwap( odd , 5);
    cout <<"Alternative swap of the following integer is :";
    alt_print( even , 6);
    alt_print(odd , 5);
    return 0;
}