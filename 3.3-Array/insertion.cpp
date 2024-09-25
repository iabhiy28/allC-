#include<iostream>
using namespace std;

// void insertion_arr(int arr[] , int size , int element , int pos){

// }

int main(){
    int arr[10];
    int size;
    int element;
    int pos;
    cout << "Emter the Size of the array" << endl;
    cin >> size;
    cout << "Enter the array Elements:" << endl;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i];
    }
    cout << "Enter the element you want to insert:" << endl;
    cin >> element;
    cout << "Enter the position:" << endl;
    cin >>pos;
    return 0;
}