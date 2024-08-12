#include <iostream>

using namespace std;

int main() {
    float user_input, t = 1;
    cin >> user_input;

    for (int k = 1 ; k ; k++) {
        t = t * (365 - (k -1)) / 365;

        if (1-t >= user_input) {
            cout << k << endl;
            break;
        }
    }
}