#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    if (number == 0) cout << "zero" << endl;
    else { string ans = number > 0 ? "positive" : "negative"; cout << ans << endl; }

    if (number % 2 == 0) cout << "even" << endl;
    else cout << "odd" << endl;
}