#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    vector<int> arr(x), temp;
    for (int i = 0; i < x; i++) cin>>arr[i];
    temp = arr;
    sort(temp.begin(),temp.end());
    int a = 0, b = 0;
    for (int i = 0; i < x; i++) {
        if (arr[i] < temp[i]) a++;
        if (arr[i] > temp[i]) b++;
    }
    cout << max(a,b) << endl;

}