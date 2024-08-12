#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int array_size_x, array_size_y;
    cin >> array_size_x >> array_size_y;

    float num_array[array_size_x][array_size_y];

    for (int i = 0; i < array_size_x; i++) {
        for (int j = 0; j < array_size_y; j++) {
            cin >> num_array[i][j];
        }
    }

    for (int i = 1; i < array_size_x - 1; i++) {
        for (int j = 1; j < array_size_y - 1; j++) {
            double sum = num_array[i-1][j-1] + num_array[i-1][j] +num_array[i-1][j+1] + num_array[i][j-1] + num_array[i][j] + num_array[i][j+1] + num_array[i+1][j-1] + num_array[i+1][j] + num_array[i+1][j+1];
            cout << round(sum/9*100.0) /100.0 << " " ;
        }
        cout << endl;
    }
}