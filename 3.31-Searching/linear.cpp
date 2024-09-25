#include<iostream>
using namespace std;

void find_out(int arr[] , int size , int search)
{
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]==search)
        {
            cout <<"Found at index :" << i << endl;  
        }
    }
}

int main(){
    int arr[10];
    int size;
    int search;
    cout << "Enter the Size of the array:" << endl;
    cin >> size;
    cout << "Enter the array Elements:"<< endl;
    for(int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element you want to search:";
    find_out(arr , size , search);
    return 0;
}