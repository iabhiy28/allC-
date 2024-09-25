#include<bits/stdc++.h>
// first of all we have to include the vector file
#include<vector>
using namespace std;

int main(){
    // first way to declear a vector
    vector<int> v1;
    // here is the way to insert an element in a vector
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    // to take out the last element the the vector is 
    v1.pop_back();
    // to print the element of a vector 
    cout << "The element of the vector of size:" << v1.size() << " " << "capacity:" << v1.capacity() << endl;
    for(int i: v1)
    {
        cout << i << endl;
    }
    // Another way to declare the vector is 
    vector<int> v2(4 , 1);
    // from the above vector 4 represents the size/capacity of the vector
    // and 1 represents at all position initialise with 1
    // to print the veactor
    cout << "Element of second vector is:" << endl;

    printVec(v2);

    for(int i : v2)
    {
        cout << i << endl;
    }
    cout << "HERE I HAVE CLEAR ALL THE ELEMENT OF THE VECTOR 2:" << endl;
    v2.clear();
    cout << v2.size() << endl;
    cout << "But the capacity of the vector ramain same:" << endl;
    cout << v2.capacity() << endl; 
    return 0;
}