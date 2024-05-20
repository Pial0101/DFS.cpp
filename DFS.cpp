#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3;
vector<int> graph[MAX];
bool vis[MAX];


void dfs(int source) {
    vis[source] = true;
    for (int i : graph[source]) {
        if (!vis[i]) {
            vis[i]=true;
            dfs(i);
        }
    }
   
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    dfs(0);

    for (int i = 0; i < nodes; i++) {
        if (vis[i]) {
            cout << i << " Yes" << endl;
        } else {
            cout << i << " No" << endl;
        }
    }

    return 0;
}
