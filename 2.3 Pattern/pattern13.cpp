#include<iostream>
using namespace std;
// all you have to do is to find the relation
int main(){
    int n;
    cout << "Enter the no of row you want :";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}