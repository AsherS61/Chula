#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Somchai";
    cout << s.substr(0,4) << endl;
    cout << s.substr(3,2) << endl;
    cout << s.substr(0,0) << endl;
    cout << s.substr(1,6) << endl;
    cout << s.substr(4,3) << endl;
    string s2 = s.substr(0,4); 
    cout << s2.substr(0,1).length() << endl;
}