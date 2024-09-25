#include<iostream>
using namespace std;
bool linSearch(int arr[] , int size , int numSearch){
    for(int i=0 ; i < size ; i++){
        if(arr[i]==numSearch){
            return 1;
        }  
    }
     return 0;
}

int main(){
    int arr[10];
    int size = 10;
    cout << "Enter 10 elements:" << endl;
    for(int i = 0 ; i < size ; i++ ){
        cin >> arr[i];
    }
    int numSearch;
    cout << " Enter the number you want to search:" << endl;
    cin >> numSearch;
    
    bool found =  linSearch( arr , size , numSearch);
    if(found){
        cout << "Entered number is present.";
    }
    else{
        cout << " Entered number is not in the array.";
    }

    return 0;
}