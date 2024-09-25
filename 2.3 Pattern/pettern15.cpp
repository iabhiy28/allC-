#include<iostream>
using namespace std;
// just notice the relation shown
int main(){
    int n;
    cout << "Emter the no of row do you want :";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i+j-2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}