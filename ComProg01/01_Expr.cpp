#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x,y,z, y_pow, ten_fac = 1;
    for (int i = 1 ; i <= 10 ; i++) {
        ten_fac *= i;
    }
    y_pow = (7/sqrt(71)) - sin(2*M_PI/9);

    x = M_PI - (ten_fac/pow(8,8));
    y = pow(log(9.7),y_pow);
    z = pow(1.2,pow(2.3,1/3.));
    cout << (x+y) / z << endl;
}