#include<bits/stdc++.h>
using namespace std;


// now i am going to declare the structure
struct carcampany{
    string carname;
    float baseprice;
    // here price is in cr
    float topmodel;
} c1 , c2 , c3;

int main(){
    struct carcampany c1;
    c1.carname = "BMW";
    c1.baseprice = 1.2;
    c1.topmodel = 2.1;

    cout  << c1.baseprice << " " << c1.carname  << " " << c1.topmodel << " " << sizeof(c1) <<  endl;
    
    return 0;
}