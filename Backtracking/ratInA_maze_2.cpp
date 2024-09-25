// now going to solve the case rat in maze 2
#include<bits/stdc++.h>
using namespace std;

int Count(int sr , int sc , int er ,int  ec , vector<vector<bool>> isVisited){
    // now checking the coditions
    if(sr < 0 || sc < 0) return 0;
    if(sr > er || sc > ec) return 0;
    //now check the index in visited or not
    if(isVisited[sr][sc]==true) return 0;
    if(sr == er && sc==ec){
        return 1;
    }
    isVisited[sr][sc] = true;
    int right = Count(sr , sc+1 , er , ec ,isVisited);
    int left = Count(sr , sc-1 , er , ec , isVisited);
    int up = Count(sr-1 , sc , er , ec , isVisited);
    int down = Count(sr+1 , sc , er , ec , isVisited);
    // backtracking
    isVisited[sr][sc] = false;
    return right+left+up+down;
}
// now function to print the values
void Print(int sr , int sc , int er , int ec , string s , vector<vector<bool>> isVisited){
    // conditon fist if the stsrting and the ending is less then zero
    if(sr < 0 || sc < 0) return;
    if(sr > er || sc > ec ) return;
    // if the index is visted return 
    if(isVisited[sr][sc]==true) return;
    // now the base conditon
    if(sr==er && sc == ec){
        cout << s << endl;
        return;
    }
    // now initialise it with the true
    isVisited[sr][sc] = true;
    Print(sr , sc+1 , er , ec , s+"R" ,isVisited);
    Print(sr , sc-1 , er , ec , s+"L" ,  isVisited);
    Print(sr-1 , sc , er , ec , s+"U"  ,isVisited);
    Print(sr+1 , sc , er , ec , s+"D" ,isVisited);
    // backtracking
    isVisited[sr][sc] = false;
    return;
}

int main(){
    int row = 3;
    int cols = 3;
    vector<vector<bool>> isVisited(row ,vector<bool>(cols , false));
    string s = "";
    cout << "Total Possible ways are:" << Count(0 , 0 , row-1 , cols-1 ,isVisited) << endl;
    Print(0 , 0, row-1 , cols-1 , s , isVisited);
    return 0;
}