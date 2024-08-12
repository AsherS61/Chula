#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: "; cin >> s;
    int i = 0;
    while (i < s.length()/2) {
        swap(s[i],s[s.length() - 1 - i]);
        i++;
    }
    cout << s << endl;
}