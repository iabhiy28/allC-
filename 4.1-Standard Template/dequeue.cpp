#include<iostream>
#include<deque>
using namespace std;
// its all about the double ended queue in this data structure insetion and deletion is possible at both the end
int main(){
    // declaration of the deque 
    deque<int> d;
    // we can pop the element at the front as well as front
    d.push_back(1);
    d.push_front(2);
    cout << "The example of the pop operation is: " << endl;
    for(int i: d )
    {
        cout << i << endl;

    }
    // now i am going to perform pop operation 
    d.pop_front();
    for(int i: d )
    {
        cout << i << endl;

    }

    return 0;
}