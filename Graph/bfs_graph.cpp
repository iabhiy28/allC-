#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Graph {
public:
    Graph(int n) : n(n) {
        adj.resize(n + 1);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph() {
        for (int i = 1; i <= n; ++i) {
            cout << "Node " << i << ":";
            for (int v : adj[i]) {
                cout << " " << v;
            }
            cout << endl;
        }
    }
    vector<int> bfsOfGpaph(){
        // first of all make the visited node
        int vis[n] = {0};
        // make the first node 1
        vis[0] = 1;
        // declare the queue
        queue<int> q;
        // now push the first element zero into it
        q.push(0);
        // create a new vector to store the value of the bfs
        vector<int> bfs;
        // now make the function to traverse

        while(!q.empty()){
            // store the front value of the queue
            int node = q.front();
            // now pop out the value of the queue
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }

        }
        return bfs;
    }

private:
    int n;
    vector<vector<int>> adj;
};

int main() {
    int n, m;
    cin >> n >> m;

    Graph graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    // Optional: print the graph to verify
    graph.printGraph();

    return 0;
}
