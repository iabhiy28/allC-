#include<bits/stdc++.h>
#include<string.h>
using namespace std;
// PROBLEM STATEMENT-:Given N string , print unique strings in lexiographical order with their frequency
// first of all seach what does the lexiographical means
int main(){

    //declaring the map
    map<string ,int> m;
    int n ;
    cin >> n;
    for(int i = 0 ; i< n ; i++){
        string s;
        getline(cin,s);
        m[s]++;
    }

    // to print the given sring 
    for(auto it: m){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}