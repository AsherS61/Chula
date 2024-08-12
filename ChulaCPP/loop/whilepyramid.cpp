#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter N: "; cin >> n;
        int row = 0;
        while (row++ < n) {
            int col = n-row;
            while (col--) cout << " ";
            col = row*2-1;
            while (col--) cout << "*";
            cout << endl;
        }
    } while (n != -1);
}