#include <iostream>

using namespace std;

int main() {
    // Decalre Variables
    double a,b,c;

    // Get Numbers
    cout << "Enter the first number: "; cin >> a;
    cout << "Enter the second number: "; cin >> b;
    cout << "Enter the third number: "; cin >> c;

    // Calculate Average
    double sum = a+b+c;
    double average = sum/3;
    
    // Print Average
    cout << "The average is " << average << endl;
}