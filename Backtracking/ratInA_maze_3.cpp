// now going to solve the case rat in maze 2
#include<bits/stdc++.h>
using namespace std;

int Count(int sr , int sc , int er ,int  ec , vector<vector<int>> isVisited){
    // now checking the coditions
    if(sr < 0 || sc < 0) return 0;
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc==ec){
        return 1;
    }
    //now check the index in visited or not
    if(isVisited[sr][sc]==0) return 0;
    if(isVisited[sr][sc]==-1) return 0;
    isVisited[sr][sc] = -1;
    
    int right = Count(sr , sc+1 , er , ec ,isVisited);
    int left = Count(sr , sc-1 , er , ec , isVisited);
    int up = Count(sr-1 , sc , er , ec , isVisited);
    int down = Count(sr+1 , sc , er , ec , isVisited);
    // backtracking
    isVisited[sr][sc] = 1;
    return right+left+up+down;
}
// now function to print the values
void Print(int sr , int sc , int er , int ec , string s , vector<vector<int>> isVisited){
    // conditon fist if the stsrting and the ending is less then zero
    if(sr < 0 || sc < 0) return;
    if(sr > er || sc > ec ) return;
    if(sr==er && sc == ec){
        cout << s << endl;
        return;
    }
    // if the index is visted return 
    if(isVisited[sr][sc]==0) return;
    if(isVisited[sr][sc]==-1) return;
    // now the base conditon
    // now initialise it with the true
    isVisited[sr][sc] = -1;
    Print(sr , sc+1 , er , ec , s+"R" ,isVisited);
    Print(sr , sc-1 , er , ec , s+"L" ,  isVisited);
    Print(sr-1 , sc , er , ec , s+"U"  ,isVisited);
    Print(sr+1 , sc , er , ec , s+"D" ,isVisited);
    // backtracking
    isVisited[sr][sc] = 1;
    return;
}

int main() {
    int row = 3;
    int cols = 3;
    vector<vector<int>> isVisited = {{1, 0, 1}, {1, 1, 1}, {1, 1, 0}};
    string s = "";
    cout << "Total Possible ways are: " << Count(0, 0, row - 1, cols - 1, isVisited) << endl;
    Print(0, 0, row - 1, cols - 1, s, isVisited);
    return 0;
}
// same as this code only diff is a array is given and we have to trace thrugh that array and if val is zero then stop 
// when not zero then make that value -1 for backtracking and check all the coditons and backtrack the array
