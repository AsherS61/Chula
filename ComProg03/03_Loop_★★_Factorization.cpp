#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 2; i <= number/2; i++) {
        if (number % i == 0) {
            cout << i << "*";
            number /= i;
            i = 1;
        }
    }
    
    cout << number << endl;
}