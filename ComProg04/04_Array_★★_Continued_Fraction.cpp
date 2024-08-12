#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int array_size;
    cin >> array_size;
    double array_num[array_size];

    for (int i = 0 ; i < array_size; i++) cin >> array_num[i];
    for (int i = 0; i < array_size; i++) {
        double sum = array_num[0], fraction = 0; 
    
        for (int j = i; j > 0; j--) {
            
            fraction = 1/(array_num[j] + fraction);
        
        }
        sum += fraction;
        cout << setprecision(10) << sum << endl;
    }
}