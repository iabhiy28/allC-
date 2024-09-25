#include<iostream>
using namespace std;
int main()
{
    int n;
    int num=1;
    cout << "Enter the number of row do you wants:";
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl ;
        i++;
    }
}
