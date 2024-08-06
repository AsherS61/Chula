#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three numbers: "; cin >> a >> b >> c;
    if (a != b && a != c && b != c) {
        if (a > b && a > c) cout << "Largest is " << a << endl;
        if (b > a && b > c) cout << "Largest is " << b << endl;
        if (c > b && c > a) cout << "Largest is " << c << endl;
    }
    else {
        if (a == b && a > c) cout << "Largest is " << a << endl;
        if (b == c && b > a) cout << "Largest is " << b << endl;
        if (a == b && b == c) cout << "Largest is " << c << endl;
    }
    
}