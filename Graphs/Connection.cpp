#include <bits/stdc++.h>
using namespace std;

int k;
set<int> answer;

void dfs(int current, vector<vector<int>>& adj, int steps) {
    answer.insert(current);
    if (steps >= k) return;
    for (int i = 0; i < adj.size(); i++) {
        if (adj[current][i] == 1) {
            dfs(i, adj, steps+1);
        }
    }
}

int main() {
    int n,e;
    cin>>n>>e>>k;
    vector<int> incident(n+1,0);
    vector<vector<int>> adj(n,vector<int>(n));

    while (e--) {
        int a,b;
        cin>>a>>b;
        incident[a]++;
        incident[b]++;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    int start = *max_element(incident.begin(),incident.end());
    size_t count = 0;
    for (int i = 0; i < n; i++) {
        dfs(i,adj,0);
        count = max(answer.size(), count);
        answer.clear();
    }
    
    cout << count << "\n";
}