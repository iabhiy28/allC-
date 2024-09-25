#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    // for inserting the element in the set we generally use insert function

    s.insert(1);
    s.insert(0);
    s.insert(4);
    s.insert(3);
    s.insert(4);

    for(int i : s)
    {
        cout << i <<  endl;

    }

    // now i am going to use the iterator which is something like which move to everyperson
    set<int> :: iterator it = s.begin();
    it++;
     s.erase(it);
    cout << "Set after the deletion my 2nd element:" << endl;
     for(int i : s)
    {
        cout << i <<  endl;

    }



    return 0;
}