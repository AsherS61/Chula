#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1,num2,num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    double in_root = sqrt(pow(num2,2) - (4*num1*num3));

    double x = (-num2 - in_root) / (2*num1);
    double y = (-num2 + in_root) / (2*num1);
    cout << round(x*1e3)/1e3 <<" "<< round(y*1e3)/1e3 << endl;
}