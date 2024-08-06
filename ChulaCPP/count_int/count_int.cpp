#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 31.99;
    int b = 31.99;
    cout << a << " , " << b << endl;

    a = 12345678900;
    cout << setprecision(11) << a << " , " << b << endl;
}