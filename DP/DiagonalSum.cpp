#include <bits/stdc++.h> 
using namespace std;

int main() {
    int N,in;
    cin>>N;
    
    vector<vector<int>> num(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin>>in;
            num[i].push_back(in);
        }
    }

    int sum;
    int most = -10000000;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            sum = 0;
            int k = i;
            int l = j;

            while (k < N && l < N) {
                sum += num[k][l];
                k++;
                l++;
                if (sum > most) {
                    most = sum;
                }
            }
        }
    }

    cout << most << endl;
}