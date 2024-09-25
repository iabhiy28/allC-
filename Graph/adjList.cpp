#include<bits/stdc++.h>
using namespace std;
//Note->we can use the map reprensentation in any cases 

class graph{
    public:
    //adj list
    unordered_map<int , list<int>> adj;

    // creating list
    void addEdges(int u , int v , bool dir){
        adj[u].push_back(v);
        if(dir==0){
            adj[v].push_back(u);
        }
    }
    // to print(since it is inside the class then there is no need to pass the list inside the function)
    void printAdjList(){
        for(auto i: adj){
            cout << i.first << "->";
            for(auto j:i.second){
                cout << j << " ,";
            }
            cout << endl;
        }
    }
};

int  main(){

    int n;
    cout << "Enter the number of nodes";
    cin >> n;
    cout << endl;
    int m; 
    cout << "Enter the number of the edges:";
    cin >> m;
    graph g;
    for(int i= 0 ; i< m ; i++){
        int u , v;
        cin >> u >> v;

        g.addEdges(u , v , 0);

    }
    // to print
    g.printAdjList();
    return 0;
}