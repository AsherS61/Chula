#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>& adj, int target,int current, vector<bool>& used, int step) {
    if (used[current]) return false;
    if (current == target && used[current]) return true;
    used[current] = true;
    bool a = false;
    for (int i = 0; i < adj.size(); i++) {
        if (step > 1 && adj[current][i] == 1 && i == target) return true;
        if (!used[i] && adj[current][i] == 1) {
            a = dfs(adj, target, i, used, step+1);
        }
        if (a) return a;
    }
    return false;
}

int main() {
    int T;
    cin>>T;
    vector<vector<int>> adj;
    while (T--) {
        bool done = false;
        int n,e;
        cin>>n>>e;
        adj.clear();
        adj.resize(n,vector<int>(n));

        for (int i = 0; i < e; i++) {
            int a,b;
            cin>>a>>b;
            adj[a][b] = 1;
            adj[b][a] = 1;
        }

        vector<bool> used(n,0);
        for (int i = 0; i < n; i++) {
            done = dfs(adj,i, i, used, 0);
            if (done) break;
            used.clear();
            used.resize(n,0);
        }
        if (done) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}