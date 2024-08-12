#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int budd_year,year,day,y;
    cout << "Enter a year: "; cin >> budd_year;
    year = budd_year - 543;
    int num1,num2;
    num1 = (year/10) % 10;
    num2 = year % 10;
    y = (num1*(10)) + num2;
    day = (y + 11 + floor(y/4));
    cout << day % 7 << endl;

} 