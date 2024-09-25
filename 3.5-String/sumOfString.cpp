#include<bits/stdc++.h>
using namespace std;

string sumOfsring(string &s1 ,string &s2){
	//
	int i = s1.size()-1;
	int j = s2.size()-1;
	int carry = 0;
	string result;
	while(i>=0 || j >=0  || carry){
		int sum = carry;
		if( i >= 0){
			sum += s1[i] - '0';
			i--;
		}
		if(j>=0){
			sum += s2[j] - '0';
			j--;
		}
		carry = sum/10;
		result.push_back(sum % 10 + '0');
	}
	reverse(result.begin(), result.end());
	return result;
};

int main(){
	string s1;
	string s2;
	cin >> s1 >> s2;

	cout << sumOfsring(s1 , s2) << endl;

}