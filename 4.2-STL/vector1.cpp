#include<bits/stdc++.h>
using namespace std;

int main(){
    // here i am going to implement the pair
    pair<int ,char> p;
    // p = make_pair(2 , 'a');
    // also we can initialse as
    p = { 2,'a'};
    // note we cant't initialise the character inside the " "
    cout << p.first << " " << p.second << endl;

    // lets deep dive into the depth and nested pair
    pair< int , string> nr[3];
    // above we have create pair which contains the array
    nr[0] = {1 ,"Abhi"};
    nr[1] = {2 ,"Anjali"};
    nr[2] = {3, "Arun"};
    for(int i = 0 ; i< 3 ; i++)
    {
        cout << nr[i].first << " " << nr[i].second << endl;
    }



    return 0;
}