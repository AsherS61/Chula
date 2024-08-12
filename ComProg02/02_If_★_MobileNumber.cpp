#include <iostream>

using namespace std;

int main() {
    string phone;
    cin >> phone;

    if (phone.length() == 10 && (phone.substr(0,2) == "06" || phone.substr(0,2) == "08" || phone.substr(0,2) == "09")) cout << "Mobile number" << endl;
    else cout << "Not a mobile number" << endl;
}