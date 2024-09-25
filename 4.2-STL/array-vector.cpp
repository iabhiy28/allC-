#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int &n>)
int n;
{
    for(int i ; i < 5 ; i++)
   {
    cout << n[i] << end;
   }
}

int main(){

   // here i have decleare the vector of array

   vector<int> n[5];
   // the above formate called the vector of array
   cout << "NOW I AM GOING TO TAKE THE INPUT OF THE VECTOR ARRAY:" << endl;

   for(int i ; i < 5 ; ++i)
   {
    // first we have to declare a variable whome we are going to insert the value
    int x;
    cin >> x;
    // now i am goint to push this value into the vactor of the array
    n[i].push_back(x);
   }
    for(int i ; i < 5 ; ++i)
   {
    printVec(n[i]);
   }
    return 0;
}