#include <iostream>
using namespace std;
int main() {
    int a = 5;
    if (a++ == 6) {
        cout << "a" << endl;
    }

    if (a++ == 6) cout << "b" << endl;
    else {cout << "d" << endl;}

    int b = 10;

    if ( a < 50 || b++ == 10 ) {
        cout << "The value of b: " << b << endl;
    }
}