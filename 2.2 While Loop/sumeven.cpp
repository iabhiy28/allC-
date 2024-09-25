#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number to get its Even sum:";
    cin >> n;
    int sum=0;
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;

        }
        i++;

    }
    cout << "Sum of the Even terms is:" << sum;
}
