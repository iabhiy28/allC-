#include<iostream>
#include<array>
using namespace std;

int main(){
    // Normaly we initialise array with
    int arr[3] = {1 ,2,3};

    // STL representation of an array
    array<int , 4> a = { 1,2,3,4};
    int n = a.size();
    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << endl;
    }
    // to check whether the array is empty or not
    cout << "If True array is empty otherwise its nonempty:" << a.empty() << endl;

    // to get  any element at any index
    cout<< "Element at a particular Index :" << a.at(2) << endl;

    // TO get the first and last element of an array

    cout << "First element of the given array is:" << a.front() << endl;
    cout << "Last element of the given array is:" << a.back() << endl;




    return 0;
}
