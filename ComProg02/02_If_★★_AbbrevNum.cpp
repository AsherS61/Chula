#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string num_input;
    cin >> num_input;
    int digit = num_input.length();
    double number = stod(num_input);

    if (digit > 0 && digit <=3) cout << number << endl;
    else if (digit >= 4 && digit <= 6) {
        number /= pow(10,3);
        if (digit == 4) number = round(number*10) /10.0;
        else number = round(number);
        cout << number << "K" << endl;
    }
    else if (digit <=9) {
        number /= pow(10,6);
        if (digit == 7) number = round(number*10) / 10.0;
        else number = round(number);
        cout << number << "M" << endl;
    }
    else {
        number /= pow(10,9);
        if (digit == 10) number = round(number*10) /10.0;
        else number = round(number);
        cout << number << "B" << endl;
    }
}