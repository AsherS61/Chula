#include <bits/stdc++.h>
using namespace std;

int done = 0;

void check(string first, string second) {
    if (done) return;
    if (first.length() <= 1) return; 

    int one = 0, two = 0;
    for (int i = 0; i < first.length(); i++) {
        if (first[i] == '1') one++;
        if (second[i] == '1') two++;
    }
    if (abs(one - two) > 1) {
        done = 1;
        return;
    }

    check(first.substr(0, first.length()/2), first.substr(first.length()/2, first.length()/2));
    if (done) return;
    check(second.substr(0, second.length()/2), second.substr(second.length()/2, second.length()/2));

}

int main() {
    int n,k; cin>>n>>k;
    string s;
    while (n--) {
        done = 0;
        s.clear();
        for (int i = 0; i < pow(2,k); i++) {
            int a;
            cin>>a;
            s+=to_string(a);
        }
        //cout << s << endl;
        check(s.substr(0, pow(2,k)/2), s.substr(pow(2,k)/2, pow(2,k)/2));

        if (done) cout << "no\n";
        else cout << "yes\n";
    }

    return 0;
}