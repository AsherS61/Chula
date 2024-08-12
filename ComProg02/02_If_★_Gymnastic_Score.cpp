#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1,num2,num3,num4,sum;
    cin >> num1 >> num2 >> num3 >> num4;
    if (num1 > num2 && num1 > num3 && num1 > num4) {
        if (num2 > num3) {
            sum = num3 > num4 ? num2 + num3 : num2 + num4;
        }
        else {
            sum = num2 > num4 ? num2 + num3 : num2 + num4;
        }
    } 
    else if (num2 > num3 && num2 > num4) {
        if (num1 > num3) {
            sum = num3 > num4 ? num1 + num3 : num1 + num4;
        }
        else {
            sum = num1 > num4 ? num3 + num1 : num3 + num4;
        }
    }
    else if (num3 > num4) {
        if (num1 > num2) {
            sum = num2 > num4 ? num1 + num2 : num1 + num4;
        }
        else {
            sum = num1 > num4 ? num2 + num1 : num2 + num4;
        }
    }
    else {
        if (num1 > num2) {
            sum = num2 > num3 ? num1 + num2 : num1 + num3;
        }
        else {
            sum = num1 > num3 ? num2 + num1 : num2 + num3;
        }
    }

    cout << round((sum/2)*100.0)/100.0 << endl;
}