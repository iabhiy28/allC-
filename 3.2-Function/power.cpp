#include<iostream>
using namespace std;
 int power() {

    int m , n;
    cin >> m >> n;
    int ans = 1;
    for(int i=1 ; i<=n ;i++)
    {
        ans = ans*m;
    }
    return ans;
 }

int main(){
    int ans = power();
    cout << "Answer is:" << ans;

      ans = power();
    cout << "Answer is:" << ans;

      ans = power();
    cout << "Answer is:" << ans;

     ans = power();
    cout << "Answer is:" << ans;

      ans = power();
    cout << "Answer is:" << ans;

    return 0;

}