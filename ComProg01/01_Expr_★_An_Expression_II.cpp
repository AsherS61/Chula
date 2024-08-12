#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double positive,above,down;
    do {
        cin >> positive; 
    } while (positive<0);
    double in_power = pow((positive+1),2);
    above = pow(positive, sqrt(log(in_power)));
    down = 10 - positive;

    cout << round((above/down)*1e6)/1e6 << endl;
}