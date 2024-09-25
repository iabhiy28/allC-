#include<iostream>
using namespace std;

int main(){
    int n;
 char value='A';
// you can't asign the char inside the while loop
    cout << "Enter the no of row do you want:";
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout << value << " ";
            value = value+1;

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}