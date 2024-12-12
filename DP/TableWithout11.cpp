#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> seq(n+1);
    seq[1] = 4;
    seq[2] = 7;
    seq[3] = 17;

    for (int i = 4; i <= n; i++) {
        seq[i] = (seq[i-1] + 2*seq[i-2] + (seq[i-1] - seq[i-2])) % 100000007 ;
    }

    cout << seq[n] % 100000007 << endl;
    return 0;
}