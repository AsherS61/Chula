#include <iostream>
using namespace std;

int main() {
    int floors;
    cin >> floors;

    for (int i = floors; i > 0; i--) {

        if (i == 1) {
            for (int j = 1; j <= floors*2 - 1; j++) {
                cout << "*";
            }
            cout << endl;
            break;
        }
        
        else {
            for (int j = 1; j <= floors; j++) {
                if (i == j) cout << "*";
                else cout << ".";
            }

            for (int k = 0; k + i < floors; k++) {
                if (k == floors - i - 1) cout << "*";
                else cout << ".";
            }
            cout << endl;
        }
    }
}