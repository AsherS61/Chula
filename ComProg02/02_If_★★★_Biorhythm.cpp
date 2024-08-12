#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b_day, b_month, b_year, x_day, x_month, x_year, time = 0;
    cin >> b_day >> b_month >> b_year >> x_day >> x_month >> x_year;
    time += (x_year - b_year -1) * 365;
    int day_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    for (int i = b_month; i <= 12; i++) {
        if (i == 2 && (b_year-543) % 4 == 0) time += 1;
        if (i == b_month) time += (day_in_month[i] - b_day + 1);
        else time += day_in_month[i];
    }
    for (int i = 1; i <= x_month; i++) {
        if (i == 3 && (x_year-543) % 4 == 0) time += 1;
        if (i == x_month) time += (x_day - 1);
        else time += day_in_month[i];
    }
    cout << time << " " << round(sin((2*M_PI*time)/23)*100.0)/100.0  << " " << round(sin((2*M_PI*time)/28)*100.0)/100.0  << " " << round(sin((2*M_PI*time)/33)*100.0)/100.0 << endl;
}