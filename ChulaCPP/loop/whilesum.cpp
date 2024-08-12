#include <iostream>

using namespace std; 

int main() {
    int sum = 0, n;
    cout << "Enter n: "; cin >> n;
    while (--n) sum += n+1;
    cout << sum << endl;
}