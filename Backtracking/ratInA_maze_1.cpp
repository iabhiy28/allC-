#include<bits/stdc++.h>
// solving the problem rat in a Maze
using namespace std;

int  Maze(int sr , int sc , int er , int ec){
    // check the condition if starting row or column is greater then the ending col return 0;

    if(sr>er || sc> ec){
        return 0;
    }
    // if equal then return 1;
    if(sr > er || sc == ec){
        return 1;
    }
    int right_move = Maze(sr , sc+1 , er , ec);
    int down_move = Maze(sr+1 , sc , er , ec);

    return right_move+down_move;
}
// now in am going to print the path 
void PrintPath(int sr , int sc , int er , int ec , string s){
    // now the same prcedure
    if(sr > er || sc > ec){
        return ;
    }
    if(sr== er || sc == ec){
        cout << s << endl;
        return ;
    }
    // now taking the path
    // for the right path
    // taking_right
    PrintPath(sr , sc+1 , er , ec , s+"R");
    // moking down
    PrintPath(sr+1  ,sc , er , ec , s+"D");
}

int main(){
    int row = 2;
    int cols = 2;
    // string s ="";
    int count = Maze(0 , 0 , row ,cols);
    cout <<"Total no of ways is:" << count<< endl;
    cout << "ALL THE PATHS ARE:" << endl;
    PrintPath(0 , 0 , row, cols , "");
    return 0;
}