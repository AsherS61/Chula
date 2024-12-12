#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int n;

void recur(int x, int y, unordered_set<int>& column, unordered_set<int>& diag, unordered_set<int>& nodiag, int steps) {
    if (x > n) x = 1;
    if (steps == n) {
        ans++;
        return;
    } else {
        column.insert(y);
        diag.insert(x-y);
        nodiag.insert(x+y);
        for (int j = 1; j <= n; j++) {
            if (column.find(j) == column.end() && diag.find(x+1-j) == diag.end() && nodiag.find(x+1+j) == nodiag.end()) {
                recur(x+1,j,column,diag,nodiag,steps+1);
            }
        } 
        column.erase(y);
        diag.erase(x-y);
        nodiag.erase(x+y);
    }
}

int main() {
    cin>>n;

    unordered_set<int> column,diag,nodiag;

    for (int i = 1; i <= n; i++) {
        recur(1,i,column,diag,nodiag, 1);
        column.clear();
        diag.clear();
        nodiag.clear();
    }

    cout << ans << "\n";
}