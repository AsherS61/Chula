#include <bits/stdc++.h>
using namespace std;

int ans = 0;
vector<bool> used;

void snap(int current, vector<vector<int>>& adj,  vector<bool>& used2) {
    used2[current] = true;
    for (int i = 0; i < adj[current].size(); i++) {
        if (adj[current][i] == 1 && !used2[i]) {
            used[i] = true;
            used2[i] = true;
            snap(i, adj, used2);
        }
    }
}

void dfs(int current, vector<vector<int>>& adj, vector<bool>& used, unordered_map<int,int>& incident,  bool& kill, int prev) {
    if (incident[current] == 0) {
        return;
    }
    for (int i = 0; i < adj[current].size(); i++) {
        if (adj[current][i] == 1) {
            if (i != prev && (used[i] || incident[i] > 2)) {
                kill = true;
                vector<bool> used2(adj.size(),0);
                snap(i, adj, used2);
                return;
            } else if (!used[i]) {
                used[i] = true;
                dfs(i, adj, used, incident, kill, current);
            }
            if (kill) return;
        }
    }
}

int main() {
    int v,e;
    cin>>v>>e;
    vector<vector<int>> adj(v,vector<int>(v));
    unordered_map<int,int> incident;
    used.resize(v);
    while(e--) {
        int a,b;
        cin>>a>>b;
        adj[a][b] = adj[b][a] = 1;
        incident[a]++;
        incident[b]++;
    }

    for (int i = 0; i < v; i++) {
        bool kill = false;
        if (used[i]) continue;
        used[i] = true; 
        if (incident[i] > 2) {
            vector<bool> used2(v,0);
            snap(i, adj, used2);
            kill = true;
        } else {
            dfs(i, adj, used, incident, kill, -1);
        }
        if (!kill) {
            ans++;
        }
    }

    cout << ans << endl;
}