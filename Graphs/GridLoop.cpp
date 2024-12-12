#include <bits/stdc++.h>
using namespace std;

int r,c, cycles = 0, longest = 0, mod = 1;
vector<vector<int> > directions(8);
// [0] == top, [1] == left, [2] == down, [3] == right;



void dfs(int x, int y, vector<vector<int> >& used, vector<vector<int> >& grid,int steps, int move) {

    if (used[x][y] == mod) {
        cycles++;
        longest = max(longest,steps);
        return;
    }

    used[x][y] = mod;
    switch (grid[x][y]) {
        case 1: 
            // go left
            if (directions[grid[x][y-1]][3] == 1 && move != 3) {
                dfs(x,y-1,used,grid,steps+1, 1);
                return;
            } 
            //go right
            if (directions[grid[x][y+1]][1] == 1 && move != 1) {
                dfs(x,y+1,used,grid,steps+1, 3);
                return;
            }
            break;
        case 2:
            //go up
            if (directions[grid[x-1][y]][2] == 1 && move != 2) {
                dfs(x-1,y,used,grid,steps+1, 0);
                return;
            }
            // go down
            if (directions[grid[x+1][y]][0] == 1 && move != 0) {
                dfs(x+1,y,used,grid,steps+1,2);
                return;
            }
            break;
        case 3 :
            //go up
            if (directions[grid[x-1][y]][2] == 1 && move != 2) {
                dfs(x-1,y,used,grid,steps+1, 0);
                return;
            }
            //go right
            if (directions[grid[x][y+1]][1] == 1 && move != 1) {
                dfs(x,y+1,used,grid,steps+1, 3);
                return;
            } 
            break;
        case 4: 
            //go right
            if (directions[grid[x][y+1]][1] == 1 && move != 1) {
                dfs(x,y+1,used,grid,steps+1, 3);
                return;
            }
            // go down
            if (directions[grid[x+1][y]][0] == 1 && move != 0) {
                dfs(x+1,y,used,grid,steps+1,2);
                return;
            }
            break;
        case 5:
            // go left
            if (directions[grid[x][y-1]][3] == 1 && move != 3) {
                dfs(x,y-1,used,grid,steps+1, 1);
                return;
            }
            // go down
            if (directions[grid[x+1][y]][0] == 1 && move != 0) {
                dfs(x+1,y,used,grid,steps+1,2);
                return;
            }
            break;
        case 6:
            // go left
            if (directions[grid[x][y-1]][3] == 1 && move != 3) {
                dfs(x,y-1,used,grid,steps+1, 1);
                return;
            }
            //go up
            if (directions[grid[x-1][y]][2] == 1 && move != 2) {
                dfs(x-1,y,used,grid,steps+1, 0);
                return;
            }
            break;
    }
}

int main() {
    cin>>r>>c;
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<vector<int> > grid(r+2, vector<int>(c+2,0));
    for (int i = 1; i <= r; i++) {for (int j = 1; j <= c; j++) {cin>>grid[i][j];}}
    //for (auto a : grid) {for (auto b : a) {cout <<  b << " ";} cout << endl;}

    vector<vector<int> >  used(r+1, vector<int>(c+1,false));
    directions[0] = {0,0,0,0};
    directions[1] = {0,1,0,1};
    directions[2] = {1,0,1,0};
    directions[3] = {1,0,0,1};
    directions[4] = {0,0,1,1};
    directions[5] = {0,1,1,0};
    directions[6] = {1,1,0,0};
    directions[7] = {0,0,0,0};

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (used[i][j]) continue;
            dfs(i, j, used, grid, 0, -1);
            mod++;
        } 
    }

    cout << cycles << " " << longest << "\n"; 
    return 0;
}