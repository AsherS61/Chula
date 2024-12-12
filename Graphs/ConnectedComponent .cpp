#include <bits/stdc++.h>
using namespace std;

vector<bool> done;

void dfs(vector<vector<int>>& adj, int i) {
    if (done[i]) return;
    done[i] = true;
    for (int j = 0; j < adj.size(); j++) {
        if (adj[i][j] == 1 && !done[j]) {
            dfs(adj,j);
        }
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n,vector<int>(n));

    while(m--) {
        int a,b;
        cin>>a>>b;
        adj[a-1][b-1] = 1;
        adj[b-1][a-1] = 1;
    }
    done.resize(n,0);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (!done[i]) {
            count++;
            dfs(adj, i);
        }
    }

    cout << count << endl;
}