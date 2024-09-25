#include<bits/stdc++.h>
using namespace std;

int main(){

    // declaring the vector of pair
    vector<pair<int,int>> v;
    // to take input in the vector pair
    int n;
    cin  >> n;
    for(int i = 0 ; i< n ; i++)
    {
        int x , y;
        cin >> x  >> y;
        // below syntex is used to store the data into the vector paoir
        
        v.push_back({x , y});
    }
    return 0;
}