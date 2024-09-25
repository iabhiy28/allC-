#include<bits/stdc++.h>
using namespace std;

// function to print the numbers
void Printt(set<string> &s){
    for(auto it : s){
        cout << it << endl;
    }
}

int main(){

    // created the set
    set<string> s;
    // we cannot access the valeus using the indexes 
    s.insert("abc");
    s.insert("fljgla");
    s.insert("lrgljg");
    s.insert("prak");
    // when we asked about accessing the element we have to take the value in the iterator
    auto it = s.find("abc");
    // above var will store the address of the data
    if(it!=s.end()){
        cout << (*it) << endl;
    }


    // print function call
    Printt(s);

    return 0;
}