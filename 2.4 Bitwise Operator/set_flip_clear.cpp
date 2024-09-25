#include<bits/stdc++.h>

using namespace std;

// set 
void Set(int n , int x){
	int mid = (1<<x);
	int ans =  n | mid ;
	cout << ans << endl;
}

// flip
void flip(int n , int x){
	int mid = (1 << x);
	int res = n ^ mid;
	cout << res << endl;
}


// clear 
void clear(int n , int x){
	int mid = ~(1<<x);
	int res = n & mid;
	cout << res << endl;
}

int main(){
	int m;
	int n;
	int x;
	cin >> m;
	while(m--){
	cin >> n >> x;
	Set(n , x);
	flip(n , x);
	clear(n , x);
	cout << "Case->"  << m << endl;
	}

}