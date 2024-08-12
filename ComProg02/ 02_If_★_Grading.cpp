#include <iostream>

using namespace std;

int main() {
    double score;
    cin >> score;
    if (score >= 80) cout << "A" << endl; 
    else if (score >= 70) cout << "B" << endl; 
    else if (score >= 60) cout << "C" << endl; 
    else if (score >= 50) cout << "D" << endl; 
    else cout << "F" << endl;
}