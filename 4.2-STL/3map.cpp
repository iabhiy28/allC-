#include<bits/stdc++.h> 
#include<string.h>
using namespace std;

// fuction to print the values of the map
void print(map<int,string> &it){
    cout << "Size of the map is:" << it.size() << endl;
    for(auto i : it){
        cout << "{"<< i.first<< "," << i.second<< "}" << endl;
    }
}

int main(){

    map<int , string> m;
    // first method to insert in the map
    m[0] = "Abhishek yadav";
    m[1] = "Ragini Yadav";
    m[3] = "Prakriti Yadav";
    // first method to print the values of the map(it is just like the pair)
    for(auto it = m.begin() ; it != m.end() ;++it){
        cout << it->first << " " << it->second << endl;
   }
    // m2 now the second method is 
    map<int,string> n;
    // now i am going to manually inset the data by taking the input from the user
    int key;
    string val;
    for(int i = 0 ; i< 5 ; i++){
        cout << "Enter the key for entry " << i << ": ";
        cin >> key;
        cout << "Enter the value for entry " << i << ": ";
        cin.ignore(); // To ignore newline character left in the input buffer
        getline(cin, val);
        n.insert({key, val});
    } 
    print(n);
    return 0;
}