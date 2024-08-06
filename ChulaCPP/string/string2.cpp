#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Somchai";
    cout << "The String is " << s << endl;
    s[2] = '3';
    cout << "Now string is " << s << endl;
    s[3]++;
    cout << "Now string is " << s << endl;
    s[4] = 90;
    cout << "Now string is " << s << endl;
    int x = s[0];
    cout << x << endl;
}   