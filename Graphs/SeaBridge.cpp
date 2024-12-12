#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>> town(r, vector<int>(c,0));
    vector<vector<bool>> done(r, vector<bool>(c,false));
    queue<tuple<int,int,int>> q;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>>town[i][j];
            if (town[i][j] == 2) {
                done[i][j] = true;
                q.push(make_tuple(1,i,j));
            } else if (town[i][j] == 3) {
                done[i][j] = true;
            }
        }
    }
    vector<pair<int,int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};


    bool found = false;
    while (!q.empty()) {
        auto [val,x,y] = q.front();
        //cout << val << " " << x << " " << y << endl;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dir[i].first;
            int ny = y + dir[i].second;

            if (nx >= 0 && ny >= 0 && nx < r && ny < c && !done[nx][ny]) {
                done[nx][ny] = true;
                if (town[nx][ny] == 1) {
                    cout << val+1 << endl;
                    found = true;
                    break;
                }
                q.push(make_tuple(val+1, nx, ny));
            }
        }

        if (found) break;
    }
    return 0;

}