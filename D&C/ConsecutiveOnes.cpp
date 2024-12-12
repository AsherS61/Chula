#include <bits/stdc++.h>
using namespace std;

int k,m;

void recur(int n, int ma, string s) {
    if (s.size()>k) return;
    if (ma>=m && s.size()==k) cout << s << endl;
    recur(0,ma,s+'0');
    recur(n+1,max(ma,n+1),s+'1');
}

int main() {
    cin>>k>>m;
    recur(0,0,"");
    return 0;
}