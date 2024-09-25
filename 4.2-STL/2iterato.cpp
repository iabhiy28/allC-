#include<bits/stdc++.h>
using namespace std;

int main(){

    // creating a pair
    vector<int> v = { 11,2,3,3,4};
    // now going to display with the help of the iterator 
    // M1
    for(auto i = v.begin() ; i!=v.end() ;++i){
        cout<< *i << " ";
    }
    cout << endl;
    //M2
    for(auto val : v){
        cout << val << " ";
    }
    return 0;
}