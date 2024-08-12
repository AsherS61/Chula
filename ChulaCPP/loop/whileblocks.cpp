#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: "; cin >> n;
    int row = n;
    while (row--) {
        int coluum = 1;
        while (coluum <= n) {
            cout << (coluum++ < n - row ? " " : "*");
        }
    cout << endl;
    }
}