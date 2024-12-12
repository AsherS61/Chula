#include <bits/stdc++.h>
using namespace std;

int ans = 0,n;

void count(int i,int total) {

    if (total == n) {
        ans++;
    } else {
        for (int j = i; j < n && total + j <= n; j++) {
            count(j,total+j);
        }
    }
}


int main() {
    cin>>n;
    count(1, 0);
    cout << ans+1 << endl;
}

