#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>  n = {1 ,2,3,4,5,6};
    // above i have declared the vector
    // now declaring the iterator
    vector<int>::iterator it;
    for(it = n.begin() ; it!= n.end() ; ++it ){
        cout << (*it) << " " ;
    }
    // now declaring the pair 
    pair<int , int> a = {{1,3} , {2,3} , {4,5}};
    // avove we have declared the pair
    // now declaring the itrator
    pair<int , int > :: iterator i;
    for(i = a.begin() ; i != a.end() ;i++){
        cout << i->first << i->second << endl;
    }
    return 0;
}