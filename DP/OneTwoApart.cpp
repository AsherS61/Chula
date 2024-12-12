#include <bits/stdc++.h>
using namespace std;
#define pli pair<long,int>

vector<pair<int,int> > directions = {{0,1},{0,-1},{1,0},{-1,0}};
priority_queue< pli, vector<pli>, greater<pli> > pq;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin>>n;
    vector<vector<int> > dp(n+1,vector<int>(2,0));
    int mod = 100000007;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2; j++) {
            if (i==1) {
                dp[i][j] = 1;
                continue;
            }
            if (j == 0) {
                dp[i][j] = ((dp[i-1][0]%mod ) + ((dp[i-1][1]%mod)*2)%mod) % mod ;
                continue;
            }
            if (i >= 4) {
                dp[i][j] = (dp[i-1][1]%mod  + dp[i-2][1]%mod  + dp[i-2][0]%mod)%mod ; 
            } else {
                dp[i][j] = ((dp[i-1][j]%mod )*2) %mod;
            }
        }
    }

    cout << ((dp[n][0]%mod )+ ((dp[n][1]%mod)*2)%mod)%mod << endl;
}