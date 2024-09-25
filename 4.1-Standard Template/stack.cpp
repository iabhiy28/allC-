#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("Abhishek");
    s.push("Yadav");
    s.push("Sakshi");
    // now i am going to print the given string
    cout << "Top element which will comes first is:" << s.top() << endl;

    // now i am going two pop the elements
    s.pop();
    cout << "New top element after pop of the last element:" << s.top() << endl;
    
    return 0;
}