#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    unordered_map<int,int> hashmap;
    int n, total = 0; 
    cin>>n;
    for (int i = 0; i < n; i++) {
        int current = 0;
        for (int j = 0; j < n; j++) {
            int a;
            cin>>a;
            if (a==1) {
                current++;
            }
        }
        hashmap[current]++;
        total = max(current,total);
    }

    for (int i = 0; i <= total; i++) {
        cout << hashmap[i] << " ";
    }
    cout << endl;

}