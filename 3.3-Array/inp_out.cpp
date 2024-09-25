#include<iostream>
using namespace std;
int print( int n[]){
       for(int i=0 ;i<10 ;i++){

        cout <<  n[i] << " ";
    }
}

int main(){
    int n[10];
    for(int i=0 ;i<10 ;i++){

        cin >> n[i];
    }
    print( n );
}