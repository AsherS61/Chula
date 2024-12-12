#include <bits/stdc++.h> 
using namespace std;


int n,m;
vector<int> before;
vector<int> v;
vector<bool> used;

void permu(int step) {

    //when done with a number
    if (step == n) {
        for (auto a : v) {
            cout << a << " ";
        }
        cout << endl;
    } else {
        for (int i = 0;i < n;i++) {
            // check if not used and not in any condition or not used and have been through recur once before
            if (used[i] == false && (before[i] == -1 || used[before[i]]) ) {
                v[step] = i;
                used[i] = true;
                permu(step+1);
                used[i] = false;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> n >> m;

    //reset vectors
    before = vector<int>(n,-1);
    used.resize(n);
    v.resize(n);

    //get input
    for (int i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;
        before[b] = a;
    }

    permu(0);
        
}