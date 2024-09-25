#include<iostream>
#include<list>
using namespace std;
// here i have used the list

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    // now i am going to print the list
    for(int i: l)
    {
        cout << i << endl;

    }
    l.erase(l.begin());
    cout << " List after clearing the begining element:" << endl;
    for(int i: l)
    {
        cout << i << endl;

    }


    return 0;
}