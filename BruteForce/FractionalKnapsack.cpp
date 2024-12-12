#include <bits/stdc++.h>
using namespace std;

bool fraction(pair<double,double> one, pair<double,double> two) {
    return (one.first / one.second > two.first / two.second);
}

int main() {
    double W,N,in;
    cin>>W>>N;

    vector<pair<double,double>> item(N);

    for (double i = 0;i < N; i++) {
        cin>>in; 
        item[i] = (make_pair(in,0));
    }
    for (double i = 0;i < N; i++) {
        cin>>in; 
        item[i].second = in;
    } 

    sort(item.begin(),item.end(), fraction);

    double sumprice = 0;
    double sumweight = 0;
    for (int i = 0; i < N; i++) {
        if (sumweight + item[i].second > W) {
            sumprice += item[i].first * ((W-sumweight) / item[i].second);
            break; 
        } else {
            sumprice += item[i].first;
            sumweight += item[i].second;
        }
    }

    cout << fixed << setprecision(4) << sumprice << endl;
}