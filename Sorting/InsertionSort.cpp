#include <bits/stdc++.h>
using namespace std;

template <typename T>
void insertion_sort(vector<T> A, int b) {
    int count = 0;

    for (int i = 0; i < A.size(); i++) {
        if (A[i] == b) {
            break;
        }
        if (A[i] > b) {
            count++;
        }
    }

    cout << count << "\n";
}

int main() {
    int n,m,in;
    cin>>n>>m;
    vector<int> num;
    for (int i = 0; i < n; i++)  {
        cin>>in;
        num.push_back(in);
    }   

    for (int i = 0; i < m; i++) {
        cin>>in;
        insertion_sort(num,in);
    }
}