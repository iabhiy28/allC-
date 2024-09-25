#include<iostream>
using namespace std;

int getPivoted(int arr[] ,  int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    // here we are applying the condition on the index number
    while(s<e)
    {
        // here i have applied the condition
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;

    }
    return s;


}

int main(){
    int arr[5] = { 8 , 10 , 17 , 1 , 3};
     
    cout << "Pivoted element index is:" << getPivoted(arr , 5) << endl;
    return 0;
}