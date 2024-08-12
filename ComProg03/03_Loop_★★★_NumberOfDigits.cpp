#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long low_bound, up_bound,number_of_digits = 0;
    cin >> low_bound >> up_bound;
    int low_bound_digit = to_string(low_bound).length();
    int up_bound_digit = to_string(up_bound).length();

    if (low_bound == up_bound) {
        number_of_digits = low_bound_digit;
    }
    else {
        for (int i = low_bound_digit; i <= up_bound_digit; i++) {
            if (i == low_bound_digit) {
                number_of_digits = (((long)pow(10,i)) - low_bound)*i;
            }
            else if (i == up_bound_digit) {
                number_of_digits += (up_bound - (long)(pow(10,i-1)))*i;  
            }
            else {
                number_of_digits += ((long)(pow(10,i)) - (long)(pow(10,i-1)))*i;
            }
        }
        number_of_digits += up_bound_digit;
    }

    cout << number_of_digits << endl;
    
}