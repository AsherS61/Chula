#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int z=3;
    z += z++ *5 +abs(-3*4);
    cout << z << endl;
    cout << abs(-3*4);
}