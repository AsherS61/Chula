#include <iostream>
#include <cmath>
using namespace std;
 
int main() {

    double input,sum = 0;
    int amount = 0;

    while (true) {
        cin >> input;
        if (input == -1) break;
        sum += input;
        amount++;
    }
    if (amount == 0) cout << "No Data" << endl;
    else { double avg = sum/amount; cout << round(avg*100)/100 << endl;}
    
}