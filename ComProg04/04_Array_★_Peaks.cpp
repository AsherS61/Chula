#include <iostream>
using namespace std;

int main() {
    int array_size, peaks = 0;
    cin >> array_size;
    int graph_y[array_size];


    for (int i = 0; i < array_size; i++) cin >> graph_y[i];

    for (int i = 1; i < array_size - 1; i++) {
        if (graph_y[i] > graph_y[i-1] && graph_y[i] > graph_y[i+1]) peaks+=1;
    }

    cout << peaks << endl;
}