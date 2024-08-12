#include <iostream>
#include <cmath>
using namespace std;

double between(double L, double U) {
    return (L + U)/2;
}

int main() {
    double a, x, L = 0;
    cin >> a;
    x = between(L,a);
    double U = a;

    while (true) {

        if ((abs(a-pow(10,x))<= pow(10,-10)*max(a,pow(10,x)))) break;

        if (pow(10,x) > a) U = x;
        else L = x;
        x = between(L,U);

    }

    cout << x << endl;
}