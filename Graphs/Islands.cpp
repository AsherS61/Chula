#include <bits/stdc++.h>
using namespace std;
#define pli tuple<int,int,int>

vector<pair<int,int> > directions = {{0,1},{0,-1},{1,0},{-1,0}};
queue<pli> pq;
int k;
int r,c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>r>>c>>k;

    vector<vector<int>> adj(r+1, vector<int>(c+1,0));

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin>>adj[i][j];
            if (adj[i][j] == 1) {
                pq.push({i,j,0});
            }
        }
    }
    //for (auto a : adj) {for (auto b : a) {cout << b << " ";} cout << "\n"; }
    while (!pq.empty()) {
        auto [x,y,steps] = pq.front();
        pq.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + directions[i].first;
            int ny = y + directions[i].second;

            if (nx > 0 && ny > 0 && nx <= r && ny <= c && adj[nx][ny] == 0) {
                adj[nx][ny] = 2;
                if (steps+1 != k) {
                    pq.push({nx,ny,steps+1});
                }
            }
        }  
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << adj[i][j] << " ";
        } cout << "\n";
    }
}