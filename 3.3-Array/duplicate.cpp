#include<iostream>
using namespace std;

int find_duplicate(int arr[] , int size){
    bool flag = false;
    for(int i=0 ; i< size; i++)
    {
        for(int j =i+1 ; size ; j++)
        {
            if(arr[i]==arr[j])
            {
                cout << arr[i];
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            break;
        }
    }

}

int main(){
    int arr[6] = {1,2,3,4,5,5};
    cout << find_duplicate(arr ,  sizeof(arr)/sizeof(int)) << endl;

    return 0;
}