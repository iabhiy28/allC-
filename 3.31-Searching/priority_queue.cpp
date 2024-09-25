#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> maxi;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    int size = maxi.size();
    cout << "Elements in descending order is:" << endl;
    for(int i=0 ;i <size ; i++ )
    {
    cout << maxi.top() << endl;
    maxi.pop();
    }
    // when we will push it will push the maximum value
    priority_queue<int , vector<int> , greater<int> > mini ;
    // it will pop out the smallest elements
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    int size2 = mini.size();
    cout << "Elements in descending order is:" <<  endl;
    for(int i=0 ;i<size2; i++ )
    {
    cout << mini.top() << endl;
    mini.pop();
    }
    return 0;
}