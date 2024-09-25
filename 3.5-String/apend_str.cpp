#include<iostream>
#include<string>
using namespace std;

int main(){
    string first_name="ABHISHEK ";
    string last_name = "YADAV";
    string full_name = first_name.append(last_name);
    cout << full_name << endl;
    int size_fullname = full_name.size();
    cout << size_fullname;
    return 0;
}