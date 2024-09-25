#include<bits/stdc++.h>

using namespace std;
// genrally we use the method to vector when the adj list starts with 0(sequential menner)

// class
class Graph{
public:
    // declare the list
    vector<vector<int>> adj;

    Graph(int n){
        adj.resize(n);
    }

    // Create Edges
    void Edges(int n , int e , bool dir){
        adj[n].push_back(e);
        //check the direction
        if(dir==0){
            adj[e].push_back(n);
        }
    }

    void Display(){
        for(int i = 0 ; i< adj.size() ; i++){
            cout << i << "->";
            for(auto j : adj[i]){
                cout << j << " "; 
            }
            cout << endl;
        }
    }

};

// creating the main function 
int main(){
    int n;
    cout << "Enter the number of Nodes:";
    cin >> n;
    int m;
    cout << " Enter the number of Edges:";
    cin >> m;
    // constructor
    Graph g(n);

    for(int i = 0 ; i < m ; ++i){
        int a , b;
        cin >> a >> b;
        g.Edges(a , b , 0);
    }

    g.Display();

}
