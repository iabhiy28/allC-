#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no of row do you want :";
    cin >> n;
    int i=1;
    while(i<=n) {
        int j=1;
         int value =i;
        while(j<=i)
        {
            // another way no solve without taking aother veriable is i-j+1
            cout << value << " ";
            value--;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}