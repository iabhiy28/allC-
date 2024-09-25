#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        if(x < 0){
        return false;
        }
        int rev = 0;
        int num = x;
        while(num != 0){
            int  digit = x % 10;
            rev = (rev * 10) + digit;
            num = num/10;
        }
        return (rev == num);
    }
int main(){
    int x = 121;
    isPalindrome(x);
    return 0;
}