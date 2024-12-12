#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>> city(r,vector<int>(c,0));
    for (int j = 0; j < r; j++) for (int i = 0; i < c; i++) cin>>city[j][i];
    //for (auto a : city) {for (auto b : a) {cout << b << " ";} cout << endl;}

    priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> q;
    vector<vector<int>> used(r ,vector<int>(c,0));
    vector<pair<int,int>> adj = {{0,1},{1,0},{-1,0},{0,-1}};
    used[0][0] = 1;
    city[0][0] = 0;
    q.push(make_pair(0,make_pair(0,1)));
    q.push(make_pair(0,make_pair(1,0)));

    while (!q.empty()) {
        auto [val, pair] = q.top();
        auto [x,y] = pair;
        q.pop();
        if (!used[x][y]) {
            city[x][y] += val;
            for (int i = 0; i < adj.size(); i++) {
                int tempx = x+adj[i].first;
                int tempy = y+adj[i].second;
                if (tempx >= 0 && tempx < r && tempy >= 0 && tempy < c && !used[tempx][tempy]) {
                    q.push(make_pair(city[x][y],make_pair(tempx,tempy)));
                }
            }
            used[x][y] = 1;
        }
    }

    for (auto a : city) {for (auto b : a) {cout << b << " ";} cout << endl;}
}