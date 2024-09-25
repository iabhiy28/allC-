#include<bits/stdc++.h>
#include<vector>
using namespace std;

// here i am going to use the vector of pairs

int main(){

    vector<pair<int , int>> p = {{1,2},{2,3},{4,5}};

    for ( int i = 0 ; i < p.size() ; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    for(pair i : p)
    {
        cout << i << endl;
    }

    return 0;
}