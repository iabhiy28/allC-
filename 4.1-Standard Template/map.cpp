#include<iostream>
#include<map>
using namespace std;

int main(){
    map< int , string> m;
    m[1]="Abhishek";
    m[2]="Yadav";
    m[3]="Sakshi";
    m[12]="Tiwari";
    // another way to initialise the set and value in an map
    m.insert({5, "Ragini"});

    // now i am going to print the  map element 

    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    // to find the element in the set
    cout << "Finding 12 -> " << m.count(12) << endl;

    return 0;
}